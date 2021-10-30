#include <stdio.h>

void main(void)
{
    int num1 = 0;
    int num2 = 0;
    int Answer1 = 0;
    int Answer2 = 0;

    printf("input 1st value: \n");
    scanf("%d", &num1);
    printf("input 2nd value: \n");
    scanf("%d", &num2);

    Answer1 = num1 / num2;
    Answer2 = Answer1 * num2;

    printf("result: %d\n", Answer1);
    printf("result: %d\n", Answer2);

    return;
}