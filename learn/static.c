#include <unistd.h>
#include <stdio.h>

int func(void)
{
    static int n = 0;
    ++n;
    return (n);
}

int main(void)
{
    int pid = fork();
    if (pid == 0) {
        printf("child: %d\n", func());
        return (0);
    }
    printf("parent: %d\n", func());
    return (0);
}