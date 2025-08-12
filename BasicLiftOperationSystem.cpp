// Taha Sohail
// 24i-3165
// Assignment#3
#include <iostream>
using namespace std;

// defining prototypes 
int lift_operating_system(int requested_floor, int current_floor, char lift_status);
int liftup(int current_floor, int requested_floor);
int liftdown(int current_floor, int requested_floor);
char halt_lift(char status);
char unhalt_lift(char status);

int main()
  {
  	// defining inputs given lift starts from basement
    int current_floor=-1; 
    char lift_status='W'; 
    int requested_floor=0;
    int choice;
  // endless loop
    while(1) 
	{
        cout<<"=================Lift Operating System================="<<endl;
        cout<<"1. Go to a floor"<<endl;
        cout<<"2. Halt the lift"<<endl;
        cout<<"3. Unhalt the lift"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl<<"Enter your choice: ";
        cin>>choice;
        // Validation 
        while(choice<1 || choice>4)
        {
        	cout<<endl<<"Enter your choice : "<<endl;
        	cin>>choice;
		}
        // Exit function when user click 4 
        if(choice==4)
	     {
            cout<<endl<<"Exiting Lift Operating System  (Goodbye!) ";
            break;
         }
        // click 1 to go to the floor 
        if (choice==1) 
		{
           // halt condition 
            if(lift_status=='H')
		    {
                cout<<endl<<"Lift is currently halted (Firstly unhalt the lift) "<<endl;
            } else 
			{
				// input for the floor 
                cout<<"Enter the floor you want to go to (-1 to 4): ";
                cin>>requested_floor;

                // validation 
                while(requested_floor<-1 || requested_floor>4) 
				{
                    cout<<"Invalid floor ! Again Enter the floor you want to go to (-1 to 4) : "<<endl;
                    cin>>requested_floor;
                }
                // will go into the lift operating system to check liftup or down
                current_floor=lift_operating_system(requested_floor, current_floor, lift_status);
            }
            // to check  halt 
        } else if(choice==2)
        {
            
            lift_status = halt_lift(lift_status);
            
            cout<<endl<<"Lift is now halted "<<endl;
        } //  to check operational
		else if(choice==3)
		{
           
            lift_status=unhalt_lift(lift_status);
            
            cout<<endl<<"Lift is now operational"<<endl;
        }
    }

    return 404;
}

int lift_operating_system(int requested_floor, int current_floor, char lift_status) 

{
    // condition whether it is halted or unhalted 
    if(lift_status=='H')
    {
        cout<<"Lift is halted  Cannot move "<<endl;
        return current_floor;
    }
   // this will check whether lift will go up or down 
    if (requested_floor>current_floor)
    {
        return liftup(current_floor, requested_floor);
        
    }else if(requested_floor<current_floor) 
	{
        return liftdown(current_floor, requested_floor);
        
    }else
    {
        cout<<endl<<"You are already on the requested floor"<<endl;
        return current_floor;
    }
    
}


int liftup(int current_floor, int requested_floor)
 {
    cout<<"Moving up from floor "<<current_floor<<" to floor "<<requested_floor<<endl;
    
    return requested_floor;
 }


int liftdown(int current_floor, int requested_floor)
{
    cout<<"Moving down from floor "<<current_floor<<" to floor "<<requested_floor<<endl;
    
    return requested_floor;
}


char halt_lift(char status) 
{
    status='H'; 
    return status;
}


char unhalt_lift(char status) 
{
    status='W'; 
    return status;
}
