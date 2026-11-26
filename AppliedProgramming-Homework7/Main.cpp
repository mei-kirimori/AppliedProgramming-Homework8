#include "Compile.h"
#include <iostream>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));//いつもの
	int playersCount = 3;
	Player* players = new Player[playersCount];
	Dealer dealer;
	Shoe shoe;
	Game game;
	cout << "please enter the number of times you would like to play" << endl;
	int playvalue;
	cin >> playvalue;
	shoe.SetCardDeck();//最初のシャッフル
	for (int i = 0; i < playvalue; i++)
	{
		for (int j =0;playersCount > j;++j)
		{
			game.gameStart(shoe, dealer, players[j]);
		}
	}
	delete[] players;
	//ここのcoutとかは前回の課題からそのまま引っ張てきた
}	