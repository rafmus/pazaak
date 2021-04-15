//
// Created by sylwia on 16.12.2019.
//

#ifndef UNTITLED_DECK_H
#define UNTITLED_DECK_H

#include <ctime>

class Deck {

    int MainDeck[40]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10};
    int SideDeck[10];
    int GameDeck[4];


public:
    Deck(bool HumanPlayer);
    void fill_SideDeck(bool HumanPlayer);
    void fill_GameDeck();
    int Draw_To_Player();
    int return_GameDeck(int i);
};


#endif //UNTITLED_DECK_H
