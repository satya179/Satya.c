#include <stdio.h>
int main() {
    int n,rem,sum=0,temp;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
         n=n/10;        
    }
    printf("the sum of digits of %d is %d",temp,sum);
       return 0;
}
