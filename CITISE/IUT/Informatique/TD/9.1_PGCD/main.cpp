#include<iostream>

#include"header.h"

using namespace std;

int main(){
    int a, b, res;

    cout<<"Entrer deux entiers: ";
    cin>>a>>b;
    res= PGCD(a, b);

    cout<<"Le PGCD entre "<<a<<" et "<<b<<" est "<<res<<"\n";
    system("pause");
    return 0;
}