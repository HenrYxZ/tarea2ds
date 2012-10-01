#include <cstdlib>
#include <iostream>
#include <string>
#include "includes.h" //---> en este archivo se declaran las cabeceras de las funnciones externas
#include "treap.h"
using namespace std;

int main(int argc, char *argv[])
{
    srand ( time(NULL) );//se inicializa la semilla de funcion rand()
    

    Treap t= Treap();
    
    //cout<<"a insertado"<<endl;
    
    //t.insert("b",2);
    
    //t.insert("d",4);
    //t.insert("c",3);
    //t.insert("a",5);
    t.insert("d",4);
    t.insert("a",1);
    t.insert("c",3);
    t.insert("b",2);
    
    
    cout<<t.find("a")<<endl;
    cout<<t.find("b")<<endl;
    cout<<t.find("c")<<endl;
    cout<<t.find("d")<<endl;/*
    t.remove("b");
    t.remove("d");
    cout<<" remove b,d"<<endl;
    cout<<t.find("a")<<endl;
    //cout<<t.find("b")<<endl;
    cout<<t.find("c")<<endl;
    //cout<<t.find("d")<<endl;
    */
    //t.sortedDump();
    system("PAUSE");
    return EXIT_SUCCESS;
}
