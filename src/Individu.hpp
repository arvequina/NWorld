#ifndef __INDIVIDU_HPP
#define __INDIVIDU_HPP

#include <vector>

class Individu
{
public:
	Individu();
	Individu(unsigned int age, bool sex, unsigned long cash);
	~Individu();

private:

	unsigned int age;		//
	bool sex;				// 0 male, 1 female
	unsigned long cash;		//
	
};

#endif
