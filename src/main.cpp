#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "includes.h" //---> en este archivo se declaran las cabeceras de las funnciones externas
#include "redblacktree.h"
#include "avlabb.h"
#include "abb.h"


using namespace std;

int str2int (const string &str) {
  stringstream ss(str);
  int num;
  ss >> num;
  return num;
}

int main(int argc, char *argv[])
{
    srand ( time(NULL) );//se inicializa la semilla de funcion rand()
    
    /*
   ABB* t = new AVLABB();
=======


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
    
    
    
    int op;
    cout << "(1) Parte A" << endl;
    cout << "(2) Parte B" << endl;
    cout << "(0) Salir" << endl;
    cin >> op;
    
    if(op == 1)
     {
            system("cls");
           //programa A
           cout << "Ingrese archivo de entrada" << endl;
           string dir;  
           cin >>  dir;
           
           cout << "Ingrese ruta del archivo: " << endl;
           string salida;
           cin >> salida;
        
           // Datos necesarios
           const char* c = dir.c_str();
        
           ifstream file( c );
           
           const char* d = salida.c_str();
           
           ofstream fileout( d );
           string str;
           
           ABB* rb = new RedBlackTree();
           ABB* avl = new AVLABB();
          
           
           //Empieza a leer
        while( getline( file, str ) )
        {
            
            string s;
            istringstream iss(str,istringstream::in);
            getline( iss, s, ' ' );
            string accion = s;    
            getline( iss, s, ' ' );
            string clave = s;
            getline( iss, s, ' ' );
            int prior = str2int(s);
            
            if(accion == "insert")
            {
                      rb->insert(clave,0);
                      avl->insert(clave,0);
                      //aqui cambialo seba, le pones la prioridad
                      
            }
            
            if(accion == "delete")
            {
                      rb->remove(clave);
                      avl->remove(clave);
                      
            }
        
        } //fin de while        
        
        //imprimir los arboles
        
        delete rb;
        delete avl;
        
      system("PAUSE");
      }//fin de opcion 1
      
      if(op == 2)
      {
      system("cls");
           //programa B
      system("PAUSE");
      }
      
      if(op == 0)
      {
       exit (0);
        system("PAUSE");
       }
      
      else
      {
           system("cls");
           cout << "Elija una opcion valida" << endl;        
      system("PAUSE");
      }      
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
