#include <stdio.h>
#include "NumClass.h"

int main()
{
   int min,max;
   scanf("%d", &min);
   scanf("%d",&max);
   
   if(min>max)
   {
        int temp=max;
        max=min;
        min=temp;
   }

    //Armstrong numbers
    printf("The Armstrong numbers are:");
   for(int i=min;i<=max;i++)
   {
    if(isArmstrong(i)==1)
        printf(" %d",i);
   }
    printf("\n");
    //Palindromes  numbers
    printf("The Palindromes are:");
   for(int i=min;i<=max;i++)
   {
        if(isPalindrome(i)==1)
            printf(" %d",i);
   }
    printf("\n");
    //Prime numbers
    printf("The Prime numbers are:");
   for(int i=min;i<=max;i++)
   {
        if(isPrime(i)==1)
            printf(" %d",i);
   }
    printf("\n");
   //Strong number
   printf("The Strong numbers are:");
   for(int i=min;i<=max;i++)
   {
        if(isStrong(i)==1)
            printf(" %d",i);
   }
    printf("\n");
   
}