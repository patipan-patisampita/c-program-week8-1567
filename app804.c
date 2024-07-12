#include<stdio.h>
void forLoop();
void main()
{
    int i = 1, number;
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);
    printf("\nThe multiplication table of %d\n", number);

    forLoop();
    printf("\n");
    do
    {
        printf("%d x %d = %d\n", number, i, (number * i));
        i = i + 1;
    } while (i <= 12);
}

void forLoop()
{
    int j = 1, count2 = 30;
    for (j = 1; j <= count2; j++)
    {
        printf("-");
    }
}