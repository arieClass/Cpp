#ifndef __TABLE_H
#define __TABLE_H

class Table
{
public:
	static long idCounter;

private:
	long id;
	int maxNumOfGuests;
	bool isTaken;	

public:
	Table(int maxNumOfGuests = 0, bool isTaken = false){id = idCounter++;}

	// Setters
	void setIsTaken(bool isTaken) {this->isTaken = isTaken;}
};
long Table::idCounter = 0;

#endif