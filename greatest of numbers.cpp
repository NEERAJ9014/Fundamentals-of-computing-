#include<stdio.h>
int main() {
float num1,num2;
printf("Enter two number:");
scanf("%f %f",&num1,&num2);
if(num1>=num2)
printf("\n%0.2f is greater than or equal to %0.2f",num1,num2);
else
printf("\n%0.2f is lesser than %0.2f",num1,num2);
return 0;
}
