#include <stdio.h>
int main(){
int a,b,sum;
int*ptr1,*ptr2;
printf("enter two numbers to add\na=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
ptr1=&a;ptr2=&b;
sum=*ptr1+*ptr2;
printf("sum of two numbers is=%d",sum);

}return0;