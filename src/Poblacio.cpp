#include "Poblacio.hpp"

Poblacio::Poblacio()
{
}

Poblacio::Poblacio(const unsigned int nIndividuals)
{
	populate(nIndividuals);
}

void Poblacio::populate(const unsigned int nIndividuals)
{
	// Loop through the number of individuals and add them one by one
	for (unsigned int k = 0; k < nIndividuals; ++k)
	{
		// Create a new individual and add them into the vector
		Individu individual;
		individuals.push_back(individual);
	}
}

Poblacio::~Poblacio()
{
}
