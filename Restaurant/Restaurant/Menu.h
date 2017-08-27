#ifndef __MENU_H
#define __MENU_H

#include "Dish.h"

class Menu
{
private:
	const Dish* dishes;
public:
	Menu(const Dish*& dishes);
	~Menu(){delete []dishes;}

	// Methods
	void addDish(const Dish& dish);
	void removeDish(const char* dishName);
	void print() const;
};

#endif // __MENU_H