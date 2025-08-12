#include<iostream>
#include<string>
// Tahasohail_SE-B_24I-3165
using namespace std;
int main()
{
	int withdrawn_amount;
	// First, We will take withdrawn amount as a integer which cashier will give to customer.
	// For,denominations 100,50,10 ill declare variables H,F,T. User will put withdrawn amount in hundreds and always divisible by 10
	int H,F,T;
	cout<<"Enter your withdrawn amount in hundreds   : " ;
	cin>>withdrawn_amount;
	cout<<"\n";
	H=withdrawn_amount/100;
	cout<<"your 100 currency notes :"<<H;
	//Now we will divide of that user amount will give us the quotient like if user enter 510 ruppes quotient(denomination) wills show 5.
	F=(withdrawn_amount%100)/50;
	cout<<"\n\n";
	cout<<"your 50 currency notes :"<<F;
	// Now, After 100 denomination To find 50 denomination taking the modulus that amount by 100 will remove 100 denomination and dividing it by 50 will give us info abt 50 denominations. like in 560. 1 50 denomiantion.
	T=(withdrawn_amount%50)/10;
	cout<<"\n\n";
	cout<<"your 10 currency notes :"<<T;
	// Now, After 100 and 50  denomination To find 10 denomination taking the modulus that amount by 50 will remove 50  denomination and dividing it by 10 will give us info abt 10 denominations. like in 560. 1 10 denomiantion.
	
	return 0;
	
	
	
}
