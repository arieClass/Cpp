#ifndef __DISH_H
#define __DISH_H

#include "IngredientAndQuantity.h"

class Dish
{
public:
	const static enum eDishType
	{
		FIRST,
		MAIN_COURSE,
		DESSERT
	};

	const static int MAX_DESCRIPTION_LENGTH = 150;
	const static int MAX_NAME_LENGTH = 40;

private:
	int price;
	char description[MAX_DESCRIPTION_LENGTH];
	char name[MAX_NAME_LENGTH];
	sIngredientAndQuantity* ingredientsAndQuantities;
	eDishType type;

public:
	Dish(int price, char* description, char* name, sIngredientAndQuantity* ingredientsAndQuantities, eDishType type);
	~Dish() {delete []ingredientsAndQuantities;}

	// Getters
	const int getPrice() const {return price;}
	const char* getDescription() const {return description;}
	const char* getName() const {return name;}
	const sIngredientAndQuantity* getIngredientsAndQuantities() const {return ingredientsAndQuantities;}

	// Methods
	const double calcCalories() const;
	const void print() const;
};

#endif // __DISH_H