#pragma once
#include <unordered_map>
#include <string>
class Player
{
private:
	unsigned int m_wonGames;
	unsigned int m_playedGames;
	char* m_name;
public:
	//essential
	Player();
	~Player();
	Player(const Player& copy);
	Player(unsigned int wonGames, unsigned int plyGames, const char* name);
	Player& operator = (const Player& exp);
	//non-essential
	bool operator == (const Player& exp);
	bool operator != (const Player& exp);
	unsigned int getWonGames();
	unsigned int getPlayedGames();
	char* getName();
};

