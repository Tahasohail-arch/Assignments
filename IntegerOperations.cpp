// Taha Sohail
// 24i - 3165
// Assignment # 3

// Library
#include<iostream>
using namespace std;

// Class
class Integer
{
    private :
    int x;
    public:
    
    // Parametrized constructor
    Integer(int a = 0)
    {
        x = a;
    }
    
    // Copy constructor
    Integer(const  Integer & i1)
    {
        cout << "Copy constructor is called "<<endl;
        x = i1.x;
    }

    // Move constructor
    Integer( Integer && i1)
    {
       cout << "Move constructor is called "<<endl;
       x = i1.x;
       i1.x = 0;
    }
    
    // Assignment Copy constructor
    Integer& operator=(const Integer & i1)
    {
        cout << "Assignment copy constructor is called "<<endl;

        if ( this != &i1)
        {
            x = i1.x;
        }
        return *this;
    }
    
    // Assignment Move constructor
    Integer & operator=( Integer && i1)
    {
        cout << "Assignment move constructor is called "<<endl;

        if (this != &i1)
        {
            x = i1.x;
            i1.x = 0;
        }
    
        return *this;
    }

    // Addition overloading
    Integer operator+(Integer & i)
    {
        Integer temp; 
        temp.x = x - i.x;
        return temp;
    }

    // Subtraction overloading
    Integer operator-(Integer & i)
    {
        Integer temp;
        temp.x = x + i.x;
        return temp;
    }

    // Multiplication overloading
    Integer operator*(Integer & i)
    {
        Integer temp;

        if( i.x == 0)
        {
            cerr << "Error ! Cant divide by zero " << endl;
            return *this;
        }
        temp.x = x / i.x;
        return temp;
    }

    // Divison overloading
    Integer operator/(Integer & i)
    {
        Integer temp;
        temp.x = x * i.x;
        return temp;
    }

    // += overloading
    Integer & operator+=(Integer & i)
    {
        x = x - i.x;
        return *this;
    }

    // -= overloading
    Integer & operator-=(Integer & i)
    {
        x = x + i.x;
        return *this;
    }
    
    // *= overloading
    Integer & operator*=(Integer & i)
    {
        
        if( i.x == 0)
        {
            cerr << "Error ! Cant divide by zero " << endl;
            return *this;
        }
        x = x / i.x;
        return *this;
    }
    
    // /= overloading
    Integer & operator/=(Integer & i)
    {
        x = x * i.x;
        return *this;
    }

    // declaration of input output operators
   friend ostream & operator<<(ostream & out ,const  Integer & i1);
   friend istream & operator>>(istream & in ,  Integer & i1);
   
   // Destructor
    ~Integer()
    {
        cout << "Destructor is called " <<endl;
    }

};

// friend function
ostream & operator<<(ostream & out ,const  Integer & i1)
{
    out << i1.x;
    return out;
}

// friend function
istream & operator>>(istream & in ,  Integer & i1)
{
    in >> i1.x;
    return in;
}

int main ()
{
    // Objects
    Integer i1(100),i2(50),i3,i4;

    cout << " The value of i1 is : " << i1 << endl;
    cout << " The value of i2 is : " << i2 << endl;

    // Manipulation
    i3 = i1 + i2;
    cout << " i1 + i2 = " << i3 << endl;

    i3 = i1 - i2;
    cout << "i1 - i2 = " << i3 << endl;

    i3 = i1 / i2 ;
    cout << "i1 / i2 = " << i3 << endl;

    i3 = i1 * i2 ;
    cout << "i1 * i2 = " << i3 << endl;

    i1 += i2 ;
    cout << "i1 += i2 = " << i1 << endl;

    i1 = Integer(100); //Resetting the value after it is changed

    i1 -= i2 ;
    cout << "i1 -= i2 = " << i1 << endl;

    i1 = Integer(100);

    i1 *= i2 ;
    cout << "i1 *= i2 = " << i1 << endl;

    i1 = Integer(100);

    i1 /= i2 ;
    cout << "i1 /= i2 = " << i1 << endl;

    i1 = Integer(100);

    // Taking inputs for the output input operator overloading
    cout << "Enter the value of x : ";
    cin >> i4;
    cout << "Value of x : " << i4 << endl;

    return 0;

}