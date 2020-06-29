
//header file which have the code for Reverse of a number function.
int ReverseNumber(int n){
	int Answer=0,LastDigit=0;
	while(n!=0){
		LastDigit=n%10;
		n=n/10;
		Answer=Answer*10+LastDigit;
	}
	return Answer;
}