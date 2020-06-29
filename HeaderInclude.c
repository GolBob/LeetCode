
//this file is for including the user header files to another code here we use ReverseNumber.h file which is in our repository.
#include<stdio.h>
#include"ReverseNumber.h"
int main(){
	int number=0,Ans=0;
	printf("Enter number:\n");
	scanf("%d",&number);
	Ans=ReverseNumber(number);
	printf("%d",Ans);
}