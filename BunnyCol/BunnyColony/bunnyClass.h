#pragma once
#ifndef  BUNNY_H_
#define BUNNY_H_
#include <string>
#include <iostream>
#include <vector>


enum sex {
	male, female
};

enum color {
	white, brown, black, spotted
};

const std::vector<std::string> nameList = { "Jay","Anne","Ion", "Ghita", "Marie", "Nicolae",
																					"Vasile", "Gheorghe", "Andreea", "Ana", "Nicoleta",};

class Bunny
{

public:	
	Bunny();	
	Bunny(sex theSex, color theColor, int theAge, std::string theName, bool theRMVB);
	~Bunny();
	
	void print();	
	int getCount();

private:
	sex bnySex;
	color bnyColor;
	int bunnyAge, index;
	std::string bunnyName;
	bool bunnyRMVB;
	static int bunnyCnt;
};



#endif // ! BUNNY_H_
