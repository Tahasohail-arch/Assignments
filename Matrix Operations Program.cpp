// Taha sohail
//24i-3165
// SE-B
#include<iostream>
using namespace std;
// globally define
#define rows 3
#define cols 3

//prototypes
void CheckEqualSumArrays(int **A1 , int **A2 , int **A3);
void CheckEqualArrays(int **A1 , int **A2, int **A3);
void RotateArrays(int **A1 , int **A2 , int **A3);
void CheckDifferentArrays(int **A1, int **A2 , int **A3);
void FindSameRows(int **A1 , int **A2 , int **A3);

int main()
{
	// initialization
	int choice;
	int **matrix1=new int *[rows];
	int **matrix2=new int *[rows];	
	int **matrix3=new int *[rows];
	
	// pointing of rows to columns
	for( int i=0 ; i<rows ; i++)
	{
		matrix1[i]=new int[cols];
		matrix2[i]=new int[cols];
		matrix3[i]=new int[cols];
	}
	
	// Entering of values of matrix 1
	cout<<"Enter the values of matrix 1 :"<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			cin>>*(*(matrix1+i)+j);
		}
	}
	
	// Entering the values of matrix 2
	cout<<"Enter the values of matrix 2 :"<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			cin>>*(*(matrix2+i)+j);
		}
	}
	
	// Entering the values of matrix 3
	cout<<"Enter the values of matrix 3 :"<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			cin>>*(*(matrix3+i)+j);	
		}
	} 
	
	// used switch for menu driven program
	cout<<"=================Matrixes Program=================="<<endl;
do
{
	cout<<endl<<"Enter 1 to check equal sum arrays "<<endl;
	cout<<"Enter 2 to check equal arrays"<<endl;
	cout<<"Enter 3 to rotate arrays"<<endl;
	cout<<"Enter 4 to check different arrays"<<endl;
	cout<<"Enter 5 to check find same rows"<<endl;
	cout<<"Enter -1 to exit the program"<<endl;
	cin>>choice;
  switch(choice)
  {
  	case 1:
         CheckEqualSumArrays(matrix1,matrix2,matrix3);
    break;
    
    case 2:
        CheckEqualArrays(matrix1,matrix2,matrix3);
    break;
    
    case 3:
       RotateArrays(matrix1,matrix2,matrix3);
    break;
    
    case 4:
      CheckDifferentArrays(matrix1,matrix2,matrix3);
    break;
    
    case 5:
      FindSameRows(matrix1,matrix2,matrix3);
    break;
}
// will end when user enters -1
}while(choice!=-1);

// deletion of matrices
	for( int i=0 ; i<rows ; i++)
	{
		delete [] *(matrix1+i);
		delete [] *(matrix2+i);
		delete [] *(matrix3+i);
	}
	delete []matrix1;
	delete []matrix2;
	delete []matrix3;
	return 404;
}

