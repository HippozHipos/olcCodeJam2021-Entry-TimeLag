#include "game.h"
#include "controller.h"

Game::Game() :
	player{ *playerCreator.CreateAndGet({250.0f, 550.0f}).get() }
{
}

void Game::Run(olc::PixelGameEngine* pge) noexcept
{
	player.DoSlimeAnimation(pge);
	player.RunController(pge);
}

void Game::Init(olc::Decal* spriteSheet)
{
	player.Init(spriteSheet);
}