#include "NumClass.h"
#include <math.h>


int isArmstrong (int num)
{
    int check=0;
    int num_len=floor(log10(num)) + 1;
    int num1=num;
    double mod;
    
    while(num1!=0)
    {
        mod=num1%10;
        num1=num1/10;
        check=check +(int)pow(mod,num_len);
    }
    
   if(check==num)
        return 1;
    else
        return 0;
}

int isPalindrome(int num)
{
    int num1=num;
    int reverse_num = 0;
    while (num1 != 0)
    {
        int mod = num1 % 10;
        reverse_num = reverse_num * 10 + mod;
        num1 = num1/10;
    }

    if(reverse_num==num)
        return 1;
    else
        return 0;

}
