#ifndef __POBLACIO_HPP
#define __POBLACIO_HPP

#include <vector>

#include "Individu.hpp"

class Poblacio
{
public:
	Poblacio();
	~Poblacio();

private:

	std::vector<Individu> individuals;
};

#endif
