#pragma once
#include <string>
#include <SDL2/SDL.h>
class Display
{
public:
	Display(int width, int height, const std::string& title);

	void Update();
	bool isClosed();
	void Clear(float r, float g, float b, float a);

	~Display();
private:
	SDL_Window* m_window;
	SDL_GLContext m_GLContext;
	bool m_isClosed;
};

