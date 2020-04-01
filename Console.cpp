#include "Console.h"
#include <iostream>
#include <algorithm>

void Console::showMenu()
{
	std::cout << "1.Add Player\n";
	std::cout << "2.Modify Player\n";
	std::cout << "3.Remove Player\n";
	std::cout << "4.List All Players\n";
	std::cout << "5.List All Players that haven't won a game yet\n";
	std::cout << "6.List All Players by won games\n";
	std::cout << "0.Exit\n";
	std::cout << "Option: ";
}

void Console::handleInput()
{
	unsigned choice;
	std::cin >> choice;
	switch (choice)
	{
	case 0:
		this->isClosed = 1;
		break;
	case 1:
		this->handleAdd();
		break;
	case 2:
		this->handleModify();
		break;
	case 3:
		this->handleRemove();
		break;
	case 4:
		this->handleListAll();
		break;
	case 5:
		this->handleListLosers();
		break;
	case 6:
		this->handleShowDescWon();
		break;
	}
}

void Console::handleAdd()
{
	Player p = this->handleCreatePlayer();
	this->m_sev.addElement(p.getWonGames(), p.getPlayedGames(), p.getName());
	//TODO: Implement
}

void Console::handleModify()
{
	unsigned int pos = 0;
	std::cout << "\nPosition in the array: ";
	std::cin >> pos;
	Player p = this->handleCreatePlayer();
	this->m_sev.modifyElement(pos, p.getWonGames(), p.getPlayedGames(), p.getName());
	//TODO: Implement
}

void Console::handleListAll()
{
	Player* playerArray = m_sev.getArray();
	unsigned int arrSize = m_sev.getSize();
	for (unsigned int i = 0; i < arrSize; i++)
	{
		this->printPlayer(playerArray[i]);
		std::cout << "\n";
	}
}

void Console::handleRemove()
{
	unsigned int pos = 0;
	std::cout << "\nPosition in the array: ";
	m_sev.removeElementAtPos(pos);
}

void Console::handleShowDescWon()
{
	m_sev.sortArrayDescByWonGames();
	Player* playerArray = m_sev.getArray();
	unsigned int arrSize = m_sev.getSize();
	for (unsigned int i = 0; i < arrSize; i++)
	{
		std::cout << i << ". ";
		this->printPlayer(playerArray[i]);
		std::cout << "\n";
	}
}

void Console::handleListLosers()
{
	Player* playerArray = m_sev.getArray();
	unsigned int arrSize = m_sev.getSize();
	for (unsigned int i = 0; i < arrSize; i++)
	{
		if (!(playerArray[i].getWonGames()))
		{
			std::cout << i << ". ";
			this->printPlayer(playerArray[i]);
			std::cout << "\n";
		}
	}
}

Player Console::handleCreatePlayer()
{
	char buf[256];
	unsigned int noOfWins;
	unsigned int noOfGames;
	std::cout << "\nPlayer No. Of Winnings: ";
	std::cin >> noOfWins;
	std::cout << "\nPlayer No. Of Games: ";
	std::cin >> noOfGames;
	std::cout << "\nPlayer Name: ";
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cin.get(buf, 255);
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	return Player(noOfWins,0,buf);
}

void Console::printPlayer(Player& pl)
{
	std::cout <<"Name: "<<pl.getName()<<" Wins: "<< pl.getWonGames();
}

Console::Console()
{
	this->m_sev = Service();
	this->isClosed = false;
}

Console::~Console()
{
}

Console::Console(Service s)
{
	this->m_sev = s;
	this->isClosed = false;
}

void Console::run()
{
	while (!(this->isClosed))
	{

		showMenu();
		handleInput();
	}
}
