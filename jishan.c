#include<stdio.h>
void main(){
int j,i,s;
printf("Enter a number:");
scanf("%d",&j);
i=0;
while(j!=0){
	s=j%10;
	i=i*10+s;
	j/=10;
}printf("Reversed number is:%d",i);
}
