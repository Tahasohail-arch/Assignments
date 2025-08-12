//TahaSohail
//24i-3165
// SE-B
// Assignment#2
#include<iostream>
using namespace std;
int main()
{
	double bbonus,depbonus,locbonus,overtimebonus,highsalarybonus,salary,bonus;
	int years,hrs,pr;
	char dep,wl;
	//first we will take input from the user 
	taha5:
	cout<<"Enter your number of years of service : ";
	cin>>years;
	taha4:
	cout<<endl<<"Enter your annual salary : ";
	cin>>salary;
	cout<<endl<<"Enter your performance rating form (1-5) : ";
	cin>>pr;
	taha:
	cout<<endl<<"Enter your overtime hours : ";
	cin>>hrs;
	taha1:
	cout<<endl<<"Enter your department / Press E for the Engineering / Press S for the sales / Press O for the others : ";
	cin>>dep;
	taha2:
	cout<<endl<<"Enter your work location / Press A for the Region A / Press B for the region B / Press O for others region : ";
	cin>>wl;
	//validation
	if(years>=0 && (pr>=1 && pr<=5) )
	{
	// for bonus u must be at least have 3 years of service 
	if(years>=3)
	{
     // condition 1
	if(years>=3 && years<=5)
	{
		if(pr==5)
		{
		 bbonus=salary*0.10;
		 cout<<endl<<"You got the 10% discount on the base bonus \n ";
		}else if(pr==4)
		{
			bbonus=salary*0.07;
			cout<<"You got the 7% discount on the base bonus \n ";
		}else if(pr==3)
		{
		bbonus=salary*0.05;
		cout<<"You got the 5% discount on the base bonus \n ";
		}
		else if(pr==2)
		{
			bbonus=0;
			cout<<"You got  no discount on the base bonus \n ";
		}else if(pr==1)
		{
			 cout<<"You got no discount on the base bonus \n ";
			bbonus=0;
		}
		// condition 2
	}else if(years>5 && years<=10)
	{
		if(pr==5)
		{
		 bbonus=salary*0.15;
		  cout<<"You got the 15% discount on the base bonus \n ";
		}else if(pr==4)
		{
			bbonus=salary*0.10;
			cout<<"You got the 10% discount on the base bonus \n ";
		}else if(pr==3)
		{
		bbonus=salary*0.08;
		cout<<"You got the 8% discount on the base bonus \n ";
		}
		else if(pr==2)
		{
			bbonus=0;
			cout<<"You got no discount on the base bonus \n ";
		}else if(pr==1)
		{
			bbonus=0;
			cout<<"You got  no discount on the base bonus \n ";
		}
		// condition 3
	}else if(years>10)
	{
		if(pr==5)
		{
		 bbonus=salary*0.20;
		cout<<"You got the 20% discount on the base bonus \n ";
		 
		}else if(pr==4)
		{
			bbonus=salary*0.15;
			 cout<<"You got the 15% discount on the base bonus \n ";
			
		}else if(pr==3)
		{
		bbonus=salary*0.12;
		 cout<<"You got the 12% discount on the base bonus \n ";
		}
		else if(pr==2)
		{
			bbonus=0;
			cout<<"You got no discount on the base bonus \n ";
		}else if(pr==1)
		{
			cout<<"You got no discount on the base bonus \n ";
			bbonus=0;
		}
	    }
	     }
      else
            {
	            cout<<"No base bonus due to low service of years \n ";
				bbonus=0;
			}
      
    if(years>=3)
    {
	// validation for hours bcz it cant be negative
	if(hrs>=0)
	{
	if(hrs>100 && hrs<=200)
	{    //for performance rating=5  addition of one more bonus
		if(pr==5)
		{
			overtimebonus=salary*0.03;
			 cout<<"You got the 3% discount on the overtime bonus and performance rating of 5 \n ";
		}else if(pr!=5)
		{
		// for performance rating !=5 no extra bonus
		
		overtimebonus=salary*0.02;
		 cout<<"You got the 2% discount on the overtime bonus \n ";
		}
	}else if(hrs>200)
	{
		//for performance rating=5  addition of one more bonus
		if(pr==5){
		
		overtimebonus=salary*0.05;
		cout<<"You got the 5% discount on the overtime bonus and performance rating of 5 \n ";
		}
			// for performance rating !=5 no extra bonus
		else if(pr!=5)
		{
			overtimebonus=salary*0.04;
			cout<<"You got the 4% discount on the overtime bonus \n";
		}
	}
}else 
{
	cout<<"Invalid input ! \n";
	goto taha;
}
 }
      else
            {
	            cout<<"No overtime bonus due to low service of years \n ";
	            overtimebonus=0;
			}

	// Validationnnnnnnnn
	if(years>=3)
	{
	if((dep=='E'|| dep=='e') || (wl=='A'|| wl=='a') || (wl=='O' || wl=='o'))
	{
		
	if(dep=='E'|| dep=='e')
	{
		depbonus=salary*0.05;
		cout<<"You got the 5% discount on the Engineering Department bonus \n";
	}else if(dep=='S'|| dep=='s')
	{
		depbonus=salary*0.03;
		cout<<"You got the 3% discount on the  Sales Department \n";
	}else if(dep=='O'|| dep=='o')
	{
		depbonus=0;
		cout<<"You got no discount on the other Department \n";
	}
	}else 
	{
		cout<<"Invalid input ! \n";
		goto taha1;
	}
	 }
      else
            {
	            cout<<"No department bonus due to low service of years \n ";
	            depbonus=0;
			}
	//Validation for the Work location 
	if(years>=3)
	{
	if((wl=='A'|| wl=='a') || (wl=='b'|| wl=='B') || (wl=='O' || wl=='o') )
	{
	if(wl=='A'|| wl=='a')
	{
		locbonus=salary*0.05;
		cout<<"You got the 5% discount on the  Region A location \n";
	}else if(wl=='b'|| wl=='B')
	{
		locbonus=salary*0.03;
			cout<<"You got the 3% discount on the  Region B location \n";
	}else if(wl=='O' || wl=='o')
	{
		locbonus=0;
			cout<<"You got no discount on the  other region location \n";
		}	}
	else
	{
		cout<<"Invalid input ! \n";
		goto taha2;
	}
	 }
      else
            {
	            cout<<"No location bonus due to low service of years \n ";
	            locbonus=0;
			}
	// Addition of bonus before highsalarybonus
	bonus=locbonus+depbonus+bbonus+overtimebonus;
	//Validation for the salary
	if(years>=3)
	{
	if(salary>0)
	{
	if(salary>100000)
	{
		highsalarybonus=bonus*0.05;
		cout<<"You got the 5% discount on the  High salary \n";
	}else
	{
		highsalarybonus=0;
		cout<<"You got no discount on the  High salary \n";
	}}
	else
	{
		cout<<"Invalid input ! \n";
		goto taha4;
	}
	 }
      else
            {
	            cout<<"No high salary bonus due to low service of years \n ";
	            highsalarybonus=0;
			}
		}else
		{
			cout<<"Highly invalid ! \n";
			goto taha5;
		}
	bonus=bonus+highsalarybonus;
	
	// outputs required
	cout<<"Your Base bonus is : "<<bbonus;
	cout<<endl<<"Your department bonus is : "<<depbonus;
	cout<<endl<<"Your Overtime hours bonus is : "<<overtimebonus;
	cout<<endl<<"Your Work Location Allowance nonus is :"<<locbonus;
	cout<<endl<<"Your High Salary bonus is : "<<highsalarybonus;
	cout<<endl<<"Your Total Bonus is : "<<bonus;
	return 404;
}
