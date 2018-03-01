#include <stdio.h>

int main()
{
    int a[1000],n,num,i;
    scanf("%d",&num);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==num) 
        {
            printf("%d",i); 
            break;
        }
    }
    if(i==n)
    {
       printf("-1");
    }
}
