/*
 * Fille.h
 *
 *  Created on: 2013-08-19
 *      Author: mpeyrega
 */

#ifndef FILLE_H_
#define FILLE_H_

#include "Mere.h"

///////// entier = 3 chez la fille //////////

class Fille: public Mere {
public:
	static Mere* build();
	virtual ~Fille();
protected:
	Fille();
	static bool alreadyCreatedFille;
};

#endif /* FILLE_H_ */
