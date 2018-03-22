#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

	int marginValues[argc - 1];

	for ( int i = 0; i < argc; i++ )
	{
		if ( i == 0 ) continue;
		if (isdigit(*argv[i]))
		{
			marginValues[i] = *argv[i];
		}
	}

	for ( int i = 0; i <= (sizeof(marginValues) / sizeof(marginValues[0])); i++ )
	{
		printf("index: %d\n", i);
		printf("%d\n", marginValues[i]);
	}

	return 0;
}
