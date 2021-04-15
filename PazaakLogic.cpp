//
// Created by sylwia on 16.12.2019.
//

#include<iostream>
#include "PazaakLogic.h"

using namespace std;

PazaakLogic::PazaakLogic(Player &player1, Player &player2) : player1(player1), player2(player2){
   gstate=RUNNING;
}

void PazaakLogic:: play(){
    int i=0;
    int j=0;
    int player_number=1;
    int suma1;
    int suma2;
    while(gstate==RUNNING)
    {
       if(player_number%2!=0 and player1.get_player_state()== IN_GAME)
       {

            cout<<"Tura gracza 1"<<endl;
           Move(player1, i, suma1, Player1_Table);

           if (suma1>20)
            {
                cout<<"Wygrywa gracz 2!";
                gstate=PLAYER2_WIN;
            }
        }

        if(player_number%2==0 and player2.get_player_state()==IN_GAME)
        {
            cout<<"Tura gracza 2"<<endl;
           Move(player2, j, suma2, Player2_Table);
            if (suma2>20)
            {
                cout<<"Wygrywa gracz 1!";
                gstate=PLAYER1_WIN;
            }
        }

        if (player1.get_player_state() == FOLD and player2.get_player_state() ==FOLD)
        {
            compare(suma1, suma2);
        }
        ++j;
        ++i;
        ++player_number;
    }

}

void PazaakLogic::Move(Player &player, int &i, int &suma1, int player_table[9]) {
    if (player_table[i - 1] == 0 and i != 0){--i;}
    player_table[i] = player.get_deck().Draw_To_Player();
    for (int z = 0; z < 9; z++)
        cout << player_table[z] << " ";

    cout << endl;

    player_table[i + 1] =   player.play_a_card(player_table);
    player.change_state(player_table);

    suma1= counter(player_table);
}

int PazaakLogic :: counter (int tab[]){
    int wynik=0;
    for(int i=0;i<9;i++)
    {
        wynik+=tab[i];
    }
    return wynik;
}

void PazaakLogic::compare(int suma1, int suma2)
{
    int wynik1;
    int wynik2;

    wynik1=20 - suma1;
    wynik2=20 - suma2;

    if (wynik1<wynik2)
    {
        cout<<"Wygrywa gracz 1!";
        gstate=PLAYER1_WIN;
    }
    else if(wynik2<wynik1)
    {
        cout<<"Wygrywa gracz 2!";
        gstate=PLAYER2_WIN;
    }
    else if(wynik1==0 and wynik2!=0)
    {
        cout<<"Wygrywa gracz 1!";
        gstate=PLAYER1_WIN;
    }
    else if(wynik2==0 and wynik1!=0)
    {
        cout<<"Wygrywa gracz 2!";
        gstate=PLAYER2_WIN;
    }
    else if(wynik1==wynik2)
    {
        cout<<"Remis!";
        gstate=DRAW; //remis
    }
}

