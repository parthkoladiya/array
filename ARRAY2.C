#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0,array[15];
  clrscr();
  printf("ENTER YOUR LIMIT");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
   sum=sum+array[i];
  }
  printf("%d",sum);
  getch();
}