// first function of checking sum arrays
void CheckEqualSumArrays(int **A1 , int **A2 , int **A3)
{
	    cout<<"====================Sum of Matrixes==================="<<endl;
	bool tocheck;
	// used switch for switch driven program
	int choice;
	do{
		cout<<endl<<"Enter 1 to check the sum of matrix 1 and matrix 2 "<<endl;
		cout<<"Enter 2 to check the sum of matrix 2 and matrix 3 "<<endl;
		cout<<"Enter 3 to check the sum of matrix 1 and matrix 3 "<<endl;
		cout<<"Enter -1 to exit"<<endl;
		cin>>choice;
		// validation for the choice
		while(choice<-1 || choice>3 ||choice==0) 
		{
		cout<<"Invalid! Input Try again!"<<endl;
		cin>>choice;
	    } 
		
	switch(choice)
	{
	case 1:
		
	tocheck=true;
	
	// used nested loops for the addtion of two matrices and bool for false and true
      for( int i=0 ; i<rows ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	{
	  	if(*(*(A1+i)+j)+*(*(A2+i)+j)!=*(*(A3+i)+j))
	  	{
            tocheck=false;
            break;
		}
   	}
   	
     }
     //checking of bool
     
   	if(tocheck)
   	{
   		cout<<endl<<"Yes! Sum of matrix 1 and 2 is equals to 3 ";
	}else
	{
		cout<<endl<<"No! Sum of matrix 1 and 2 is not equals to 3 ";
	}
	
	break;
	
   	case 2:	
   	
   	tocheck=true;
   	
   	// used nested loops for the addtion of two matrices and bool for false and true
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  	if(*(*(A2+i)+j)+*(*(A3+i)+j)!=*(*(A1+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	 
		}
     }
     //checking of the bool
     
	 if(tocheck)
   	{
   		cout<<endl<<"Yes! Sum of matrix 2 and 3 is equals to 1 ";
	}else
	{
		cout<<endl<<"No! Sum of matrix 2 and 3 is not equals to 1 ";
	}	
	
	break;
	
	case 3:
		
		tocheck=true;
		// used nested loops for the addtion of two matrices and bool for false and true
      for( int i=0 ; i<rows ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  	if(*(*(A3+i)+j)+*(*(A1+i)+j)!=*(*(A2+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	}
	
     }	
     //checking of the bool
      if(tocheck)
   	{
   		cout<<endl<<"Yes!Sum of matrix 1 and 3 is equals to 2 ";
	}else
	{
		cout<<endl<<"No! Sum of matrix 1 and 3 is not equals to 2 ";
	}
	
	break;	
}
// condition for the exit 

}while(choice!=-1);

return;
     
} 

// 2nd function of equal arrays
void CheckEqualArrays(int **A1 , int **A2, int **A3)
{
	cout<<"==========================Equal Matrixes===================="<<endl;
	bool tocheck;
	int choice;
	// use of do while
	do
	{
	cout<<endl<<"Enter 1 to check if matrix 1 and matrix 2 are equal or not";
	cout<<endl<<"Enter 2 to check if matrix 2 and matrix 3 are equal or not";
	cout<<endl<<"Enter 3 to check if matrix 1 and matrix 3 are equal or not";
	cout<<endl<<"Enter 4 to check if all matrixes are equal or not";
	cout<<endl<<"Enter -1 to exit"<<endl;
	cin>>choice;
	// validation for the while
	while(choice<-1 || choice>4 || choice==0)
	{
		cout<<"Invalid! input Try again!";
		cin>>choice;
	}
	// used switch
	switch(choice)
	{
		case 1:
			// used nested loops for to check equal matrices and bool for false and true
			tocheck=true;
			for( int i=0 ; i<rows ; i++)
			{
				for(int j=0 ; j<cols ; j++)
				{
					if(*(*(A1+i)+j)!=*(*(A2+i)+j))
			    {
			       tocheck=false;
			       break;
			   	}
			}
		}
			if(tocheck)
			{
				cout<<endl<<"Matrix 1 and 2 are equal";
			}else
			{
				cout<<endl<<"Matrix 1 and 2 are not equal";
			}
		
		break;
		
		case 2:
			
			tocheck=true;
			// used nested loops for to check equal matrices and bool for false and true
			for( int i=0 ; i<rows ; i++)
			{
				for( int j=0 ; j<cols ; j++)
				{
					if(*(*(A2+i)+j)!=*(*(A3+i)+j))
		     	{
			       tocheck=false;
			       break;
				}
			}	
			
	    	}
	    	
	    if(tocheck)
			{
				cout<<endl<<"Matrix 2 and 3 are equal";
			}else
			{
				cout<<endl<<"Matrix 2 and 3 are not equal";
			}
	    	
		break;
		
		case 3:
			
			tocheck=true;
			// used nested loops for to check equal matrices and bool for false and true
			for( int i=0 ; i<rows ; i++)
			{
				for( int j=0 ; j<cols ; j++)
				{
				if(*(*(A1+i)+j)!=*(*(A3+i)+j))
			{
			 tocheck=false;
			 break;
		    }
		    
		    	}
	    	}	
				
		if(tocheck)
			{
				cout<<endl<<"Matrix 1 and 3 are equal";
			}else
			{
				cout<<endl<<"Matrix 1 and 3 are not equal";
			}
			
		break;
		
		case 4:
			
			tocheck=true;
			// used nested loops for to check equal matrices and bool for false and true
			for(int i=0 ; i<rows ; i++)
			{
				for( int j=0 ; j<cols ; j++)
				{
					if(*(*(A1+i)+j)!=*(*(A2+i)+j) ||*(*(A2+i)+j)!=*(*(A3+i)+j))
			{
				tocheck=false;
				break;
		    }
		    
		    	}
			
			}
			
			if(tocheck)
			{
				cout<<endl<<"Matrix 1 , 2 and 3 are equal";
			}else
			{
				cout<<endl<<"Matrix 1 , 2 and 3 are not equal";
			}
	}
	
	// exiting condition
}while(choice!=-1);

return;
}


// 3rd function

void RotateArrays(int **A1 , int **A2 , int **A3)
{   cout<<"============================Rotataion of Matrices=========================="<<endl;
	int choice;
	int temp=0;
	// use of do while
	do
   {
	cout<<"Enter 1 to rotate the first matrix "<<endl;
	cout<<"Enter 2 to rotate the second matrix "<<endl;
	cout<<"Enter 3 to rotate the third matrix "<<endl;
	cout<<"Enter -1 to exit"<<endl;
	cin>>choice;
	// validation for the choice
	while(choice<-1 || choice>3 || choice==0)
	{
		cout<<"Invalid! input Try again";
		cin>>choice;
	}
	
	switch(choice)
	{
	case 1:
		
	for( int i=0 ; i<rows/2 ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			// switching first and last row
			temp=*(*(A1+i)+j);
			*(*(A1+i)+j)=*(*(A1+(rows-i-1))+j);
	    	*(*(A1+(rows-i-1))+j)=temp;
		}
	}
	cout<<"Rotated Matrix is : "<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			// taking transpose
			cout<<*(*(A1+j)+i)<<" ";
			
		}
		cout<<endl;
	}
	
	break;
	
	case 2:
		
	for( int i=0 ; i<rows/2 ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			// switching last and first row
			temp=*(*(A2+i)+j);
			*(*(A2+i)+j)=*(*(A2+(rows-i-1))+j);
	    	*(*(A2+(rows-i-1))+j)=temp;
		}
	}
	cout<<"Rotated Matrix is : "<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
		 // taking transpose
			cout<<*(*(A2+j)+i)<<" ";
			
		}
		cout<<endl;
	}
	break;
	
	case 3:
		
	for( int i=0 ; i<rows/2 ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			// switching first and last row
		temp=*(*(A3+i)+j);
		*(*(A3+i)+j)=*(*(A3+(rows-i-1))+j);
	   	*(*(A3+(rows-i-1))+j)=temp;
		}
	}
	cout<<"Rotated Matrix is : "<<endl;
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			// taking transpose
			cout<<*(*(A3+j)+i)<<" ";
			
		}
		cout<<endl;
	}
	break;
}

