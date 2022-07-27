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

		int a[] = { 1,2,3,4,5 };

		int return_reference = functionReferenceType(a, 3);
		cout << "\n-------------- Reference as return type for functions ----------------------\n";
		cout << "\n\t\t int return_reference = functionReferenceType(a, 3) \n\t\t return_reference = " << return_reference << endl;
		functionReferenceType(a, 3) = 40;
		cout << "\n\t\t functionReferenceType(a, 3) = 40 \n\t\t a[3] = " << a[3] << endl;
		cout << "\n----------------------------------------------------------------------------\n";

		int pointer_return_type = *functionDeference(a, 3);
		cout << "\n-------------- Pointer as return type for functions ----------------------\n";
		cout << "\n\t\t int pointer_return_type = *functionDeference(a, 3) \n\t\t pointer_return_type = " << pointer_return_type << endl;
		*functionDeference(a, 3) = 60;
		cout << "\n\t\t *functionDeference(a, 3) = 60 \n\t\t a[3] = " << a[3] << endl;
		cout << "\n----------------------------------------------------------------------------\n";

	}
	void PassingArgumentsByReference(int i, int* j, int& k) {
		i = 2; //won't change in function call
		*j = 4; // change in function call
		k = 10; //change in function call
	}

	int& functionReferenceType(int a[], int i) {
		return a[i];
	}

	int* functionDeference(int a[], int i) {
		return &a[i];
	}




};