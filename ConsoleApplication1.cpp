// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
/*#include <iostream>

int main()
{
	using namespace std;
	long long n;
	int odd = 0;
	int even = 0;
	cin >> n;
	if (n % 2 == 0) {
		even++;
	}
	else {
		odd++;
	}
	for (long long i = 10; i <= n; i *= 10) {
		if ((n / i) % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		if (i == 1000000000000000000) {
			break;
		}
	}

	cout << "Even : " << even << endl;
	cout << "Odd : " << odd << endl;
}*/
#include <iostream>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	int x = 1;
	int varr = 0;
	int search = 0;
	int count = 0;
	int result = 0;

	for (int i = 0; i < t; i++) {

		cin >> x;
		int* input;
		input = new int[x];

		//getting data
		for (int j = 0; j < x; j++) {
			cin >> varr;
			input[j] = varr;
		}

		
		//searching for each element
		for (int k = 0; k < x; k++) {
			search = input[k];
			count = 0;

			//looking for search item in the whole array
			for (int l = 0; l <= (x-1); l++) {
				if (search == input[l]) {
					count++;
				}
			}

			if (count % 2 != 0) {
				result = search;
			}
		}
		cout << result;
		
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
