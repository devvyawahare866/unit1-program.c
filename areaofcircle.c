#include<stdio.h>
int main()
{
float radius,area;
const float Pi=3.14159;
 
printf("Enter radius of circle:");
scanf("%f",&radius);

area=Pi*radius*radius;

printf("Area of circle=%.2f\n",area);

return 0;
}

