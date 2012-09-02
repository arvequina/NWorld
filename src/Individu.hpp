#ifndef __INDIVIDU_HPP
#define __INDIVIDU_HPP

#include "Element.hpp"

class Individu : public Element
{
public:
	Individu();
	Individu(const unsigned int id, const unsigned int age, const bool sex, const unsigned long cash);
	~Individu();

private:

	unsigned int id;		//
	unsigned int age;		//
	bool sex;				// 0 male, 1 female
	unsigned long cash;		//
	
};

#endif
