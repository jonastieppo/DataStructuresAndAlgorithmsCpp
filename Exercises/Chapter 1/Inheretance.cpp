#include <iostream>
using namespace std;


class BaseClass {

public:
	BaseClass() {}
	void f(const char* s = "unknown") {
		cout << "Function f() in BaseCalass called from " << s << endl;
		h();
	}

protected:
	void g(const char* s = "unknown") {
		cout << "Function g() in BaseCalass called from " << s << endl;
		h();
	}

private:
	void h() {
		cout << "Function h() in BaseClass\n";
	}
};

class Derived1Level1 : public virtual BaseClass {
public:
	void f(const char* s = "unknown") {
		cout << "Function f() in DerivedLevel1 called from " << s << endl;
		g("DerivedLevel1");
		h("DerivedLevel1");
	}
	void h(const char* s = "unknown") {
		cout << "Function h() in Derived1Level1 called from " << s << endl;
	}
};

class Derived2Level1 : public virtual BaseClass {
public:
	void f(const char* s = "unknown") {
		cout << "Function f() in Derived2Level1 called from " << s << endl;
		g("Derived2Level1");
		//h(); //error: BaseClass::h() is not acessible
	}
};

class DerivedLevel2 : public Derived1Level1, public Derived2Level1 {
public:
	void f(const char* s = "unknown") {
		cout << "Function f() in DerivedLevel2 called from " << s << endl;
		g("DerivedLevel2");
		Derived1Level1::h("DerivedLevel2");
		BaseClass::f("DerivedLevel2");
		BaseClass::g("DerivedLeve2");
	}

	void g(const char* s = "unkdown") {
		cout << "Function g() in DerivedLevel2 called from " << s << endl;
	}
};

int main() {

	BaseClass bc;
	Derived1Level1 d1l1;
	Derived2Level1 d2l1;
	DerivedLevel2 dl2;
	//bc.f("main(1)");
	//d1l1.f("main(2)");
	//d2l1.f("main(3)");
	dl2.f("main (4)");
	return 0;
}