#include "Participant.h"
#include"Common.h"
#include"Shoe.h"
#include <iostream>
using namespace std;

void Participant::ShowCard(const Participant& card)const//残骸、ホントはこれでカード表示する気でいたがgame.cppのShowCardでやった方が個人的に納まりがよかった
{
	
}



CardValue Participant::GetCardValue()const
{
	return Card;
}
CardSuit Participant::GetCardSuit()const
{
	return Suit;
}