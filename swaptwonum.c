#include<stdio.h>
int main()
{
int a,b,temp;

printf("Enter Two Numbers:");
scanf("%d%d",&a,&b);

printf("Before swapping:a=%d,b=%d\n",a,b);

temp=a;
a=b;
temp=b;
b=a;
 
printf("After swapping:a=%d,b=%d\n",a,b);
return 0;
}
