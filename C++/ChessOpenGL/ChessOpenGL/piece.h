#pragma once
#include <string>

class Piece
{
public:

	void GetType();
	void GetColor();
	void GetMovement();
	void GetAllInfo();
	
	Piece();
	Piece(std::string type, std::string color, std::string movement);
	~Piece();
protected:
	std::string m_type;
	std::string m_color;
	std::string m_movement;
};

