//============================================================================
// Name        : singleton.cpp
// Author      : Mathilde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Mere.h"
#include "Fille.h"

using namespace std;


int main() {
	cout << "Hello World" << endl; // prints Hello World
	Mere::build(6);
	cout << "le name = " << Mere::getMere()->get_entier() << endl;

	Fille::build();
	cout << "test" << endl;
	cout << "le name = " << Fille::getMere()->get_entier() << endl;

	return 0;
}
