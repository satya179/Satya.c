#include <stdio.h>
int main() {
    int n,rem,rev=0,temp=0;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        
        n=n/10;        
    }
    if(temp==rev)
    {
    printf("the given number %d is pallindrom",temp);
    }
    else
    {
        printf("not a pallindrom");
    }
    return 0;
}
