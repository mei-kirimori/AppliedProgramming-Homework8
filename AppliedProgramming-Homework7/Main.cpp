#include "Compile.h"
#include <iostream>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));//いつもの
	int playersCount = 1;
	cout << "How many people will be playing?" << endl;
	cin >> playersCount;
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
		cout << "//////////"<< endl << i + 1 << "games" << endl << "//////////" << endl;
		for (int j =0;playersCount > j;++j)
		{
			cout << j+1 << "th players game" << endl;
			game.gameStart(shoe, dealer, players[j]);
		}
	}
	delete[] players;
	//ここのcoutとかは前回の課題からそのまま引っ張てきた
}	