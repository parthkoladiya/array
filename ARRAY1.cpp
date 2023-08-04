#include <stdio.h>
#include <conio.h>
int main ()
{
int i,n,array[5];
clrscr();
printf("ENTER YOUR ARRAY VALUE==>");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
printf("%d",array[i]);
}
getch();
}