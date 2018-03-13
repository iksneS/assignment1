#include "PrimaryWep.h"


PrimaryWep::PrimaryWep()
{
}

PrimaryWep::~PrimaryWep()
{
}

PrimaryWep::PrimaryWep(std::string s)
{
	Weapon::shootText = s;
}