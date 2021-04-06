// Chapter 6, Programming Challenge 2
#include <iostream>
#include <iomanip> // for setw()
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);
void line();


int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
   
   return 0;
}

// Returns the rectangle's length entered by the user
double getLength()
{
    double L;
    cout << "Enter the rectangle's length: ";
    cin >> L;
    
    while (L < 1) {
        cout <<"Error! Has to be a positive number.\n";
        cout << "Enter the rectangle's length: ";
        cin >> L;
    }
    
    return L;
}

// Returns the rectangle's width entered by the user
double getWidth()
{
    double W;
    cout << "Enter the rectangle's width: ";
    cin >> W;
    
    while (W < 1) {
        cout <<"Error! Has to be a positive number.\n";
        cout << "Enter the rectangle's length: ";
        cin >> W;
    }
    
    return W;
}

// Calculates and returns the rectangle's area, accepts lenght and width
double getArea(double L, double W){ return (L*W); }

/*  Accepts the rectangle's lenght, width and area and displays them in 
    an appropriate message on the screen   */
void displayData(double L, double W, double A)
{
    //cout << "\n\n";
    cout << setw(10) << "Length" << setw(10) << "Width" << setw(10) << "Area\n";
    line();
    cout <<  setw(10) << L << setw(10) << W << setw(10) << A << endl;
    
}

//===================================
void line()
{
    for (int i = 1; i < 35 ; i++)
          cout << "=";
     cout << "\n";
}

