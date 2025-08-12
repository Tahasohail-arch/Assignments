#include<iostream>
using namespace std;
//Tahasohail_ SE-B_24I-3165
int main()
{
	//First,We have to declare the int for subjects and their credit hours for the final gpa as well to assign grades and grade points to them.
	int mofeng,mofcal,mofap,mofpf,mofideology;
	int cdhreng,cdhrcal,cdhrap,cdhrpf,cdhrideology;
	string grade1,grade2,grade3,grade4,grade5;
	double gp1,gp2,gp3,gp4,gp5;
	// We will ask user for its marks in eng and its credit hours.
	cout<<"Enter your marks of English : ";
	cin>>mofeng;
	cout<<"Enter your credit hours of English :";
	cin>>cdhreng;
	// By using string we will assign grades to numbers.
	grade1=(mofeng >= 90)?"A+":
           (mofeng >= 86)?"A":
	       (mofeng >= 82)?"A-":
	       (mofeng >= 78)?"B+":
	       (mofeng >= 74)?"B":
	       (mofeng >= 70)?"B-":
	       (mofeng >= 66)?"C+":
	       (mofeng >= 62)?"C":
	       (mofeng >= 58)?"C-":
	       (mofeng >= 54)?"D+":
	       (mofeng >= 50)?"D":
	       (mofeng <= 49)?"F":"Less than F grade";
	       //After that user will get his obtained grade.
	cout<<"Your obtained Grade in English is : " <<grade1 <<endl;
	// Assigning the grade points to marks of the user.
   	gp1=(mofeng >= 90)?4.00:
           (mofeng >= 86)?4.00:
	       (mofeng >= 82)?3.67:
	       (mofeng >= 78)?3.33:
	       (mofeng >= 74)?3.00:
	       (mofeng >= 70)?2.67:
	       (mofeng >= 66)?2.33:
	       (mofeng >= 62)?2.00:
	       (mofeng >= 58)?1.67:
	       (mofeng >= 54)?1.33:
	       (mofeng >= 50)?1.00:
	       (mofeng <= 49)?0:0;
	       //After that he will get his obtained  grade points.
	cout<<"Your obtained Grade point in English is : "<<gp1 <<endl;
	// We will ask user for its marks in cal and its credit hours.
	cout<<"Enter your marks of Calculus  : ";
	cin>>mofcal;
	cout<<"Enter your credit hours of Calculus :";
	cin>>cdhrcal;
	// By using string we will assign grades to numbers.
	grade2=(mofcal >= 90)?"A+":
           (mofcal >= 86)?"A":
	       (mofcal >= 82)?"A-":
	       (mofcal >= 78)?"B+":
	       (mofcal >= 74)?"B":
	       (mofcal >= 70)?"B-":
	       (mofcal >= 66)?"C+":
	       (mofcal >= 62)?"C":
	       (mofcal >= 58)?"C-":
	       (mofcal >= 54)?"D+":
	       (mofcal >= 50)?"D":
	       (mofcal <= 49)?"F":"Less than F grade";
	       //After that user will get his obtained grade.
	cout<<"Your obtained Grade in Calculus is : " <<grade2 <<endl;
	// Assigning the grade points to marks of the user.
   	gp2=(mofcal >= 90)?4.00:
           (mofcal >= 86)?4.00:
	       (mofcal >= 82)?3.67:
	       (mofcal >= 78)?3.33:
	       (mofcal >= 74)?3.00:
	       (mofcal >= 70)?2.67:
	       (mofcal >= 66)?2.33:
	       (mofcal >= 62)?2.00:
	       (mofcal >= 58)?1.67:
	       (mofcal >= 54)?1.33:
	       (mofcal >= 50)?1.00:
	       (mofcal <= 49)?0:0;
	       //After that he will get his obtained  grade points.
	cout<<"Your obtained Grade point in Calculus is : "<<gp2 <<endl;
	// We will ask user for its marks in Ap and its credit hours.
	cout<<"Enter your marks of Applied Physics : ";
	cin>>mofap;
	cout<<"Enter your credit hours of Applied Physics :";
	cin>>cdhrap;
	// By using string we will assign grades to numbers.
	grade3=(mofap >= 90)?"A+":
           (mofap >= 86)?"A":
	       (mofap >= 82)?"A-":
	       (mofap >= 78)?"B+":
	       (mofap >= 74)?"B":
	       (mofap >= 70)?"B-":
	       (mofap >= 66)?"C+":
	       (mofap >= 62)?"C":
	       (mofap >= 58)?"C-":
	       (mofap >= 54)?"D+":
	       (mofap >= 50)?"D":
	       (mofap <= 49)?"F":"Less than F grade";
	       //After that user will get his obtained grade.
	cout<<"Your obtained Grade in English is : " <<grade3 <<endl;
	// Assigning the grade points to marks of the user.
   	gp3=(mofap >= 90)?4.00:
           (mofap >= 86)?4.00:
	       (mofap >= 82)?3.67:
	       (mofap >= 78)?3.33:
	       (mofap >= 74)?3.00:
	       (mofap >= 70)?2.67:
	       (mofap >= 66)?2.33:
	       (mofap >= 62)?2.00:
	       (mofap >= 58)?1.67:
	       (mofap >= 54)?1.33:
	       (mofap >= 50)?1.00:
	       (mofap <= 49)?0:0;
	       //After that he will get his obtained  grade points.
	cout<<"Your obtained Grade point in Applied Physics is : "<<gp3<<endl;
	// We will ask user for its marks in Pf and its credit hours.
	cout<<"Enter your marks of PF : ";
	cin>>mofpf;
	cout<<"Enter your credit hours of PF :";
	cin>>cdhrpf;
	// By using string we will assign grades to numbers.
	grade4=(mofpf >= 90)?"A+":
           (mofpf >= 86)?"A":
	       (mofpf >= 82)?"A-":
	       (mofpf >= 78)?"B+":
	       (mofpf >= 74)?"B":
	       (mofpf >= 70)?"B-":
	       (mofpf >= 66)?"C+":
	       (mofpf >= 62)?"C":
	       (mofpf >= 58)?"C-":
	       (mofpf >= 54)?"D+":
	       (mofpf >= 50)?"D":
	       (mofpf <= 49)?"F":"Less than F grade";
	       //After that user will get his obtained grade.
	cout<<"Your obtained Grade in PF is : " <<grade4 <<endl;
	// Assigning the grade points to marks of the user.
   	gp4=(mofpf >= 90)?4.00:
           (mofpf >= 86)?4.00:
	       (mofpf >= 82)?3.67:
	       (mofpf >= 78)?3.33:
	       (mofpf >= 74)?3.00:
	       (mofpf >= 70)?2.67:
	       (mofpf >= 66)?2.33:
	       (mofpf >= 62)?2.00:
	       (mofpf >= 58)?1.67:
	       (mofpf >= 54)?1.33:
	       (mofpf >= 50)?1.00:
	       (mofpf <= 49)?0:0;
	       //After that he will get his obtained  grade points.
	       cout<<"Your obtained Grade point in PF is : " <<gp4<<endl;
	       	// We will ask user for its marks in Ideology and its credit hours.
	cout<<"Enter your marks of Ideology : ";
	cin>>mofideology;
	cout<<"Enter your credit hours of Ideology :";
	cin>>cdhrideology;
	// By using string we will assign grades to numbers.
	grade5=(mofideology >= 90)?"A+":
           (mofideology >= 86)?"A":
	       (mofideology >= 82)?"A-":
	       (mofideology >= 78)?"B+":
	       (mofideology >= 74)?"B":
	       (mofideology >= 70)?"B-":
	       (mofideology >= 66)?"C+":
	       (mofideology >= 62)?"C":
	       (mofideology >= 58)?"C-":
	       (mofideology >= 54)?"D+":
	       (mofideology >= 50)?"D":
	       (mofideology <= 49)?"F":"Less than F grade";
	       //After that user will get his obtained grade.
	cout<<"Your pbtained Grade in Ideology is : " <<grade5 <<endl;
	// Assigning the grade points to marks of the user.
   	gp5=(mofideology >= 90)?4.00:
           (mofideology >= 86)?4.00:
	       (mofideology >= 82)?3.67:
	       (mofideology >= 78)?3.33:
	       (mofideology >= 74)?3.00:
	       (mofideology >= 70)?2.67:
	       (mofideology >= 66)?2.33:
	       (mofideology >= 62)?2.00:
	       (mofideology >= 58)?1.67:
	       (mofideology >= 54)?1.33:
	       (mofideology >= 50)?1.00:
	       (mofideology <= 49)?0:0;
	       //After that he will get his obtained  grade points.
	cout<<"Your obtained Grade point in Ideology is : "<<gp5<<endl;
	// Now, we will take sigmagradepoints, credit hrs , GPA as a variable for double
	double sigmagradepoints;
	double credithr;
	double GPA;
	//After calculation overall gradepoints multiplying by its corresponding credit hrs.
	sigmagradepoints=(gp1*cdhreng)+(gp2*cdhrcal)+(gp3*cdhrap)+(gp4*cdhrpf)+(gp5*cdhrideology);
	// Adding the credit hours.
	credithr=cdhreng+cdhrap+cdhrcal+cdhrpf+cdhrideology;
	// Calculating the GPA
	GPA=sigmagradepoints/credithr;
	//Assigning the statements for the good and bad GPA
	cout<<"Your obtained GPA is : "<<GPA<<endl;
	string Toshow;
	Toshow=(GPA==4)?"Congratulations! your name is placed in Rector list  ":
	       (GPA>3.50)?"Congratulations! your name is placed in Dean's list  ":
	       (GPA<2.00)?"Your name is placed in Warning list ":0;
	cout<<Toshow;
	
	
}
	
	
	
	
	

	
