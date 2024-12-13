#include <stdio.h>
int main() {
    int n,rem,rev=0,temp;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
         n=n/10;        
    }
    printf("the reverse of %d is %d",temp,rev);
       return 0;
}
