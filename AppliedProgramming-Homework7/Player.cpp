#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(const char* name)//いつもの引数つきコンストラクタ
{
	if (name != nullptr)
	{
		this->name = name;
	}
	else
	{
		this->name = "unknown";
	}
}
void Player::Hit(Shoe& shoe)
{
	int tmp = shoe.TakeCard();
	Card = static_cast<CardValue>((tmp % 13) + 1); //カードの値をCardValueに変換
	Suit = static_cast<CardSuit>(tmp / 13); //カードのスートをCardSuitに変換
}
