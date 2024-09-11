#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc > 2)
    {
        int sum = 0;
        for (int i = 1; i<argc; i++)
        {
            sum += atoi(argv[i]);
        }
        printf("The sum of the values is %d", sum);
    }
    else
    {
        printf("No input was given\n");
    }
    return 0;
}