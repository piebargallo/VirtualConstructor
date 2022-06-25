#include <iostream>
using namespace std;

// Def class Base
class Base {
	
	public:
		
		Base() { }
		
		~Base() { }

}; // End class 

// Def class Derived of Base
class Derived : public Base {

	public:
		
		Derived() { cout << "Derived created" << endl; }

		~Derived() { cout << "Derived destroyed" << endl; }

}; // End class

// Driver code
int main() {
	
	Derived s1;

	return 0;

} // End driver

