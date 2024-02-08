#include <stdio.h>
#include <stdlib.h>

void	intToBinary(int n)
{
	for(int i = 0; i < 32; i++){
		int k = n >> i;
		if(k & 1) printf ("1");
		else printf ("0");
	}
	printf ("\n");
}

int main(int argc, char **argv)
{
	if (argc != 2) return(1);
	intToBinary(atoi(argv[1]));
	return (0);
}