// exitting condtion
}while(choice!=-1);

return;
} 

// function four
void CheckDifferentArrays(int **A1, int **A2 , int **A3 )
{
	cout<<"=========================Difference of matrices========================="<<endl;
	bool tocheck;
	int choice;
	do{
		cout<<endl<<"Enter 1 to check the difference of matrix 1 and matrix 2 "<<endl;
		cout<<"Enter 2 to check the difference of matrix 2 and matrix 3 "<<endl;
		cout<<"Enter 3 to check the difference of matrix 1 and matrix 3 "<<endl;
		cout<<"Enter 4 to check the difference of matrix 2 and matrix 1 "<<endl;
		cout<<"Enter 5 to check the difference of matrix 3 and matrix 2 "<<endl;
		cout<<"Enter 6 to check the difference of matrix 3 and matrix 1 "<<endl;
		cout<<"Enter -1 to exit"<<endl;
		cin>>choice;
		// valiation for the while
		while(choice<-1 || choice>6 || choice==0)
		{
			cout<<"Invalid! input Try again"<<endl;
			cin>>choice;
		}
	switch(choice)
	{
	case 1:
		
		tocheck=true;
		
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	{
		// used nested loops for the difference of two matrices  and bool for false and true
	  	if(*(*(A1+i)+j)-*(*(A2+i)+j)!=*(*(A3+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
   	}
   	
     }
     
   	if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 1 and 2 is equals to 3 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 1 and 2 is not equals to 3 "<<endl;
	}
	
	break;
	
   	case 2:	
   	
   	tocheck=true;
   	
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  			// used nested loops for the difference of two matrices  and bool for false and true
	  	if(*(*(A2+i)+j)-*(*(A3+i)+j)!=*(*(A1+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	 
		}
     }
     
	 if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 2 and 3 is equals to 1 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 2 and 3 is not equals to 1 "<<endl;
	}	
	
	break;
	
	case 3:
		
		
	tocheck=true;
	
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  			// used nested loops for the difference of two matrices  and bool for false and true
	  	if(*(*(A1+i)+j)-*(*(A3+i)+j)!=*(*(A2+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	}
	
     }	
      if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 1 and 3 is equals to 2 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 1 and 3 is not equals to 2 "<<endl;
	}
	
	break;	
	
	
	case 4:
		
			tocheck=true;
   		// used nested loops for the difference of two matrices  and bool for false and true
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  	if(*(*(A2+i)+j)-*(*(A1+i)+j)!=*(*(A3+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	 
		}
     }
     
	 if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 2 and 1 is equals to 3 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 2 and 1 is not equals to 3 "<<endl;
	}	
	
	break;
	
	
	case 5:
		
		
		tocheck=true;
		// used nested loops for the difference of two matrices  and bool for false and true
   	
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  	if(*(*(A3+i)+j)-*(*(A2+i)+j)!=*(*(A1+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
	 
		}
     }
     
	 if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 3 and 2 is equals to 1 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 3 and 2 is not equals to 1 "<<endl;
	}	
	
	break;
	
	case 6:
		
		tocheck=true;
   	// used nested loops for the difference of two matrices  and bool for false and true	
      for( int i=0 ; i<rows  ; i++)
	  {
	  	for( int j=0 ; j<cols ; j++)
	  	{
	  	if(*(*(A3+i)+j)-*(*(A1+i)+j)!=*(*(A2+i)+j))
	  	{
	  		tocheck=false;
	  		break;
		}
		
		}
     }
     
	 if(tocheck==true)
   	{
   		cout<<endl<<"Yes! Difference of matrix 3 and 1 is equals to 2 "<<endl;
	}else
	{
		cout<<endl<<"No! Difference of matrix 3 and 1 is not equals to 2 "<<endl;
	}	
	
	break;
}
// exitting conditon
}while(choice!=-1);

return;
     
} 

// 5th function
void FindSameRows(int **A1 , int **A2 , int **A3)
{	
   int choice;
   cout<<"========================Checking the same rows========================="<<endl;
  do
  {
  	cout<<"Enter 1 to check same rows between all three matrixes "<<endl;
  	cout<<"Enter 2 to check same rows between matrix 1 and 2 "<<endl;
  	cout<<"Enter 3 to check same rows between matrix 1 and 3"<<endl;
  	cout<<"Enter 4 to check same rows between matrix 2 and 3"<<endl;
  	cout<<"Enter -1 to exit"<<endl;
  	cin>>choice;
  	// validation for the choice
  	while(choice<-1 || choice>4 || choice==0)
	{
		cout<<"Invalid! input Try again";
		cin>>choice;
	}
	
	bool check;
	
	switch(choice)
	{
	case 1:
		
	for( int i=0 ; i<rows ; i++)
	{
		 check=true;
		//condition to check sem rows in all matrices
		for( int j=0 ; j<cols ; j++)
		{
			if(*(*(A1+i)+j)!=*(*(A2+i)+j) || *(*(A2+i)+j)!=*(*(A3+i)+j))
			{
				check=false;
				break;
			}
		}
		if(check)
		{
			cout<<endl<<"Row "<<i+1<<" is same"<<endl;
		}else
		{
			cout<<endl<<"Row "<<i+1<<" is not same of these matrices"<<endl;
		}
	}
	
	break;
	case 2:
		
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			check=true;
			// contion to sem rows in 1st and 2nd matrix
		    if(*(*(A1+i)+j)!=*(*(A2+i)+j))
		    {
		    	check=false;
		    	break;
			}
		}
		if(check)
		{
			cout<<endl<<"Row "<<i+1<<" is same"<<endl;
		}else
		{
		cout<<endl<<"Row "<<i+1<<" is not same of these matrices"<<endl;
		}
	}
	
	break;
	case 3:
	
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			check=true;
			// condtion to check sem rows in first and third matrics
		    if(*(*(A1+i)+j)!=*(*(A3+i)+j))
		    {
		    	check=false;
		    	break;
			}
		}
		if(check)
		{
			cout<<endl<<"Row "<<i+1<<" is same"<<endl;
		}else
		{
			cout<<endl<<"Row "<<i+1<<" is not same of these matrices"<<endl;
		}
	}
	
	break;
	case 4:
	for( int i=0 ; i<rows ; i++)
	{
		for( int j=0 ; j<cols ; j++)
		{
			check=true;
			//condition to check sem row in 2nd and third matric
		    if(*(*(A2+i)+j)!=*(*(A3+i)+j))
		    {
		    	check=false;
		    	break;
			}
		}
		if(check)
		{
			cout<<endl<<"Row "<<i+1<<" is same"<<endl;
		}else
		{
		cout<<endl<<"Row "<<i+1<<" is not same of these matrices"<<endl;
		}
	}
	break;
}

// exitting condtion
}while(choice!=-1);

}

