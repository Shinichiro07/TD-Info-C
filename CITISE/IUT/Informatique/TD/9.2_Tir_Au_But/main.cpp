#include<iostream>
#include"header.h"

using namespace std;

int main(){
    int randomInt, userInt, Team1, Team2;
    bool winner;

    Team1= 0;
    Team2= 0;
    winner= false;

    for (unsigned int i=0; winner == false; i++){
        randomInt= alea(1, 100);
        cout << "Entrer un entier: ";
        cin >> userInt;

        if ((randomInt % 2) == (userInt % 2)){
            if ((i % 2) == 1){
                Team1++;
            }
            else{
                Team2++;
            }
        }
        cout<< "Team 1: "<<Team1<<" buts\n";
        cout<< "Team 2: "<<Team2<<" buts\n";

        if ((Team1>5) && ((Team1 - Team2)>1)){
            winner= true;
            cout<<"Le gagnant est la Team 1\n";
            system("pause");
        }

        if ((Team2>5) && ((Team2 - Team1)>1)){
            winner= true;
            cout<<"Le gagnant est la Team 2\n";
            system("pause");
        }
    }

    return 0;
}