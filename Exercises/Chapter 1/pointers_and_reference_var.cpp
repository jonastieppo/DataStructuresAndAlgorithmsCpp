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

		int i = 10, j = 20 , k = 40;
		cout << "\n\n\t---------------------------------";
		cout << "\n Vars before PassingArgumentsByReference (): (i,j,k) " << "i: " << i << " j: " << j << " k: " << k << endl;
		PassingArgumentsByReference(i, &j, k);
		cout << "\n Vars after PassingArgumentsByReference (): (i,j,k) " << "i: " << i << " j: " << j << " k: " << k << endl;
	}
	void PassingArgumentsByReference(int i, int* j, int& k) {
		i = 2; //won't change in function call
		*j = 4; // change in function call
		k = 10; //change in function call

	}


};