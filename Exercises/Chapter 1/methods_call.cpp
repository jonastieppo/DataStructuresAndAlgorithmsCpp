#include <iostream>
#include "Inheretance.cpp"
#include "pointers.cpp"
#include "pointers_and_copy_constructors.cpp";
#include "pointers_and_reference_var.cpp"

using namespace std;

class MethodsChapterOne{
public:
	//MethodsChapterOne() {};
	void Inheretance() {
		BaseClass bc;
		Derived1Level1 d1l1;
		Derived2Level1 d2l1;
		DerivedLevel2 dl2;
		//bc.f("main(1)");
		//d1l1.f("main(2)");
		//d2l1.f("main(3)");
		dl2.f("main (4)");
	}

	void ArrayAsPointer() {
		Pointers pointer;
		pointer.SumAnArrayAspointer();
	}
	
	void pointers_and_copy_constructors_explanation() {
		pointers_and_copy_constructors copy_constructor;
		copy_constructor.explanation_p_and_copy_constructors();
	}

	void pointer_and_reference_var() {
		PointersAndRefVar prf;
	}

};

