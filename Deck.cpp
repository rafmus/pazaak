//
// Created by sylwia on 16.12.2019.
//

#include "Deck.h"
#include <iostream>

using namespace std;

Deck::Deck(bool HumanPlayer)
{
    fill_SideDeck(HumanPlayer);
    fill_GameDeck();
}

void Deck::fill_SideDeck(bool HumanPlayer)
{
    if(HumanPlayer) {
        int card;
        for (int i = 0; i < 10; i++) {
            cout << "Wybierz " << i + 1 << ". karte z przedziału -6 do 6(za wyjątkiem 0)" << endl;
            cin >> card;
            if (card >= -6 and card <= 6 and card != 0) {
                SideDeck[i] = card;
            } else {
                cout << "Wybrałeś kartę z poza przedziału, wybierz ponownie" << endl;
                i--;
            }
        }
    }
    else
    { int sd;
        for (int i=0; i<9; i++)
        {
            sd=(rand() % 13) -6;
            if(sd<6 and sd>-6 and sd!=0)
            {
                SideDeck[i]=sd;
            }
            else
            {
                i--;
            }
        }
    }
}

void Deck::fill_GameDeck()
{
    for (int j = 0; j < 4; j++)
    {
        int losuj = rand() % 4 + 1;
        GameDeck[j] = SideDeck[losuj - 1];
    }
}

int Deck::Draw_To_Player()
{
    int draw = rand()%40+1;
    int card = MainDeck[draw-1];
    return card;
};

int Deck::return_GameDeck(int i)
{
    return GameDeck[i];
};
