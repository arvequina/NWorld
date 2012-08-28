#ifndef __POBLACIO_HPP
#define __POBLACIO_HPP

#include <vector>

#include "Individu.hpp"

class Poblacio
{
public:
	Poblacio();
	Poblacio(const unsigned int nIndividuals);
	~Poblacio();

	void populate(const unsigned int nIndividuals);

private:

	std::vector<Individu> individuals;
};

#endif
