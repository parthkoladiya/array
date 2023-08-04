#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,mul=1,array[5];
  clrscr();
  printf("ENTER YOUR LIMIT==>");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
    if(array[i]%2==1)
    {
      printf("%d\n",array[i]);
      mul=mul*array[i];
    }
  }
  printf("%d\n",mul);
  getch();
}