#include "NumClass.h"

int isPrime(int num)
{
    if(num==0)
        return 0;
 
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }

    return 1;
}

int factorial(int n)  // assisting function for isStrong
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
} 

int isStrong(int num)
{
    if (num ==0)
        return 0;
        
    int check=0;
    int num1=num;
    int mod;
 
    while(num1!=0)
    {
        mod=num1%10;
        num1=num1/10;
        check=check +factorial(mod);
    }
    
    if(check==num)
        return 1;
    else
        return 0;
}


