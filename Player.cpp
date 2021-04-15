//
// Created by sylwia on 16.12.2019.
//

#include "Player.h"
#include "Deck.h"
#include <iostream>

using namespace std;

Player::Player(bool HumanPlayer): deck(HumanPlayer){};


int Player::play_a_card(int table[]) {
    int a;
    cout << "Wybierz kartę lub skończ turę: " << endl;

    for (int k = 0; k < 4; k++)
    {
        cout << k + 1 << ". " << deck.return_GameDeck(k) << endl;
    }
    cout << "5. Skończ turę" << endl;

    cin >> a;
    if (a == 5)
    {
        return 0;
    }

    else
        {
            int player_card = deck.return_GameDeck(a - 1);
            return player_card;
        }
}

PlayerState Player::get_player_state() const
{
    return pstate;
}
void Player::change_state(int table[]) {
    int a;
    cout<<"1. Pasuję"<<endl<<"2. Gram dalej";
    cin>>a;
    if(a==1)
    {pstate=FOLD;}
    else
    {
        pstate=IN_GAME;
    }
}

Deck Player::get_deck() {

    return deck;
}