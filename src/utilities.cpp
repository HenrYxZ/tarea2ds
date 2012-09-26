#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include "includes.h"
using namespace std;

int cmp(string str1,string str2)
{
const char * c1 = str1.c_str();
const char * c2 = str2.c_str();
return strcasecmp(c1,c2); 
}

int randomP()//funcion entrega valores random entre 0 y 99
{  
    int random = rand() % 100;
    return random;
}
