/*
 * mere.h
 *
 *  Created on: 2013-08-19
 *      Author: mpeyrega
 */

#ifndef MERE_H_
#define MERE_H_

#include <iostream>
using namespace std;

class Mere {
public:
	static Mere* getMere();
	static Mere* build(int entier);
	int get_entier(){
		return entier;
	}
	virtual ~Mere();

protected:
	Mere();
	int entier;
	static bool alreadyCreated;
	static Mere* mere;
};

#endif /* MERE_H_ */
