#pragma once

#include <PVEngine/Window.h>
#include <PVEngine/PlanetVulkan.h>

class TesterGame
{
public:
	TesterGame();
	~TesterGame();

	void Run();

private:
	void InitSystems();
	
	void GameLoop();

	//Member variables
	PVEngine::Window m_window;
	PVEngine::PlanetVulkan m_engine;
};

