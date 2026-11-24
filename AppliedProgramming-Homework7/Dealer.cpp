#include "Dealer.h"
#include <iostream>
using namespace std;

Dealer::Dealer()//ただのデフォルトコンストラクタ
{
	name = "Dealer";
}

void Dealer::Hit(Shoe& shoe)
{
	int tmp = shoe.TakeCard();
	int tmp2 = shoe.TakeCard();
	if ((tmp % 13) > (tmp2 % 13))
	{
		Card = static_cast<CardValue>((tmp % 13) + 1); //カードの値をCardValueに変換
		Suit = static_cast<CardSuit>(tmp / 13); //カードのスートをCardSuitに変換
	}
	else
	{
		Card = static_cast<CardValue>((tmp2 % 13) + 1); //カードの値をCardValueに変換
		Suit = static_cast<CardSuit>(tmp2 / 13); //カードのスートをCardSuitに変換
	}
}