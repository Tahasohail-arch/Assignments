// Taha Sohail 
// 24I-3165
//SE-B
// Assignment number #2
#include<iostream>
using namespace std;
int main()
{
	int a;
	// input from the user 
	taha:
	cout<<"Enter your number : ";
	cin>>a;
	// Validation
	if(a>=0)
	{
	// I have taken f=0 rather than 1 because there are total 10 rows so from 0-9 So, First loop is for printing rows 
	for(int f=0;f<=a;f++)
	{
    // For printing the spaces 
	 for (int g=1;g<=a-f;g++)
	{
			cout<<" ";
	}
	// i have taken w=0 so these lines wont print in first line.
	for(int w=0;w<f;w++)
	{
			cout<<"\\"; 
	}
	// first it will start with this line.
			cout<<"|";
	// i have taken j=0 so these lines wont print in first line.		
	for(int j=0;j<f;j++) 
	{
		cout<<"/"; 
	}
		cout<<endl;
	}
}else 
{
	cout<<" Invalid input ! Try again \n ";
	goto taha;
}

	return 404;	
	}

