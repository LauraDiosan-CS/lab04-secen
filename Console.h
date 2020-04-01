#pragma once
#include "Service.h"
#include "Player.h"
class Console
{
private:
	Service m_sev;
	bool isClosed;
	void showMenu();
	void handleInput();
	void handleAdd();
	void handleModify();
	void handleListAll();
	void handleRemove();
	void handleShowDescWon();
	void handleListLosers();
	Player handleCreatePlayer();
	void printPlayer(Player &pl);
public:
	Console();
	~Console();
	Console(Service s);
	void run();
};

