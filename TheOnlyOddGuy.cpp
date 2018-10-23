#include <iostream>

using namespace std;

int main()
{
	int timesOfCases = 0;
	cin >> timesOfCases;
	int numberOfElements;
	int varr = 0;
	int search = 0;
	int count = 0;
	int result;

	for (int i = 0; i < timesOfCases; i++) {

		cin >> numberOfElements;
		int* input;
		input = new int[numberOfElements];

		//getting data
		for (int j = 0; j < numberOfElements; j++) {
			cin >> varr;
			input[j] = varr;
		}

		
		//searching for each element
		for (int k = 0; k < numberOfElements; k++) {
			search = input[k];
			count = 0;

			//looking for search item in the whole array
			for (int l = 0; l < (numberOfElements); l++) {
				if (search == input[l]) {
					count++;
				}
			}

			if ((count % 2) != 0) {
				result = search;
				break;
			}
		}
		cout << result;
		
	}
	return 0;
}
