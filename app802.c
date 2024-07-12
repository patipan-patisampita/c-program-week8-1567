#include <stdio.h>
int forLoop();
void main()
{
    int number, i; // declarative
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);

    printf("\nThe multiplication table of %d\n", number);
    forLoop();
    printf("\n");
    // printf("*****************************\n");
    for (i = 1; i <= 12; i = i + 1)
    {
        printf("%d x %d = %d\n", number, i, (number * i));
    }
}

int forLoop()
{
    int i, count = 30;
    for (i = 1; i <= count; i++)
    {
        printf("*");
    }
    return 0;
}
