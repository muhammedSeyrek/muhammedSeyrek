#include<stdio.h>
int func();
int main(){
	int number;
	scanf("%d",&number);
	printf("%d ",func(number));	
	return 0;	
}
int func(int number){
	if(number>=1)
	return number + func(number-1);
}
