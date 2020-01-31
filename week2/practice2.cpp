#include <iostream>
#include <cmath>

  using namespace std;

  int main()
  {
  
    int inputnumber = -1;
    bool primeornot = 0;
    while (1) {
      cout << "Please enter a number." << endl;
      cin >> inputnumber;
      if (inputnumber == 0){
        break;
      }
      primeornot = 1;
      for (int x = 2;x < inputnumber;x++){
        if (inputnumber % x == 0){
          primeornot  = 0;
        }
      }
      if (primeornot){
        cout << inputnumber << " is a prime number." << endl;
      } else {
        cout << inputnumber << " is not a prime number." << endl;
      }
    }
    cout << "Invalid" << endl;
    return 0;
  }
