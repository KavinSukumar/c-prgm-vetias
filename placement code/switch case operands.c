#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    printf("enter the operator (+,-,*,/):");
    scanf("%c",&operator);
    printf("enter the operants:");
    scanf("%lf %lf", &num1,&num2);
    switch(operator){
        case '+':
        result=num1+num2;
        printf("result:%.10lf",result);
        break;
        case '-':
        result=num1-num2;
        printf("result:%.2lf",result);
        break;
        case '*':
        result=num1*num2;
        printf("result:%.2lf",result);
        break;
        case '/':
        result=num1/num2;
        printf("result:%.2lf",result);
        break;
    }
    return 0;
}