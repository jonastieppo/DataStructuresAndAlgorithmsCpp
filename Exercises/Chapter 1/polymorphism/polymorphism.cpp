#include <iostream>
using namespace std;

//In OOP, polymorphism means that the same function name denotes many functions that are members of diffrentes objects. 


class Class1 {
public:
	virtual void f() {
		cout << "function f() in Class1\n";
	}
	void g() {
		cout << "Function g() in Class1\n";
	}

};

class Class2 {
public:
	virtual void f() {
		cout << "function f() in Class2\n";
	}
	void g() {
		cout << "Function g() in Class2\n";
	}

};

class Class3 {
public:
	virtual void h() {
		cout << "function h() in Class3\n";
	}
};




