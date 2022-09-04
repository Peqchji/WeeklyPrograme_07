#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
   printf("Before process\nnum1 = %d, num2 = %d", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nAfter process\nnum1 = %d, num2 = %d", num1, num2);
}