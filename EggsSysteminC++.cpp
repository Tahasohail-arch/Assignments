// TahaSohail 
// 24i-3165
//SE-B 
// Assignment Number=2
#include<iostream>
using namespace std;
int main()
{
	int ne,p,lo;
	taha:
		// First we will input eggs from user
	cout<<"Enter your number of eggs : ";
	cin>>ne;
	// for validation
	if(ne>=0)
	{
	// for first packet which can consists only 30 eggs
	if(ne>=0 || ne>=30)
	{
		p=ne/30;
		cout<<"Number of 30 eggs packaging :"<<p;
		lo=ne%30;
		cout<<endl<<"left over eggs "<<lo;
	}else {
	ne=ne;}
		// for first packet which can consists only 24 eggs
		if(ne>=0 || ne>=24)
	{
		p=ne/24;
		cout<<endl<<"Number of 24 eggs packaging :"<<p;
		lo=ne%24;
		cout<<endl<<"left over eggs "<<lo;
	}else {
	ne=ne;}
		// for first packet which can consists only 18 eggs
		if(ne>=0 || ne>=18)
	{
		p=ne/18;
		cout<<endl<<"Number of 18 eggs packaging :"<<p;
		lo=ne%18;
		cout<<endl<<"left over eggs "<<lo;
	}else {
	ne=ne;}
		// for first packet which can consists only 12 eggs
		if(ne>=0 || ne>=12)
	{
		p=ne/12;
		cout<<endl<<"Number of 12 eggs packaging :"<<p;
		lo=ne%12;
		cout<<endl<<"left over eggs "<<lo;
	}else {
	ne=ne;}
		// for first packet which can consists only 6 eggs
		if(ne>=0 || ne>=6)
	{
		p=ne/6;
		cout<<endl<<"Number of 6 eggs packaging :"<<p;
		lo=ne%6;
		cout<<endl<<"left over eggs "<<lo;
	}else {
	ne=ne;}
}else 
{
	cout<<"INVALID INPUT! EGGS DOESNT EXIST IN NEGATIVE VALUE \n";
	goto taha;
}
	cout<< " \n                                Happy Ending!                                ";
	return 0;
	
}
