#include "Individu.hpp"

Individu::Individu()
{
}

Individu::Individu(const unsigned int id, const unsigned int age, const bool sex, const unsigned long cash)
{
	this->id = id;
	this->age = age;
	this->sex = sex;
	this->cash = cash;
}

Individu::~Individu()
{
}
