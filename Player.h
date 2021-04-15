//
// Created by sylwia on 16.12.2019.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H

#include "Deck.h"


enum PlayerState {IN_GAME, FOLD};
class Player {
    Deck deck;

public:
    PlayerState pstate;
    Player(bool HumanPlayer=true);

    virtual int play_a_card(int table[]);
    PlayerState get_player_state() const;
    virtual void change_state(int table[]);
    Deck get_deck();
};



#endif //UNTITLED_PLAYER_H
