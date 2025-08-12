//Taha Sohail
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"      

int main()
{
	
	string marker,playernumber;
	
	int player;
	
	string a="1",b="2",c="3",d="4",e="5",f="6",g="7",h="8",i="9";
	
	cout<<BLUE<<"\t\t\t\t\t\t\t"<<"WELCOME TO THE TIC TAC TOE  GAME \n";
	
	cout<<RED<<"\t\t\t\t\t\t  X if for the Player1 and O is for the Player2 \n"<<CYAN;
	
	// loop will continue till 9 boxes
	
	for(int m=1;m<=9;m++) 
	{
	cout<<" ___"<<"________"<<endl;
    cout<<" |"<<a<<" | "<<b<<" | "<<c<<"| "<<endl;
    cout<<" -----------"<<endl;
    cout<<" |"<<d<<" | "<<e<<" | "<<f<<"| "<<endl;
    cout<<" -----------" << endl;
    cout<<" |"<<g<<" | "<<h<<" | "<<i<<"| "<<endl;
    cout<<" ---"<<"--------"<<endl;
    
    // condition used if if number is even it will be player 2 turn otherwise player 1
    
    if(m%2!=0)
    {
    	player=1;
	}else
	{
		player=2;
	}
	// if player is 1 then his marker is X otherwise Player 2 has O
	
	if(player==1)
	{
		marker="X";
	}else if(player==2)
	{
		marker="O";
	}
	
	taha:
	// Asking 1-9 from user of his/her own choice
	
	cout<<"Enter player ("<<player<<") 1-9 for your move : ";
	cin>>playernumber;
	
	// condition if user give another number than this that will be in valid input
	
	if(playernumber=="1" || playernumber=="2" || playernumber=="3" || playernumber=="4" || playernumber=="5" || playernumber=="6" || playernumber=="7" ||	
	playernumber=="8" || playernumber=="9")
	{
	
	// Checking if the selected cell is already occupied
	
   if((playernumber == "1" && a != "X" && a != "O") ||
    (playernumber == "2" && b != "X" && b != "O") ||
    (playernumber == "3" && c != "X" && c != "O") ||
    (playernumber == "4" && d != "X" && d != "O") ||
    (playernumber == "5" && e != "X" && e != "O") ||
    (playernumber == "6" && f != "X" && f != "O") ||
    (playernumber == "7" && g != "X" && g != "O") ||
    (playernumber == "8" && h != "X" && h != "O") ||
    (playernumber == "9" && i != "X" && i != "O"))
{
    // Swapping markers with the number chosen by the user
    if (playernumber == "1")
	 {
        a = marker;
    } else if (playernumber == "2")
	 {
        b = marker;
    } else if (playernumber == "3")
	 {
        c = marker;
    } else if (playernumber == "4") 
	{
        d = marker;
    } else if (playernumber == "5") 
	{
        e = marker;
    } else if (playernumber == "6") 
	{
        f = marker;
    } else if (playernumber == "7") 
	{
        g = marker;
    } else if (playernumber == "8") 
	{
        h = marker;
    } else if (playernumber == "9") 
	{
        i = marker;
    }
} else
{
    cout<<endl<<"Cell already occupied! Try again. "<<endl;
    goto taha;
}
}

// last condition for winner or draw
if((a==b && b==c)|| (a==e && e==i)|| (a==d && d==g)|| (c==e && e==g) || (d==e && e==f)|| (g==h && h==i) || (b==e && e==h) ||(c==f && f==i))
{
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t"<<"Player "<<player<<" Won Congrats!";
	break;
}
//draw
else if(m==9)
{
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t"<<"Sorry guys But match is drawn";
	break;
}
	  	
}

 //THE END
 cout<<endl<<endl<<endl<<BLUE<<"\t\t\t\t\t\t\t"<<"THE END!";
 
	return 404;
}
		  
	  
    
   
    
	
