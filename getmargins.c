#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int marginValues[argc];

    for ( int i = 0; i < argc; i++ )
    {
            if ( i == 0 ) continue;
            if (isdigit(*argv[i]))
            {
                int value = atoi(argv[i]);
                marginValues[i] = value;
            }
    }

    size_t size = sizeof(marginValues) / sizeof(marginValues[0]);
    size -= 1;

    switch(size)
    {
        case 1:
            printf("%s %d \n", "You entered:", marginValues[1]);
            printf("%s\n", "This gives the following values:");
            printf("%s %d%s\n", "Margin-top:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-right:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-bottom:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-left:", marginValues[1], "px");
            break;
        case 2:
            printf("%s %d, %d\n", "You entered:", marginValues[1], marginValues[2]);
            printf("%s\n", "This gives the following values:");
            printf("%s %d%s\n", "Margin-top:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-right:", marginValues[2], "px");
            printf("%s %d%s\n", "Margin-bottom:", marginValues[1], "px");
            printf("%s%d%s\n", "Margin-left:", marginValues[2], "px");
            break;
        case 3:
            printf("%s %d, %d, %d\n", "You entered:", marginValues[1], marginValues[2], marginValues[3]);
            printf("%s\n", "This gives the following values:");
            printf("%s %d%s\n", "Margin-top:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-right:", marginValues[2], "px");
            printf("%s %d%s\n", "Margin-bottom:", marginValues[3], "px");
            printf("%s %d%s\n", "Margin-left:", marginValues[2], "px");
            break;
        case 4:
            printf("%s %d, %d, %d, %d\n", "You entered:", marginValues[1], marginValues[2], marginValues[3], marginValues[4]);
            printf("%s\n", "This gives the following values:");
            printf("%s %d%s\n", "Margin-top:", marginValues[1], "px");
            printf("%s %d%s\n", "Margin-right:", marginValues[2], "px");
            printf("%s %d%s\n", "Margin-bottom:", marginValues[3], "px");
            printf("%s %d%s\n", "Margin-left:", marginValues[4], "px");
            break;
    }

    return 0;
}
