//TahaSohail
//24i-3165
// SE-B
// Assignment#2
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	char operation,an;
	int maximumValue,n1,n2,riyalans,useranswer;
	tahaa:
	// Input For Operations 
	cout<<"ENTER YOUR DESIRED OPERATOR FOR THE EXERCISE \n Addition(+) :\n Multiplication(*) : \n subtraction(-) : \n division(/) : \n ";
	cin>>operation;
	tahaaa:
    // Input for the Max Value
	cout<<"What is the maximum value for the input values of the exercise?: ";
	cin>>maximumValue;
	// Input for the Negative Values
	taha0:
	cout<<"Are negative values allowed in the exercise? (PRESS Y/N) : ";
	cin>>an;
	// time at every instant
	srand(time(0));
	taha:
	// For Validation
		if(maximumValue>=0){
	// For Negative Values
	if(an=='y' || an=='Y' || an=='N' || an=='n')
	{	
	if(an=='Y'|| an=='y' )
	{
		n1=rand()% (2*maximumValue+1)-maximumValue;
		n2=rand()% (2*maximumValue+1)-maximumValue;
	}else if(an=='N'|| an=='n')
	{
		n1=rand()%(maximumValue-0+1)+0;
		n2=rand()%(maximumValue-0+1)+0;
	}
	}else
	{
		cout<<"Invalid input! Try again  "<<endl;
		goto taha0;
	}
	}else {
		cout<<"INVALID MAX VALUE TRY AGAIN ! \n ";
		goto tahaaa;
	}
	// For Validation of Operators
	if(operation=='+'|| operation=='-'|| operation=='*'|| operation=='/')
	{
	// Used Switch For  Each Operators
     switch(operation){
	 
     case '+':
     	
     	   riyalans=n1+n2;
     	   

    cout<<n1<<" + "<<n2<<" is \n";
    break;
    case '*':
    	
    	   riyalans=n1*n2;
    	   
    cout<<n1<<" * "<<n2<<" is \n";
    break;
    
    case '/':
// n2 should not be 0 because it will be runtime error
     if(n2!=0)
     {
     	riyalans=n1/n2;
    	   	
    	cout<<n1<<" / "<<n2<<" is \n";
     }
	 else{
		   
	 cout<<"INVALID ERROR!";
    goto taha;}
     break;
     
    case '-':
    	if(an=='N'|| an=='n'){
// used loop because in the question it is stated if user chose negative operator n2 should be less than n1
    while(n2>n1){
   		
    n2=rand()%maximumValue;
    		
	} riyalans=n1-n2;
		
	cout<<n1<<" - "<<n2<<" is \n";
	}else {
			
	riyalans=n1-n2;
			
	cout<<n1<<" - "<<n2<<" is \n ";}
	break;
}
}	else {
		cout<<"INVALID  TRY AGAIN ! ";
		goto tahaa;
	}

		cout<<"Enter your answer : ";
		cin>>useranswer;
	// Condition to check useranswer
	if(riyalans==useranswer)
	{
		cout<<"Congrats ! You guess the right answer \n";
	}else 
			{
				cout<<"WRONG ANSWER ! \n";
				
			}
			cout<<"                        Happy Ending! ";
return 404;
    }
     	    
