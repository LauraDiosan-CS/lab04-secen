#include "Player.h"
#include <stdexcept>
#include <cstring>
Player::Player()
{
	m_wonGames = 0;
	m_playedGames = 0;
	m_name = new char[2];
	strcpy_s(m_name, 2, "a");
}

Player::~Player()
{
	if (m_name != nullptr)
		delete[] m_name;
}

Player::Player(const Player& copy)
{
	this->m_wonGames = copy.m_wonGames;
	this->m_playedGames = copy.m_playedGames;
	char* aux = new char[strlen(copy.m_name) + 1];
	strcpy_s(aux, strlen(copy.m_name)+1,copy.m_name);
	this->m_name = aux;
	/*
	if (this->m_name == nullptr)
		m_name = new char[strlen(copy.m_name) + 1];
	if (strlen(m_name) < strlen(copy.m_name))
	{
		delete[] m_name;
		m_name = new char[strlen(copy.m_name)+1];
	}
	if (copy.m_name != nullptr)
		strcpy_s(m_name, strlen(copy.m_name) + 1, copy.m_name);
	else
		this->m_name = nullptr;*/
}

Player::Player(unsigned int day, unsigned int plyGames,const char* name)
{
	m_wonGames = day;
	m_playedGames = plyGames;
	m_name = new char[strlen(name)+1];
	strcpy_s(m_name, strlen(name)+1,name);
}

Player& Player::operator=(const Player& exp)
{
	m_wonGames = exp.m_wonGames;
	m_playedGames = exp.m_playedGames;
	if (strlen(m_name) < strlen(exp.m_name))
	{
		delete[] m_name;
		m_name = new char[strlen(exp.m_name)+1];
	}
	strcpy_s(m_name, strlen(exp.m_name)+1,exp.m_name);
	return *this;
}

bool Player::operator==(const Player& exp)
{
	if (m_wonGames != exp.m_wonGames)
		return false;
	if (m_playedGames != exp.m_playedGames)
		return false;
	if (strcmp(m_name,exp.m_name))
		return false;
	return true;
}

bool Player::operator!=(const Player& exp)
{

	return !(*this==exp);
}

unsigned int Player::getWonGames()
{
	return this->m_wonGames;
}

unsigned int Player::getPlayedGames()
{
	return this->m_playedGames;
}

char* Player::getName()
{
	return m_name;
}

