#pragma once
class Cheltuiala
{
private:
	int value;
public:
	Cheltuiala();
	Cheltuiala(int val);
	~Cheltuiala();
	bool operator == (Cheltuiala const& obj);
	Cheltuiala& operator =(Cheltuiala const& other);
	Cheltuiala(const Cheltuiala& copy);

};