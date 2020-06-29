
//this is used to find the reverse of  a number.
#include<stdio.h>
int ReverseNumber(int);
int main(){
	int n=0,reverse=0;
	printf("Enter number\n");
	scanf("%d",&n);
	reverse=ReverseNumber(n);
	printf("Reverse Number is:%d\n",reverse);
	return 0;
}
int ReverseNumber(int n){
	int Answer=0,LastDigit=0;
	while(n!=0){
		LastDigit=n%10;
		n=n/10;
		Answer=Answer*10+LastDigit;
	}
	return Answer;
}