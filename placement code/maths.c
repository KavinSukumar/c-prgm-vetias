#include <stdio.h>

int main()
{
    int a, b;
    int sum,sub,multi,division;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum: %d\n", sum);
    sub= a - b;
    printf("subraction: %d\n", sub);
    multi = a * b;
    printf("multiplication: %d\n", multi);
    division = a / b ;
    printf("division:%d",division);
    return 0;
}
