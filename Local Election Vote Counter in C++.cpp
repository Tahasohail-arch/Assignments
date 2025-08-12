// Tahasohail
// 24i-3165
//SE-B
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	// initialization
	int members,total=0;
	double percentage=0.0;
	bool check;
	cout<<"Enter the number of members : ";
	cin>>members;
	while(members<=0)
	{
		cout<<"Error ! Enter the number of members : ";
		cin>>members;
	}
	// used for buffering
	cin.ignore();
	// dynamic array for the persons
	string *persons=new string[members];
	// dynamic array for the members
	int *votes=new int[members];
	
	// Takes in members name
	for( int i=0 ; i<members ; i++)
	{
		do
		{
	    check=true;
		cout<<endl<<" Enter the last name of member ("<<i+1<<") :";
		getline(cin,persons[i]);
		// validation for the int input for person name
		for(int j=0; j<persons[i].length(); j++)
            {
                if(persons[i][j]>='0'&&persons[i][j]<='9')
                {
                    check=false;
                    cout<<"Error! input letters  "<<endl;
                    break;
                }
            }
        }while(!check);
    }
        
	// takes in members name and calculate total
	for(int i=0 ; i<members ; i++)
	{
		cout<<endl<<"Enter the votes of member ("<<i+1<<") : ";
		cin>>votes[i];
		total+=votes[i];
	}
	//calculate the percetange with static cast
	cout<<endl<<endl<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Name of Canditate"<<"\t\t\t\t\t"<<"Votes Received"<<"\t\t\t\t"<<"% of Total Votes"<<endl;
	for( int i=0 ; i<members ; i++)
	{
	    percentage=(static_cast<double>(votes[i])/total)*100.0;
	    
	    cout<<persons[i]<<"\t\t\t\t\t\t\t"<<votes[i]<<"\t\t\t\t\t"<<setprecision(2)<<fixed<<percentage<<endl;
	    
		percentage=0;
	}
	// output of total
	cout<<"Total\t\t\t\t\t\t\t"<<total;
	
	// to find the highest vote getter
	int highestvotes=votes[0];
	string topmember;
	
	for( int i=0 ; i<members ; i++)
	{
		if(votes[i]>highestvotes)
		{
			highestvotes=votes[i];
			topmember=persons[i];
		}else
		{
			highestvotes=highestvotes;
		}
	}
	// output the winner of the local election
	cout<<endl<<endl<<"The winner of the local election is : "<<topmember;
	delete [] persons;
	delete [] votes;
}