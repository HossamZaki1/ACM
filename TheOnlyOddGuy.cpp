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
