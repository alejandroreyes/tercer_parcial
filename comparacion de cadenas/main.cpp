#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//comparacion de cadenas
using namespace std;

char nombre[5][30];
void ingresocadenas(char nombre[5][30])
{
    for ( int i=0;i<5;i++)
    {
        cout<<"ingresar  el nommbre.....;";
        cin.getline(nombre[i],30);

    }
}

 void comparar(char nombre[5][30])
 {
     char cadcomp[30];
     cout<<"ingresar la cadena a comparar....";
     cin.getline(cadcomp,30);

      for ( int i=0;i<5;i++)
      {
          if(strncasecmp(nombre[i],cadcomp,strlen(cadcomp))==0)
          {
              cout<<"comparacion correcta con  "<<nombre[i]<<"\n";
          }
      }
 }

void comparar2(char nombre[5][30])
 {
     char cadcomp[30];
     cout<<"ingresar la cadena a comparar....";
     cin.getline(cadcomp,30);

      for ( int i=0;i<5;i++)
      {
          if(strcmp(nombre[i],cadcomp)==0)
          {
              cout<<"comparacion correcta con  "<<nombre[i]<<"\n";
          }
      }
 }


int main()
{ ingresocadenas(nombre);
    comparar(nombre);
 comparar2(nombre);
    return 0;
}
