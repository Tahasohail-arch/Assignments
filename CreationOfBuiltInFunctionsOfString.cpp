// Taha Sohail
// 24i-3165
// Assignment#3

#include<iostream>
#include<string>
using namespace std;

// Calculation of the length of the string.
int Calculate_length(string s)
{
	// taking length as a counter to count the length
	int length=0;
	// string ha \0 in the end so we will restrict it. 
	for (int i=0 ; s[i]!='\0' ; i++)
	{
		length+=1;
	}
	return length;
}
// to check the main string have your specified string
bool substring(string main,string str)
{
	int mainLength=Calculate_length(main);
    int strLength=Calculate_length(str);
   
    for (int i=0; i<=mainLength-strLength; i++)
	 {
        int j;
        for (j=0; j<strLength; j++)
	 {
            if(main[i+j] != str[j])
			{
                break;
            }
    }
        if(j==strLength)
	    {
            return true;
        }
    }
    return false;
}
// to count the index of the your chosen string 
int substring_position(string main, string str)
{
	
	int mainLength=Calculate_length(main);
    int strLength=Calculate_length(str);

    for (int i=0; i<=mainLength-strLength; i++) 
	{
        int j;
        for(j=0; j<strLength; j++)
		 {
            if(main[i+j]!=str[j]) 
			{
                break;
            }
        }
        if (j==strLength)
	    {
            return i; 
        }
    }
    return -1; 
}

int main()
{
	// inputs
	int choice;
	string s,str;
	cout<<"Enter the string you want to check : "<<endl;
	getline(cin,s);
    while (true)
	{
		cout<<"Enter Your Choice: "<<endl;
		cout<<"1. String Length"<<endl;
		cout<<"2. Check"<<endl;
		cout<<"3. Position"<<endl;
		cout<<"4. Exit"<<endl<<endl;
		cin>>choice;
		cin.ignore(100, '\n');
		// validation
		while (choice<=0 || choice>4)
		{
			cout<<endl<<"INVALID INPUT! Again input"<<endl;
			cout<<"Enter Your Choice: "<<endl;
			cout<<endl<<"1. String Length"<<endl;
			cout<<endl<<"2. Check"<<endl;
			cout<<endl<<"3. Position"<<endl;
			cout<<endl<<"4. Exit"<<endl;
			cin>>choice;
		}
		switch(choice)
		{
			case 1:
				{
					// to print the length
					cout<<"The length of string is : "<<Calculate_length(s)<<endl;
					break;
				}
			case 2:
				{
					// to print whether exist or not 
					cout<<"Enter the substring : ";
                   	getline(cin,str);
                	if (substring(s,str))
					{
                    	cout<<endl<<"Substring exists in the main string"<<endl;
                	}
					else
					{
                    	cout<<endl<<"Substring doesnt exist in the main string"<<endl;
                	}
					break;	
				}
			case 3:
				{ 
				// to check itss index 
					cout<<"Enter the substring to find: ";
                	getline(cin,str);
                	int position;
                	position=substring_position(s,str);
                	if (position!=-1)
					{
                    	cout<<"Substring starts at index: "<<position<<endl;
                	}
					else
					{
                    	cout<<endl<<"Substring not found (Really sorry!)"<<endl;
                	}
					break;
				}
			case 4:
				{
					cout<<endl<<"Program is exited"<<endl;
					exit(0);
				}
		}
	}
	
    return 404;
}
