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
        int average = sum / (argc-1);
        printf("The average of the values is %d", average);
    }
    else
    {
        printf("No input was given\n");
    }
    return 0;
}