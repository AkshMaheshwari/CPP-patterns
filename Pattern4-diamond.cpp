#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;

  // Top half
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      cout << " "; 
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  // Bottom half
  for (int i = rows - 1; i >= 1; i--) {
    for (int j = 1; j <= rows - i; j++) {
      cout << " "; 
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
