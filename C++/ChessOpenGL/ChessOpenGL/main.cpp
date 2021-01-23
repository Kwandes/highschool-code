#include "display.h"
#include <GL/glew.h>
#include <SDL2/SDL.h>

#include <iostream>
#include "piece.h"
#include "king.h"


int main(int argc, char* argv[])
{


	King *king = new King("white");
	Piece *piece = new Piece();
	king->GetAllInfo();
	piece -> GetAllInfo();
	std::cout << "Hello world!" << std::endl;

	
	//UnCommment this once you have decent GPU
	/*Display display(800, 600, "Hello World!");
	
	while(!display.isClosed())
	{
		display.Clear(0.1f, 0.15f, 0.3f, 0.5f);
		
		display.Update();
	}

	std::getchar();*/
	
	
	std::getchar();
	return 0;
}