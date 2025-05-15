/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,rem,sum=0;
   scanf("%d",&a);
   while (a>0)
   {
       rem=a%10;
       a=a/10;
       sum=sum+rem;
   }
   printf("%d",sum);

    return 0;
}
