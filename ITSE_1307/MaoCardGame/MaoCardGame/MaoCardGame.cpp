// MaoCardGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intCard = 46;
	int intFace = -1;
	int intSuite = -1;

	cout << "Please enter a card number between 1 and 52: ";
	cin >> intCard;

	intFace = 1 + ((intCard - 1) % 13);
	intSuite = (intCard - 1) / 13;

	cout << intFace << " of " << intSuite << endl;

    return 0;
}

