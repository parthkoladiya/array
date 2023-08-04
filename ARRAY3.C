#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,sum=0,array[5];
  clrscr();
  printf("ENTER YOUR LIMIT==>");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
    if(array[i]%2==0)
    {
      printf("%d\n",array[i]);
      sum=sum+array[i];
    }
  }
  printf("%d\n",sum);
  getch();
}