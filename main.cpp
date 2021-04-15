#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Deck.h"
#include "PazaakLogic.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
using namespace std;


int main() {
    srand( time( NULL ) );
 

       cout << "Gracz 1: " << endl;
       HumanPlayer gracz1;
       cout << "Gracz 2: " << endl;
       ComputerPlayer gracz2;
       PazaakLogic pazaak(gracz1, gracz2);


    pazaak.play();

    return 0;
}