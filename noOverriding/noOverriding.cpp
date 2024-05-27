#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() {
		cout <<"Hello saya function dari base class";

	}
};

class darivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hello saya function dari derived Class";

	}
};


