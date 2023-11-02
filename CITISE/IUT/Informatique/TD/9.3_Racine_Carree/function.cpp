#include<iostream>
#include"header.h"

using namespace std;

float racine_carree(int a, int p){
    float u;
    u=1.0;

    for (unsigned int i; i<p; i++){
        u=((u+(a/u))/2);
    }
    return u;
}