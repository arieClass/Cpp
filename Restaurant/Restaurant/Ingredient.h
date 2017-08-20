#ifndef __INGREDIENT_H
#define __INGREDIENT_H

class Ingredient
{
public:
	const static int MAX_NAME_LENGTH = 20;
private:
	char name[MAX_NAME_LENGTH];
	int price;
	double caloricValue; 
public:
	Ingredient(char* name, int price, double caloricValue);
	~Ingredient();

	// Getters
	const char* getName() const {return name;}
	const int getPrice() const {return price;}
	const double getCaloricValue() const {return caloricValue;}
};

#endif // __INGREDIENT_H