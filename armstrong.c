#include<stdio.h>
void main()
{
int  n,s=0 ,temp ,x;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
x=n%10;
s=s+(x*x*x);
n=n/10;
}
if(temp==s)
printf("%d is an armstrong number",temp);
else
printf("%d is not an armstrong number",temp);
}
