
//to find whether the given number is a palindrome or not.
#include<stdio.h>
int Palindrome(int);
int main(){
	int n=0,reverse=0,num=0;
	printf("Enter number\n");
	scanf("%d",&n);
	num=n;
	reverse=Palindrome(num);
	if(n==reverse){
		printf("Given Number iss a Palindrome\n");
	}
	else{
		printf("Given Number is not a aplindrome\n");
	}
}
int Palindrome(int num){
	int Answer=0,LastDigit=0;
	while(num!=0){
		LastDigit=num%10;
		num=num/10;
		Answer=Answer*10+LastDigit;
	}
	return Answer;
}