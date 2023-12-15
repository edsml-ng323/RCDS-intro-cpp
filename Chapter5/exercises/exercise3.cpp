/*
  Exercise: Compute mean (input from file)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

  // Declare variables
  fstream f;
  double num, mean;
  double sum = 0.0, n = 0.0; 

  // Open file
  f.open("data.dat", ios::in);
  if (!f.good()) {

      cout << "Problems with the file data.dat" << endl;
      return -1;
  
  }
      
  // Read the numbers and compute sum 
  for (;;) {

      f >> num;
      if (f.eof()) break;
      sum += num;
      n++;
  }
  
  f.close();

  // Compute mean
  
  cout << "Mean = " << sum / n << endl;

  // Declare variables
  ofstream f2;

  // Open file and write a message
  f2.open ("results.txt");
  f2 << "Mean value:" << mean << endl;

  // Close file
  f2.close();

  return 0;

}