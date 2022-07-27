#include <iostream>
using namespace std;


class PointersAndRefVar {
public:
	 PointersAndRefVar() {
		int n = 0, * p = &n, & r = n;
		// &r is a reference var. It is implemented as a constant pointer to a variable. 
		cout << "\n =================== pointers and reference var ================== \n";
		for (n; n < 10; n++) {
			cout << "\n\t values (n | *p | &r) " << n << ' ' << *p << ' ' << r << endl;
		}
	}
};