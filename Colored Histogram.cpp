// Taha Sohail
// 24i-3165
// Assignment # 3

// Libraries
#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;

// Histogram Class
class Histogram
{
    private :
    // Attributes
    vector<double>bounds;
    vector<int>Bincounts;

    public:

    // Paramterized Constructor
    Histogram(vector<double> & b)
    {
       bounds = b;
       // Bincounts Always less than the Size of Bounds
       Bincounts = vector<int>(b.size()-1 ,0);
    }

    // Clear Function To Clear How many values fall in the bounds intervals
    void Clear()
    {
        for ( int i = 0 ; i < Bincounts.size() ; i++)
        {
            Bincounts[i] = 0;
        }
    }
     
    // Update function to increment bincount for which value falling in that interval
    void Update(double value) 
    {
        // If value is less than minimun bound that we will store in the first interval
       if (value < bounds[0])
       {
        Bincounts[0]++;
       }
        
       // If value is greater than highest bound or equals to it than we will store it in the last interval
       if( value >= bounds.back())
       {
        Bincounts.back()++;
       }
     
       // Logic to increment bincounts for values falling in specific intervals
       for ( int i = 0 ; i < bounds.size() - 1; i++)
       {
           if( value >= bounds[i]  && value < bounds[i + 1])
           {
            Bincounts[i]++;
            break;
           }
       }
    }

    // Copy constructor
    Histogram(const Histogram & h)
    {
        bounds = h.bounds;
        Bincounts = h.Bincounts;
    }
    
    // Move constructor
    Histogram( Histogram && h)
    {
        bounds = move(h.bounds);
        Bincounts = move(h.Bincounts);
    }
    
    // Assignment copy constructor
    Histogram & operator=(const Histogram & h)
    {
        bounds = h.bounds;
        Bincounts = h.Bincounts;
        return *this;
    }
    
    // Assignment Move constructor
    Histogram & operator=(Histogram && h)
    {
        bounds = move(h.bounds);
        Bincounts = move(h.Bincounts);
        return *this;
    }

     
    // Display the Graphics
    void displayConsoleGraphics() const 
    {
        // Handled by windows.h to take over the screen
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        // Arrays of different colors
        int colors[] = {9, 10, 11, 12, 13, 14, 6, 7}; // Blue, Green, Cyan, Red, Magenta, Yellow, DarkYellow, White

        cout << endl << "Colored Histogram  : " << endl;
        
        // Logic to make the Colored Histogram
        for (int i = 0; i < Bincounts.size() ; i++)
        {
            SetConsoleTextAttribute(hConsole , colors[i % 8]);

            cout << "[" << bounds[i] << ", " << bounds[i + 1] << "): ";
            
            // Makes the Block that how many counts
            for (int j = 0; j < Bincounts[i] ; j++) 
            {
                cout << (char)219;  // Solid block character
            }

            cout << " (" << Bincounts[i] << ") " << endl;
        }

        // Reset to white
        SetConsoleTextAttribute(hConsole, 15);
    }
    
    // Declaration of output operator overloading
    friend ostream & operator<<(ostream & out , const Histogram & h);

    //Destructor
    ~Histogram()
    {
        cout << "Destructor is called " << endl;
    }

};

// Friend Function to print Histogram
ostream & operator<<(ostream & out , const Histogram & h)
{
out << "Histogram:" << endl;

for ( int i = 0 ; i < h.Bincounts.size() ; i++)
{
    out << "Bin " << i+1 << " : [" << h.bounds[i] << ", " << h.bounds[i + 1] << ") : " << h.Bincounts[i] << endl;
}
return out;
}


int main() 
{
  // initialization
   int size ;
   double value = 0.0;

   // size of vector input
   cout << "Enter the number of bounds : ";
   cin >> size;

   // Validation of couldn't make intervals
   while(size < 2)
   {
    cout << " Error! There should be at lease 2 bounds ." << endl;
    cin >> size;
   }
 
    vector<double> bounds(size);

   // Input of bounds in points
    cout << "Enter the bound in points. : " << endl;
    cin >> bounds[0];
    
    for ( int i = 1 ; i < size ; i ++)
    {
        cout << "Enter the bound in points. : " << endl;
        cin >> bounds[i];   

        // Validation of Increasing Order
        while (bounds[i] < bounds[i - 1])
        {
        cout << "Error ! Enter the Bound Again ! : " << endl;
        cin >> bounds[i];
        }
    }

    // object 
    Histogram h(bounds);

   // input of user until user want to exit
    while( value != -1)
    {
    cout << "Enter the values of Ranges and to end press -1 : " << endl;
    cin >> value;
    h.Update(value);
    }

    // Print Simple histogram
    cout << h;

    // Graphics Histogram
    h.displayConsoleGraphics();

    // Clear The Bins
    h.Clear();

    cout << endl << "After clear: " <<endl;

    // Cleared Histogram
    cout << h;

    return 0;
}
