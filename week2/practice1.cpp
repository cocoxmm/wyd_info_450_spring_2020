#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int inputnumber = -1;
	while (1){
		cout << "Please enter a number." << endl;
		cin >> inputnumber;
		if (inputnumber == 0){
			break;
		}
		cout << inputnumber << "The output is " << pow(inputnumber, 2) << endl;
	}
	cout << "Invalid." << endl;
	return 0;
}
