#include <stdio.h>

int main (void)
{
    int n = 0;
    void *v = &n;
    unsigned char *c = v;
    // unsigned char *c = (unsigned char *) v;

    printf("%p\n", &n);
    printf("%p\n", v);
    printf("%p\n", c);
    for (int i = 0; i < 32; i++)
    {
        printf ("%c", c[i] ? 49 : 48);
    } 
    return (0);
}
