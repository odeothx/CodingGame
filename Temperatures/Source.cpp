#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int N; // the number of temperatures to analyse
	cin >> N; cin.ignore();
	int Temp = 0;
	bool isPositive;
	int TempClosestZero = 9999;
	if (N > 0) {
		for (int n = 0; n < N; n++) {
			cin >> Temp;
			cerr << "Input : " << Temp << endl;
			if (abs(Temp) < abs(TempClosestZero)) {
				TempClosestZero = Temp;
				isPositive = (Temp > 0);
			}
			else if (abs(Temp) == abs(TempClosestZero)) {
				if (Temp > 0) {
					isPositive = true;
					TempClosestZero = Temp;
				}
			}
		}

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;

		cout << TempClosestZero << endl;
	}
	else
		cout << "0" << endl;
}