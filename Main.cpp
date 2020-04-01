// OOPLab4-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Axinte Gabriel
//1. sa se determine toti jucatorii care nu au castigat nici un joc
//2. sa se sorteze descrescator jucatorii dupa nr de jocuri jucate (topul jucatorilor)
#include <iostream>
#include "Tests.h"
#include "Console.h"
#include "Service.h"
#include "Repo.h"

int main()
{
	const bool ENABLETESTS = false;
	if (ENABLETESTS)
	{
		std::cout << "Starting tests\n";
		tests();
		std::cout << "Finished tests\n";
	}
	Repo rep = Repo();
	Service serv = Service(rep);
	Console cons = Console(serv);
	cons.run();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
