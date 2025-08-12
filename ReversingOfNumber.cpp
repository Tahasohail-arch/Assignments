#include<iostream>
#include<cmath>
#include<string>
// Tahasohail SE-B 24i-3165
// First, we will take 5 digit integer as a input from user
using namespace std;
int main()
{
	int num;
	int a,b,c,d,e;
	cout<<" Enter your 5 digit number : ";
	cin>>num;
	a=num/10000;
	//dividing num by 10000 it will give the first digit of users number
	b=(num%10000)/1000;
	//Taking modulus of num by 10000 will convert 5 digit into 4 and divide it by 1000 give the 2nd digit
	c=(num%1000)/100;
	//Taking modulus of num by 1000 will convert 5 digit into 3 and divide it by 100 give the 3rd digit
	d=(num%100)/10;
	//Taking modulus of num by 100 will convert 5 digit into 2 and divide it by 10 give the 4th digit
	e=(num%10)/1;
	//Taking modulus of num by 10 will convert 5 digit into 1 and divide it by 1 give the last digit
	cout<<"Reverse order is : "<<e<<d<<c<<b<<a;
	return 404;
}

