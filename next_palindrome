#include <stdio.h>
void rev(int m);
int main()
{
    int n;
    scanf("%d", &n);
    n=n+1;
    rev(n);
}
void rev(int n)
{
    int temp,rem,rev;
    while(1)
    {
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            rev=(rev*10)+rem;
            temp/=10;   
        }
        if(rev==n)
        {
            printf("%d",n);
            break;
        }
        else
        {
            n++;
        }
    }
    
}
