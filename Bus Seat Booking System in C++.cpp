// Taha Sohail
// 24I-3165
// SE-B
#include<iostream>
using namespace std;
#define cols 4

void changeinputtoint(string & choice , int &  rownumber , int & colnumber)
{
	int size=choice.length();
	rownumber=0;
    int index=0;
    //condition for first two char inputs number will between 0 and 9 further index wont be greateer than the size
    while (index<size && choice[index] >= '0' && choice[index] <= '9')
	{
        rownumber = rownumber*10+(choice[index]-'0');  
        index++;
    }
    if (index<size && choice[index]>='A' && choice[index]<='D') 
	{
        colnumber=choice[index]-'A';  
    } else
	{
        colnumber=-1;
    }
}

void seatbooking(char **busseats ,int rows)
{
	string choice;
	// do while work as while true
    do
	{	
	// input of user
    cout<<"Enter the seat you want to book or Enter End to exit the program : ";
	getline(cin,choice);
	
	// ending possibility for the user
	if(choice=="End" || choice=="END" || choice=="end")
	{
		cout<<"Program is exitting....";
		break;
	}
	
	int rowindex;
	int colindex;
	//function to change the string into the integer as a index
	changeinputtoint(choice,rowindex,colindex);

	// validation for the ipnut
	while(rowindex>rows || rowindex<1 || colindex>=cols || colindex<0)
	{
		cout<<endl<<"Invalid input! Enter the seat you want to book : ";
		getline(cin,choice);
		changeinputtoint(choice,rowindex,colindex);
	}
	// validation for the occupaint
     while(busseats[rowindex-1][colindex]=='X')
     {
     	cout<<"Seat is already occupied! Try another seat :";
     	getline(cin,choice);
       	changeinputtoint(choice,rowindex,colindex);
	 }
	// rowindex-1 bcz indexes in arrays are 1 number behind
	 if(busseats[rowindex-1][colindex]!='X')
	 {
	 	// user will occupy the seat
	 	busseats[rowindex-1][colindex]='X';
	 }
	 //again cout of the updated seats
	 for(int i=0 ; i<rows ; i++)
	 {
	 	cout<<i+1<<" ";
	 	for( int j=0 ; j<cols ; j++)
	 	{
	 		cout<<busseats[i][j]<<" ";
		}
		 cout<<endl;
	 }
	 
	 
	 bool check=false;
	 // condition when every seat is occupied and bus is ready to go
	 for( int i=0 ; i<rows ; i++)
	 {
	 	for( int j=0 ; j<cols ; j++)
	 	{
	 		if(busseats[i][j]!='X')
	 		{
	 			check=true;
	 			break;
			}
		 }
		 if(check==true)
	    {	
	 	break;
	    }
	 }
	 
	 if(check==false)
	 {
	 	cout<<"All seats are booked and Bus is ready to Go!....";
	 	break;
	 }
	 
}while(choice!="End");

return ;
}
   

int main()
{
	//Taking inputs 
	int rows;
	char seatsletters='A';
	cout<<"Enter the number of rows of bus : ";
	cin>>rows;
	while(rows<=0)
	{
		cout<<"Error ! Enter the number of rows of bus : ";
		cin>>rows;
	}
	//ignore buffering
	cin.ignore();
	//dynamically char array for the bus seats
	char **busseats=new char*[rows];
	
	//Forming columns
	for( int i=0 ; i<rows ; i++)
	{
		busseats[i]=new char[cols];
	}
	
	cout<<endl<<"=============================Bus Service============================"<<endl<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		// 65 is thr ASCII of A so started from A to D
		seatsletters=65;
		cout<<i+1<<" ";
		for( int j=0 ; j<cols ; j++ , seatsletters+=1)
		{
			// storing values of the char in the dynamically char array 
			busseats[i][j]=seatsletters;
			cout<<busseats[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//function calling of the seat booking
	seatbooking(busseats,rows);
	
	/// deleting each enteries 
	for( int i=0 ; i<rows ; i++)
	{
		delete [] busseats[i];
	}
	
	// deleting the address of the pointers 
	delete [] busseats;
	// pointing towards the null
	busseats=NULL;
	return 404;
}
