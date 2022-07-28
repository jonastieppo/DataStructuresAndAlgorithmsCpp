#include "polymorphism.cpp"


class PolyMorphism {
public:
	PolyMorphism() {
		cout << "\n------------------------------------------------------------\n";
		cout << "\n\t\t Polymorphism";
		cout << "\n------------------------------------------------------------\n";
		Class1 object1, * p;
		Class2 object2;
		Class3 object3, *q;

		p = &object1; //pointer to object1
		p->f();
		p->g();
		p = (Class1*) & object2;
		p->f();
		p->g();
		p = (Class1*) & object3;
		p->f();
		p->g();
		


		
	}
};
