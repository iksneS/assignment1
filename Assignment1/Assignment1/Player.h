#pragma once
#include "PrimaryWep.h"
#include "SecondaryWep.h"

class Player
{
public:


	Player();
	~Player();

	PrimaryWep weaponPrimary;
	SecondaryWep weaponSecondary;

	void Equip(PrimaryWep w);
	void Equip(SecondaryWep w);

	void ShootMainWep();
	void ShootSecWep();
	


};

