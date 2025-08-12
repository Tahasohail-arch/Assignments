// Taha Sohail
// 24i-3165
// Assignment#3
#include<iostream>
using namespace std;

#define MAX 10

void multiplyMatrices(int matrixA[MAX][MAX], int matrixB[MAX][MAX], int rowA,int colA, int rowB, int colB)
{
	// making array of result to 0 otherwise it will give garbage value 
	int result[MAX][MAX];
	for (int i=0; i<rowA ; i++) 
	{
        for (int j=0; j<colB; j++)
		{
            result[i][j] = 0;
        }
    }   
	// multiplication of matrixes by three loops and formula 
	for( int i=0 ; i<rowA ; i++)
    {
        for( int j=0 ; j<colB ; j++ )
        {
        for (int k=0; k<colA; k++)
        {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    cout<<endl;
    }
    
    // for the ouput of the resultant matrix 
for( int i=0 ; i<rowA ; i++)
{
    for( int j=0 ; j<colB ; j++ )
    {
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}

}
// display of  matrix
void displayMatrix(int matrix[MAX][MAX], int row, int col)
{
	for( int i=0 ; i<row ; i++)
	{
	 for( int j=0 ; j<col ; j++)
	 {
	 	cout<<matrix[i][j];
	 }
	 cout<<endl;
	}
}
int main()
{
	// initilzaing 
	int matrixA[MAX][MAX];
    int matrixB[MAX][MAX];
    int result[MAX][MAX];
	int rowA,colA,rowB,colB;
    taha:
    cout<<"Enter the number of rows for the first matrix : ";
    cin>>rowA;
    // validation
    while(rowA<=0 || rowA>10)
    {
    	cout<<"Invalid input! Enter the rows for the first matrix : ";
    	cin>>rowA;
	}
    cout<<endl<<"Enter the number of columns for the first matrix : ";
    cin>>colA;
    // validation
    while(colA<=0 || colA>10)
    {
    	cout<<endl<<"Invalid input! Enter the columns for the first matrix : ";
    	cin>>colA;
	}
	
	cout<<endl<<"Enter your  enteries for the first matrix : "<<endl;
    // input
     for( int i=0 ; i<rowA ; i++ )
    {
        for( int j=0 ; j<colA ; j++ )
        {
            
            cin>>matrixA[i][j];
        }
        cout<<endl;
    }
    
    cout<<endl<<"Enter the number of rows for the second matrix : ";
    cin>>rowB;
    //validation
    while(rowB<=0 || rowB>10)
    {
    	cout<<"Invalid input! Enter the rows for the second matrix : ";
    	cin>>rowB;
	}
    cout<<endl<<"Enter the number of columns for the second matrix : ";
    cin>>colB;
    // validation
    while(colB<=0 || colB>10)
    {
    	cout<<endl<<"Invalid input! Enter the rows for the second matrix : ";
    	cin>>colB;
	}
	
	cout<<endl<<"Enter your  enteries for the second matrix : "<<endl;
    // input for enteries
    for( int i=0 ; i<rowB ; i++ )
    {
        for( int j=0 ; j<colB ; j++ )
        {
            cin>>matrixB[i][j];
        }
        cout<<endl;
    }
    // condition if columns of first matrix and rows for the second matrix doesnt match .. then multiplication isnt possible 
    if(colA != rowB)
    {
        cout<<endl<<"Multiplication isnt possible "<<endl;
        
        goto taha;
    }else 
    {
        cout<<endl<<"Multiplication is possible "<<endl;
    }
    // calling the functions 
    cout<<endl<<"Matrix A is : "<<endl;
    displayMatrix(matrixA,rowA,colA);
    
    cout<<endl<<"Matrix B is : "<<endl;
    displayMatrix(matrixB,rowB,colB);
    
    cout<<endl<<"Result Matrix is :";
    multiplyMatrices(matrixA,matrixB,rowA,colA,rowB,colB);
    
    return 404;
}

