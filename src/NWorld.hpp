#ifndef __NWORLD_HPP
#define __NWORLD_HPP

#include "Poblacio.hpp"

class NWorld
{
public:
	NWorld() {};
	~NWorld() {};

	void populate(const unsigned int nIndividuals)
	{
		population.populate(nIndividuals);

		// Initialize internal parameters of the world
		this->turn = 0;
		this->nIndividuals = nIndividuals;
	}

private:

	// Entities that form the world
	Poblacio population;

	// Internal parameters of the world
	unsigned int turn;
	unsigned int nIndividuals;
};

#endif
