// BunnyColony.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bunnyClass.h"
#include <time.h>

int main()
{	
	srand((unsigned)time(NULL)); // seed based on time required for randomness
	Bunny bunny[5];
	Bunny secondBunny(male, black, 0, "jean", false);

	for (int i = 0; i <= 4; i++)
	{ 
		bunny[i].print();
		std::cout<< "count: " << bunny[i].getCount();
	}

	std::cout << "\n";
	secondBunny.print();
	
	return 0;
}

