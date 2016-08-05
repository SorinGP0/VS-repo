#include "stdafx.h"
#include "bunnyClass.h"


int Bunny::bunnyCnt = 0;
Bunny::Bunny()
{		
	bnySex = static_cast<sex>(rand() % 2);
	bnyColor = static_cast<color>(rand() % 4);
	bunnyAge = 0;
	index = rand() % nameList.size();	
	bunnyName = nameList[index];
	bunnyRMVB = rand() % 2 == 1;
	bunnyCnt++;
}

Bunny::Bunny(sex theSex, color theColor,int theAge, std::string theName, bool theRMVB)
{
	this->bnySex = theSex;
	this->bnyColor = theColor;
	this->bunnyAge = 0;
	this->bunnyName = theName;
	this->bunnyRMVB = theRMVB;
	bunnyCnt++;
}

Bunny::~Bunny()
{
	bunnyCnt--;
}

void Bunny::print()
{
	std::cout << "bunnySex :" << bnySex << " " ;
	std::cout << "bunnyColor :" << bnyColor << " ";
	std::cout << "bunnyAge :" << bunnyAge << " ";
	std::cout << "bunnyName :" << bunnyName << " ";
	std::cout << "bunnyRMVB :" << bunnyRMVB << "\n";
}

int Bunny::getCount()
{
	return bunnyCnt;
}