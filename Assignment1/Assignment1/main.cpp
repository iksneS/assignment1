#include <iostream>
#include "Weapon.h"
#include "Player.h"
#include "PrimaryWep.h"
#include "SecondaryWep.h"


int main() {


	Player p;

	PrimaryWep w1 ("Fire Effect 1");
	SecondaryWep w2("Fire Shots 2"), w3 ("Fire Shots 3");

	

	p.Equip(w1);
	p.ShootMainWep();

	p.Equip(w2);
	p.ShootSecWep();



	p.Equip(w3);
	p.ShootSecWep();

	getchar();
	return 0; 
}