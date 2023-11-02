#include<iostream>
#include"header.h"

using namespace std;

int main(){
    int a, p;
    float res;

    cout<<"Entrer 2 entiers positifs: ";
    cin>>a>>p;

    res= racine_carree(a, p);
    cout<<"La racine carree de "<<a<<" est "<<res<<"\n";
    system("pause");

    return 0;
}