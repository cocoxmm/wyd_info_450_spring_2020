#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int yearnumber = -1;

	while (1){
		cout << "Please enter the year number." << endl;
		cin >> yearnumber;
		if(yearnumber == 0){
			break;
		}
		cout << (yearnumber % 4 == 0) << endl;
		cout << (yearnumber % 100 == 0) << endl;
		cout << (yearnumber % 400 == 0) << endl;
		if (yearnumber % 100 == 0 && !(yearnumber % 400 == 0)){
			cout << "It is not a leap year." << endl;
		}
		else if(yearnumber % 4 == 0){
			cout << "It is a leap yaer." << endl;
		}
		else {
			cout << "It is not a leap year." << endl;
		}
	}
	cout << "Invalid." << endl;
	return 0;
}