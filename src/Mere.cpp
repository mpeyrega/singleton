/*
 * Mere.cpp
 *
 *  Created on: 2013-08-19
 *      Author: mpeyrega
 */

#include "Mere.h"

Mere::Mere() {
	entier = 0;
	alreadyCreated = true;
}

Mere* Mere::getMere(){
	return mere;
}

Mere* Mere::build(int entier) {
	if (alreadyCreated) {
		return getMere();
	} else {
		mere = new Mere();
		mere->entier = entier;
		alreadyCreated = true;
		return mere;
	}
}

Mere::~Mere() {
	alreadyCreated = false;
	delete mere;
	mere = NULL;
}

bool Mere::alreadyCreated = false;
Mere* Mere::mere = NULL;
