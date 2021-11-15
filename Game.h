// Game.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <vector>
#include <array>
#include "Player.h"

class Game
{
private:
	//inputs
	void ClearInput();
	int GetInput();

	//messages
	void Congratulate(Player& player);
	void FinalRound(Player& player);
	void ShowKeptDice(array<int, 6>& keptDice);
	void ShowRolls(vector<int>& dicePool);
	void WelcomePlayers(vector<Player>& players);

	//setup
	void PromptNumPlayers();
	void SetupPlayers(vector<Player>& players);

	//play
	array<int, 6> CountDice(vector<int>& dicePool);
	bool CheckFor10k(int score);
	bool IsValid(unsigned int& selection, vector<int>& dicePool);
	bool ScoringDice(array<int, 6>& diceCount);
	int ScoreDice(vector<int>& dicePool, int die, array<int, 6>& diceCount, array<int, 6>& keptDice);
	void RollDice(vector<int>& dicePool);
	Player GetWinner(vector<Player> players);

	//private loops
	int Turn(Player& player);
	Player Play();

public:
	void GameLoop();
};

// TODO: Reference additional headers your program requires here.
