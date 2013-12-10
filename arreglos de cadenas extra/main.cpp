#include <iostream>
#include<string>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
ingresar 5 cadenas de tipo char a un arreglo usando procedimiento luego  elaborar una funcion
que cuente  cuantas consonantes  tiene  cada uno de los nombres elaborar un procedimiento
para agregar al final de la cadena  un  *
presentar la cadena modificada con el * y ala par el numero de consonantes que tiene

*/

const int n=5;
int consonante[n];
char cadena[n][30];



void ingreso(char cadena[n][30])
{ int i;
    for(i=0;i<n;i++)
    {
        cout<<" ingresar  la cadena["<<i<<"]...";
        cin.getline(cadena[i],30);
      _flushall();
    }
}


void cambiar(char cadena[n][30])
{
    int i;
    int fin;
     for(i=0;i<n;i++)
     {
         fin=strlen(cadena[i]);
         cadena[i][fin]='*';

     }
}

void presentar(char cadena[n][30],int consonante[])
{ int i;
  for(i=0;i<n;i++)
  {
      cout<<"cadena ["<<i<<"]..."<<cadena[i]<<"tiene "<<consonante[i]<<" consonantes "<<"\n";
  }

}


void presentarmayor(char cadena[n][30],int consonante[])
{ int i,pos,mayor;
mayor=0;
  for(i=0;i<n;i++)
  {
      if(mayor<consonante[i])
      {
          mayor=consonante[i];
          pos=i;
      }
  }
  cout<<"mayor es "<<cadena[pos]<<"con  "<<mayor<<"\n";
}

int contar(char cadena[])
{
    int i,consonantes,nl;

      nl=strlen(cadena);
      consonantes=0;
       for (i=0;i<nl;i++)

       {  switch(cadena[i])

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

               break;
               default: consonantes++;

                break;
           }


       }
       return consonantes;
    }

void contarconsonantes(char cadena[n][30],int consonante[])
{
    int i;
    for(i=0;i<n;i++)
    {
        consonante[i]=contar(cadena[i]);
    }

}


int main()
{
  ingreso(cadena);
  cambiar(cadena);
  presentar(cadena,consonante);
  contarconsonantes(cadena,consonante);

    return 0;
}
