#pragma once

#include "Common.h"
#include "Shoe.h"
class Participant
{
public:
	const char* name;
	void ShowCard(const Participant& card)const;
	virtual void Hit(Shoe& shoe) = 0;
	CardValue GetCardValue()const;
	CardSuit GetCardSuit()const;
protected:
	CardValue Card;
	CardSuit Suit;

};

