#include <iostream>
using namespace std;

class Pointers {

public:
	void SumAnArrayAspointer() {
		int a[5] = { 1,2,3,4,5 }, i, sum; //array and var of type int;

		for (sum = *a, i = 1; i < 5; i++) {
			sum += *(a + i);
		}
		cout << "Array a = [1,2,3,4,5]. Sum should be 15" << endl;
		cout << "sum: " << sum << endl;
	}
};
