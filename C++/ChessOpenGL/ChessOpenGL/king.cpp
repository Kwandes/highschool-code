#include "king.h"
#include <string>



King::King(std::string color)
{
	m_color = color;
	m_type = "king";
	m_movement = "whatever but 1";
}


King::~King()
{
}
