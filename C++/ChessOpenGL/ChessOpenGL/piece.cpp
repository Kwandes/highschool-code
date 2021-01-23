#include "piece.h"
#include <iostream>


Piece::Piece(std::string type, std::string color, std::string movement)
{
	std::cout << "Constructing a piece" << std::endl;

	m_type = type;
	m_color = color;
	m_movement = movement;
}
Piece::Piece()
{
	m_type = "no type";
	m_color = "rainbow";
	m_movement = "stuck";
}

void Piece::GetType()
{
	std::cout << "Type: " << m_type << std::endl;
}
void Piece::GetColor()
{
	std::cout << "Colour: " << m_color << std::endl;
}
void Piece::GetMovement()
{
	std::cout << "Movement: " << m_movement << std::endl;
}
void Piece::GetAllInfo()
{
	std::cout << "Type: " << m_type << std::endl;
	std::cout << "Colour: " << m_color << std::endl;
	std::cout << "Movement: " << m_movement << std::endl;
}


Piece::~Piece()
{
}
