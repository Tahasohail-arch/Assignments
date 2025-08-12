//TahaSohail
//24i-3165
// SE-B
// Assignment#2
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Taking 5 inputs from the user
	int un,un1,un2,un3,un4,largestno;
	taha:
	cout<<"Enter your number 1 : ";
	cin>>un;
	cout<<"Enter your number 2 : ";
	cin>>un1;
	cout<<"Enter your number 3 : ";
	cin>>un2;
	cout<<"Enter your number 4 : ";
	cin>>un3;
	cout<<"Enter your number 5 : ";
	cin>>un4;
	// Validation
	if(un>=0 && un1>=0 && un2>=0 && un3>=0 && un4>=0)
	{
	// First we need to know Largest number so using and gates we can find it
	if(un>un1 && un>un2 && un>un3 && un>un4)
	{
		largestno=un;
	}else if(un1>un && un1>un2 && un1>un3 && un1>un4)
	{
		largestno=un1;
	}else if(un2>un && un2>un1 && un2>un3 && un2>un4)
	{
		largestno=un2;
	}else if(un3>un1 && un3>un2 && un3>un && un3>un4)
	{
		largestno=un3;
	}else {
	    largestno=un4;}
	}else
	{
		cout<<"INVALID INPUT! TRY AGAIN \n";
		goto taha;
	}
	// condition to first vertical column
	for(int i=largestno;i>=1;i--)
	{
	// setw is used for the gaps like if we use 10 asteriks were not in the proper order
		cout<<setw(2)<<endl<<i;
		if(un>=i)
		{
			cout<<" *  ";
		}
		else{
		 	
			 cout<<"    ";}
		if(un1>=i)
		{
			cout<<" *  ";
		}
		else{
		 	
			 cout<<"    ";}
		if(un2>=i)
		{
			cout<<" *  ";
		}
		else{
		 	
			 cout<<"    ";}
		if(un3>=i)
		{
			cout<<" *  ";
		}
		else{
		 	
			 cout<<"    ";}
		if(un4>=i)
		{
			cout<<" * ";
		}
		else{
		 	
			 cout<<"    ";}

	}
	cout<<endl;
	// To print lower numbers it can be also done using normal cout but i have used loops
		for(int f=1;f<=5;f++)
		{
			cout<<"   "<<f;
		
		}

	 return 404;  
	
}
