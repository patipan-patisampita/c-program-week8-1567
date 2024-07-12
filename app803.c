#include <stdio.h>
void forLoop();
void main()
{
    int i = 1, number, count = 12;
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);
    printf("\nThe multiplication table of %d\n", number);
    // printf("---------------------------\n");
    forLoop();
    printf("\n");
    while (i <= count)
    {
        printf("%d x %d = %d\n", number, i, (number * i));
        i = i + 1;
    }
}

void forLoop(){
    int j = 1, number, count2 = 30;
    for (j = 1; j <= count2; j++)
    {
        printf("-");
    }
}