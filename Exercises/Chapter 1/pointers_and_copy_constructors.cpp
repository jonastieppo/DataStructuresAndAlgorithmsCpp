#include <string.h>
#include <iostream>



class pointers_and_copy_constructors {

	struct Node_wrong {
		char* name;
		int age;
		Node_wrong(const char* n = "", int a = 0) { //copy constructor
			name = _strdup(n);
			age = a;
		}
	};

	struct Node {
		char* name;
		int age;

		Node(const char* n = "", int a = 0) { //copy constructor
			name = _strdup(n);
			age = a;
		}
		Node(const Node& n) { //copy constructor
			name = _strdup(n.name);
			age = n.age;
		}
	};

public:
	void explanation_p_and_copy_constructors() {

		std::cout << "\n============= Pointers and copy constructors ======================\n";

		Node_wrong nodeA("Jonas", 28), nodeB(nodeA);
		Node node1("Jonas", 28), node2(node1);

		std::cout << "First it will print the correct copied values" << "nodeA (name and age)" << nodeA.name << nodeA.age << std::endl;
		std::cout << "First it will print the correct copied values" << "nodeB (name and age)" << nodeB.name << nodeB.age << std::endl;

		strcpy(nodeB.name, "evandro"); //to use this, set _CRT_SECURE_NO_WARNINGS in preprocessor definitions;

		std::cout << "Now, with strcpy(nodeB.name, 'evandro'); it will change in both structs:" << std::endl;
		std::cout << "nodeA (name and age)" << nodeA.name << nodeA.age << std::endl;
		std::cout << "nodeB (name and age)" << nodeB.name << nodeB.age << std::endl;

		std::cout << "It happens because name is a pointer, so it copies the addres of nodeA.name to nodeB.name. \n To correct that, use a copy constructor Node(const Node& n), which acess the value pointed by the struct.";

		strcpy(node2.name, "evandro");
		std::cout << "Now, with strcpy(node2.name, 'evandro'), it will not bug:" << std::endl;
		std::cout << "nodeA (name and age)" << node1.name << node1.age << std::endl;
		std::cout << "nodeB (name and age)" << node2.name << node2.age << std::endl;

		std::cout << "\n===================================================================\n";


	}
};
