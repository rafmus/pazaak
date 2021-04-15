//
// Created by sylwia on 18.01.2020.
//

#ifndef UNTITLED_COMPUTERPLAYER_H
#define UNTITLED_COMPUTERPLAYER_H

#include "Player.h"
#include <cmath>

class ComputerPlayer:public Player {
    int sum_cards(int table[]);
    int compare(int table[]);
    int choose_card(int table[]);
public:
    ComputerPlayer();
     int play_a_card(int table[]);
    void change_state(int table[]);
};


#endif //UNTITLED_COMPUTERPLAYER_H
