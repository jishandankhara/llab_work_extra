#include<stdio.h>
void main(){
int a,b,c,d;
printf("Enter a number:");
scanf("%d",&a);
c =a%10;
while(a>10)
{b=a/10;
a=b;}
d=b+c;
printf("%d",d);
}
