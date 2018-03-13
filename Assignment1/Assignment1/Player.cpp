#include "Player.h"
#include <iostream>

Player::Player()
{
}


Player::~Player()
{
}

void Player::Equip(PrimaryWep w)
{
	weaponPrimary = w;
	std::cout << "Equipping Main Weapon...\n";
}

void Player::Equip(SecondaryWep w)
{
	weaponSecondary = w;
	std::cout << "Equipping Secondary Weapon... \n";

}

void Player::ShootMainWep()
{
	weaponPrimary.Shoot();
}

void Player::ShootSecWep()
{
	weaponSecondary.Shoot();
}