#include <stdio.h>
#include<math.h>

int main() {
    int n,rem,sum=0,power=0,temp=0;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        printf("rem %d\n",rem);
        sum=sum+pow(rem,3);
        n=n/10;        
    }
    printf("sum %d\n",sum);
    if(temp==sum)
    {
    printf("the given number %d is amstrong",temp);
    }
    else
    {
        printf("not a amstrong");
    }
    return 0;
}
