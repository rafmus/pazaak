//
// Created by sylwia on 18.01.2020.
//

#include <iostream>
#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer() :Player(false){
    pstate=IN_GAME;
};

int ComputerPlayer::play_a_card(int table[]) {

    return choose_card(table);

}


int ComputerPlayer::sum_cards(int table[]) {

    int p_table[9];
    for(int j=0; j<9;j++)
    {
    p_table[j]=table[j];
    }
    int sum=0;
    for(int i=0;i<9; i++)
    {
        sum=sum+p_table[i];
    }
    return sum;
}

int ComputerPlayer::compare(int table[]) {

    int sum=sum_cards(table);
    int differce=20-sum;
    return differce;
}

int ComputerPlayer::choose_card(int table[]) {
    int diff = compare(table);
    std::cout<<diff;
    int gd;
    int card = 0;
    for (int i = 0; i < 4; i++) {
        gd = get_deck().return_GameDeck(i);
        std::cout<<gd<<"   ";
        if (diff == gd) {
            return gd;
        } else if (diff > gd and abs((diff - card)) > abs((diff - gd)) and diff > abs((diff - gd))) {
            card = gd;
        }
    }
    return card;
}

void ComputerPlayer::change_state(int table[])
{
        int diff=compare(table);
        if(diff<2 and diff>0)
        {
            pstate=FOLD;
            std::cout<<"Pasuje";
        }

}