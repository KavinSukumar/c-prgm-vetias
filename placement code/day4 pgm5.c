/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num;
   printf("Enter an integer:");
   scanf("%d",&num);
   while (num>0)
   {
       int digit=num%10;
       num=num/10;
       printf("%d",digit);
   }
    return 0;
}
