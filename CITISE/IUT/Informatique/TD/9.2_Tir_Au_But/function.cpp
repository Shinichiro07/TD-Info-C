#include<iostream>
#include<time.h>
#include<stdlib.h>

#include"header.h"

using namespace std;

int alea(int m, int n){
    unsigned int alea;
    
    srand(time(NULL));
    alea=(rand() % (n-m+1))+m;

    return alea;
}