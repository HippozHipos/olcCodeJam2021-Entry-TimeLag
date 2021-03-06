#pragma once

class State
{
public:
	enum class States
	{
		MENU, PLAY, ABOUTPAGE, INTRO
	};

	static const States& GetCurrentState() noexcept;
	static void SetCurrentState(States current) noexcept;

private:
	static States current;
};
