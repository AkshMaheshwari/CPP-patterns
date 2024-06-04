//Hollow rectange
#include <iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  int cols;
  cout << "Enter the number of columns: ";
  cin >> cols;
  int i, j; 
  for (i=1; i<=rows; i++) 
  { 
      // Print stars for each solid rows 
      if (i==1 || i==rows) 
          for (j=1; j<=cols; j++) 
              cout << "*"; 

      // stars for hollow rows 
      else
          for (j=1; j<=cols; j++) 
              if (j==1 || j==cols) 
                  cout << "*"; 
              else
                  cout << " "; 

      // Move to the next line/row 
      cout << "\n"; 
  } 
}
