//Taha Sohail
//24i-3165
//SE-B

// headerfiles
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

// function to calculate maximum
int cellcounter(int **&cell , int rows , int cols )
{
	// counter work as a score
	int counter=0;
	// row and col will be the starting indexes
	int row=0;
	int col=0;
	
	// used nested for loops to check the indexes
	for(;row<rows; )
	{
		for(; col<cols && col>=0 ; )
		{
			
		// base condition if it reaches to -1 index then it will return score and when it moves down move on unsafe plane base condition will work
		if(*(*(cell+row)+col)==-1)
		{
			return counter;
		}
		
		// addtion of the score by 1
		 if(*(*(cell+row)+col)==1)
		 {
		 	counter+=1;
		 }
		  
		  // given condition if row is odd it will move left else down
		  if(row%2!=0)
		  {
		  	//col-1>=0 && *(*(cell+row)+(col-1))!=-1
		  	
		  	//if it is true it will move left else down
		  	if(	col-1>=0 &&  *(*(cell+row)+(col-1))!=-1)
		  	{
		  		col--;
			}else 
			{
		    	row++;
		    	break;
		    }
		  }else // for the even rows
		  {
		  	//col+1<cols &&  *(*(cell+row)+(col+1))!=-1
		  	
		  	// if it is true it will move right else down
		  	if(col+1<cols &&  *(*(cell+row)+(col+1))!=-1)
		  	{
		  		col++;
			}else 
			{
				row++;
				break;
			}
			
		  }
		  
		}	  
			
	}
	// returning counter when reaches the last index
	return counter;
}

int main()
{
	
	// input of rows and cols
	int rows,cols;
	cout<<"Enter the rows :";
	cin>>rows;
	// validation of rows and cols
	while(rows<=0)
	{
	cout<<"Invalid input! Enter the rows :";
	cin>>rows;
	}
	cout<<"Enter the cols : ";
	cin>>cols;
	while(cols<=0)
	{
	cout<<"Invalid input! Enter the cols :";
	cin>>cols;
	}
	while(rows!=cols)
	{
		cout<<"ERROR! rows and columns are not equal . Again enter both rows and columns : "<<endl;
		cin>>rows>>cols;
		
	}
	// 2d matrix by 2d  pointer
	int **cell=new int*[rows];
	
	for(int i=0 ; i<rows ; i++)
	{
		cell[i]=new int[cols];
	}
	srand(time(0));
	// findig the random number between -1 to 1
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			*(*(cell+i)+j)=(rand()%(1-(-1)+1))-1;
		}
	}
//	cell[i][j]={{}}
	// printing of matrix of -1 to 1
	cout<<"==============Collection of 1's==============="<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			cout<<setw(4)<<*(*(cell+i)+j);
		}
		cout<<endl;
		
	}
	// calling the function will return the score into the maxscore
	int maxscore=cellcounter(cell,rows,cols);
	cout<<"=============================================="<<endl;
	// printing of max score
	cout<<"The Maximum score collected is : "<<maxscore;	
	//deletion of enteries of cell
	for( int i=0 ; i<rows ; i++)
	{
		delete [] *(cell+i);
	}
	delete [] cell;
	cell=NULL;
}
