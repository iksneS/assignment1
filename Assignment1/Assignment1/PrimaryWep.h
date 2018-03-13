#pragma once
#include "Weapon.h"
class PrimaryWep : public Weapon
{
public:
	PrimaryWep();
	~PrimaryWep();

	PrimaryWep::PrimaryWep(std::string s);
};
