#ifndef __EMPRESA_HPP
#define __EMPRESA_HPP

#include "Element.hpp"

class Empresa : public Element
{
public:
	Empresa();
	Empresa(unsigned long cash);
	~Empresa();

private:

	unsigned long cash;		//
	
};

#endif
