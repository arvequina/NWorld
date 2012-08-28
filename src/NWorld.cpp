#include <iostream>

#include "NWorld.hpp"

int main(int argc, char* argv[])
{
	std::cout << "Hello NWorld!" << std::endl;

	// Initialize population
	NWorld nWorld;

	nWorld.populate(250000);

	return 0;
}
