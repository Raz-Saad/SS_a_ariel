#include "NumClass.h"
#include <math.h>


//assisting function for isArmstrong
int isArmstrong2(int num,int len)
{
     if(num>0)
     {
        return ((int)pow(num%10,len) +isArmstrong2(num/10,len));
     }
     return 0;
}

int isArmstrong(int num)
{
     int num_len=floor(log10(num)) + 1;
     int sum= isArmstrong2(num,num_len);
     if(sum == num)
        return 1;

     return 0;   

}


int reverse(int num,int reverse_num)
{
    int mod;
    int ans=0;
    if(num!=0)
    {
        mod=num%10;
        reverse_num=reverse_num*10+mod;
        ans=reverse(num/10,reverse_num);
    }
    else
        return reverse_num;

    return ans;
}


int isPalindrome(int num)
{
    if(num == reverse(num,0))
    {
        return 1;
    }
    return 0;
}


