#include <iostream>
#include <SDL.h>
#undef main

int main() {
	auto const W = 1280;
	auto const H = 720;

	std::cout << "WOOF" << std::endl;

	SDL_Window* window = SDL_CreateWindow("DOTA 2.1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, W, H, SDL_WINDOW_SHOWN);

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 254, 255, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(10000);

	return 0;
}