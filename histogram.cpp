// Taha Sohail
// 24i-3165
// SE-B
#include<iostream>
#include<iomanip>
using namespace std;

// Function prototypes
void displayHistogram(int*, int , int  );
void computeHistogram(int*, int & , int*&); 

// Global variables
int highestmarks=0,count=0;

int main() 
{
	// we will initilaize to make apna vector
    int initializer=10;
    // user input array
    int*marks=new int[initializer];
    // histogram input array
    int*histogram=nullptr;
    // Function calling to compute the histogram
    computeHistogram(marks, initializer, histogram);

    // Deallocation the memory
    delete[] marks;
    delete[] histogram;

    return 0;
}

void computeHistogram(int* marks, int& initializer, int*& histogram) 
{
    int score;
    // using while true so user can input values how much he needed
    while(1) 
	{
		// input
        cout<<"Enter the marks or press -1 to end the program : ";
        cin>>score;
        
        // given condition if user input -1 the program will stop to take input will work as a base condition
        if(score==-1) 
		{
		break;
	    }
	    
	    // we know marks can not be negative so ive used loops until user input >=0 marks
        while(score<0)
        {
        	cout<<"Invalid input! Marks cant be negative. Try again! ";
        	cin>>score;
		}

       // necessary condition to increase the size of array as it is called resizing.
        if(count!=initializer) 
		{
		   initializer=initializer;
        }else
        {
        	initializer*=5;
			// using temporary array for this to make code efficient
            int* largesttemparray=new int[initializer];
            
            // copying values of marks array in temp and then deleting marks memory and again point all address of temp to marks
            for (int i=0; i<count; i++)
			{
                largesttemparray[i]=marks[i];
            }	
            delete[] marks;
            marks=largesttemparray; 
		}
       // filling of arrays by user input
        marks[count]=score;
        count++;

    }
    // finding the highest
    
    highestmarks=marks[0];
    for( int i=0 ; i<count ; i++)
    {
    	if(highestmarks<marks[i])
    	{
    		highestmarks=marks[i];
		}else
		{
			highestmarks=highestmarks;
		}
	}
   // +1 to match the index if our highest is 30 then array will be from 0-29 so we have to make 31
    highestmarks+=1;
    
    // creating the histogram array 
    histogram=new int[highestmarks];
    
    // inititalizing with the 0 for no undefine behaviour
    for( int i=0 ; i<highestmarks ; i++)
    {
    	histogram[i]=0;
	} 

    // this will calculate the frequencies of every number entered by user
    for (int i=0; i<count; i++) 
	{
        histogram[marks[i]]+=1;
    }
    
    // finding the highest frequency
    int maxfrequency=histogram[0];
    
    for( int i=0 ; i<highestmarks ; i++)
    {
    	if(maxfrequency<histogram[i])
    	{
    		maxfrequency=histogram[i];
		}else
		{
			maxfrequency=maxfrequency;
		}
	}
	
    // calling the function for displaying of histogram
    displayHistogram(histogram, highestmarks , maxfrequency );
}

// program to display the histogram
void displayHistogram(int* histogram, int highestmarks , int maxfrequency )
 {
 	// making new array to print the lower x axis
     int *printingarray=new int[highestmarks];
     
     // initialzing by 0
      for( int i=0 ; i<highestmarks ; i++ )
     {
     	printingarray[i]=0;	
	 }
	 
	 // giving the printing array all input marks of user
     for( int i=0 ; i<highestmarks ; i++ )
     {
     	if(histogram[i]>0)
     	{
     		printingarray[i]=i;
		}
	 }
     
     // printing the frequency of marks
     for( int i=0 ; i<highestmarks ; i++)
     {
     	if(histogram[i]>0)
     	{
     	 cout<<"Frequency of "<<i<<"' : "<<histogram[i]<<endl;
		}
	 } 
	cout<<endl;
	
	// printing of histogrammmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
	
	cout<<"======================================HISTROGRAM======================================"<<endl<<endl;
	for( int k=maxfrequency ; k>0 ; k--)
	{
		cout<<setw(2)<<k<<"|";
		for( int j=0 ; j<highestmarks ; j++)
		{
				if(histogram[j]>=k)
				{
					cout<<" *  ";
				}else if(histogram[j]>0)
				{
					cout<<"    ";
				}
		}
		cout<<endl;
	}
	
	for( int i=0 ; i<highestmarks ; i++)
	{
		if(printingarray[i]!=0)
		{
		cout<<setw(3)<<" "<<printingarray[i];
	    }
	}
    

    delete [] printingarray;
    printingarray=NULL;
 }

