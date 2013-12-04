
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
ingresar 5 nombres a un arrglo,
luego sustituir  todas sus vocales por letras X
*/

const int n=5;
 int consonante[n];
char cadena[n][30];

//elaborar una funcion para presentar cuantas consonantes tienen cada una de las palabras
//del arreglo de cadena.
//ejemplo rommel  tiene 4 consonantes


void ingreso(char cadena[n][30])
{ int i;
    for(i=0;i<n;i++)
    {
        cout<<" ingresar  la cadena["<<i<<"]...";
        cin.getline(cadena[i],30);
    }
}

void cambiar (char cadena[n][30])
{
    int i,l,nl;
    for(i=0;i<n;i++)
    { nl=strlen(cadena[i]);

       for (l=0;l<nl;l++)
       {
           switch(cadena[i][l])
           {
               case 'A':
               case 'a':
               case 'E':
               case 'e':
               case 'I':
               case 'i':
               case 'O':
               case 'o':
               case 'U':
               case 'u':
               cadena[i][l]='X';
               break;
               default:
                break;
           }


       }
    }
}

void precentar (char cadena[n][30])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"cadena "<<cadena[i]<<"\n";

    }
}

int main()
{
 //cout<<" ingresar una cadena.....;";
 //cin.getline(cadena[i],30);
 //cadena[0]='X';
 //cout<<cadena<<"\n";


 ingreso(cadena);
 cambiar(cadena);
 precentar(cadena);

    return 0;
}
