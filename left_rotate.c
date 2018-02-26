#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char num[100];
  int n,i,len;
  scanf("%s",num);
  scanf("%d",&n);
  len=strlen(num);
  for(i=n;i<=len;i++)
  {
    printf("%c",num[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("%c",num[i]);
  }
}
