#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        sum=sum+pow(i,3);
        }
    }
    printf("the sum of the cubes of even numbers are:%d",sum);
    return 0;
}
