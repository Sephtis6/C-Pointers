// C++ Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
//declare the functions to be used
string askText(string prompt);
void badSwap(int x, int y);
void goodSwap(int*const px, int*const py);
void originalRanking(float x, float y);
void newRanking(float*const px, float*const py);

int main()
{
	//get the players name
	string userName = "";
	//set and display original values
	//closer to 1 the better the ranking
	float myRanking = 1000;
	float oponentRanking = 900;
	//set and display original values for scores
	int myScore = 500;
	int yourScore = 1000;
	cout << "Original Values\n";
	cout << "My Score: " << myScore << "\n";
	cout << "Your Score: " << yourScore << "\n";

	//get the players name
	userName = askText("Please enter your name: ");

	//write out they story
	//displays what the program is meant to do and a little explanation of the reason why
	//that fits the backstory
	cout << "This program isthe result of an opponent of yours resulting to cheating.\n";
	cout << "This resulted in the Game Manager making the player score values swap and declare the game is over.\n";
	cout << "This results in the opponent leaving due to trying to claim it is unfair that he was made the loser.\n";	
	cout << "This also results in " << userName << " gaining the opponents previous rank.\n";
	cout << "You learn a few days later that he continued cheatinbg and got permanently banned from the game site.\n";

	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	cout << "My Score: " << myScore << "\n";
	cout << "Your Score: " << yourScore << "\n";

	cout << "Calling goodSwap()\n";
	goodSwap(&myScore, &yourScore);
	cout << "My Score: " << myScore << "\n";
	cout << "Your Score: " << yourScore << "\n";

	cout << "Calling Original Rankings()\n";
	originalRanking(myRanking, oponentRanking);
	cout << "My Rank: " << myRanking << "\n";
	cout << "Opponent Rank: " << oponentRanking << "\n";

	cout << "Calling New Rankings()\n";
	newRanking(&myRanking, &oponentRanking);
	cout << "My Rank: " << myRanking << "\n";
	cout << "Opponent Rank: " << oponentRanking << "\n";

	system("Pause");

	return 0;
}

//void doing the badswap function
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

//void doing the goodswap function
void goodSwap(int*const px, int*const py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

//void doing the badswap function
void originalRanking(float x, float y)
{
	float temp = x;
	x = y;
	y = temp;
}

//void doing the goodswap function
void newRanking(float*const px, float*const py)
{
	float temp = *px;
	*px = *py;
	*py = temp;
}

//get the players name
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}