/*
 * Fille.cpp
 *
 *  Created on: 2013-08-19
 *      Author: mpeyrega
 */

#include "Fille.h"


Mere* Fille::build() {
	if (alreadyCreatedFille) {
		return getMere();
	} else {
		if (alreadyCreated) {
			delete mere;
			mere = NULL;
		}
		mere = Mere::build(3);
		alreadyCreated = true;
		return mere;
	}
}

Fille::Fille() :
		Mere() {
}

Fille::~Fille() {
	alreadyCreated = false;
	alreadyCreatedFille = false;
	delete mere;
	mere = NULL;
}

bool Fille::alreadyCreatedFille = false;
