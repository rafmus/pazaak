//
// Created by sylwia on 16.12.2019.
//

#ifndef UNTITLED_PAZAAKLOGIC_H
#define UNTITLED_PAZAAKLOGIC_H


#include "Player.h"
#include "Deck.h"
#include "ComputerPlayer.h"
enum GameState { RUNNING, PLAYER1_WIN, PLAYER2_WIN, DRAW };

class PazaakLogic {
    int Player1_Table[9]={0,0,0,0,0,0,0,0,0};
    int Player2_Table[9]={0,0,0,0,0,0,0,0,0};
    Player &player1;
    Player &player2;
    GameState gstate;

public:
    PazaakLogic(Player &player1, Player &player2);
    void play();
    static int counter(int tab[]);
    void compare(int suma1, int suma2);

    static void Move(Player &player, int &i, int &suma1, int player_table[9]);
};



#endif //UNTITLED_PAZAAKLOGIC_H
