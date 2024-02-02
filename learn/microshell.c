#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int err(char *msg)
{
    while(*msg)
        write(2, msg++, 1);
    write(2, "\n", 1);
    return(1);
}

int cd(char **argv, int i)
{
    (void) argv;
    (void) i;
    if (i < 2)
        return (err("Error: cd"));
    if (chdir(argv[i -1]) == -1)
        return (err("Error: cd"));
    return (0);
}

int exe(char **argv, char **env, int i)
{
    int fd[2];
    int pid;
    int status;
    int hasPipe = argv[i] && !strcmp(argv[i], "|");

    if (hasPipe && pipe(fd) == -1)
        return (err("pipe"));

    pid = fork();
    if (!pid)
    {
        argv[i] = NULL;
        if (hasPipe && (dup2(fd[1], 1) == -1 || close(fd[1]) == -1 || close(fd[0]) == -1))
            return (err("Fatal"));
        execve(*argv, argv, env);
        return (err("can not execve"));
    }
    waitpid(pid, &status, 0);
    if (hasPipe && (dup2(fd[0], 0) == -1 || close(fd[1]) == -1 || close(fd[0]) == -1))
        return (err("Fatal"));
    return (WEXITSTATUS(status));
}

int main(int argc, char **argv, char **env)
{
    int i = 0;
    int status = 0;

    if (argc > 1)
    {
        while (argv[i] && argv[++i])
        {
            argv += i;
            i = 0;
            while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
                i++ ;
            if (!strcmp(*argv, "cd"))
            {
                status = cd(argv, i);
            }
            else if (i)
            {
                // printf("i: %d\n", i);
                status = exe(argv, env, i);
            }
        }
    }
    return (status);
}
