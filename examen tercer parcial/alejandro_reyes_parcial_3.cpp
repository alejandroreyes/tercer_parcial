#include <iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int nvocales;
char cadena1[30];
char cadena2[30];
const int n=4;
char cadena[n][30];
char revez[n][30];

void ingreso (char cadena[n][30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"Ingresar nombre.....:";
        cin.getline(cadena[i],30);
        _flushall();
    }
}


void alrevez (char cadena1[], char cadena2[])
{
    int largo=strlen(cadena1);
    int i=largo-1;
    int c=0;

    for (i=largo-1;i>=0;i--)
    {
        cadena2[c]=cadena1[i];
        c++;
    }
}


 int contarvocales(char cadena[])
  {        int i,cvocales,nl;
          nl=strlen(cadena);
          cvocales=0;
          for( i=0;i<nl;i++)
          {    switch (cadena[i])
                  {
                      case 'a':
                      case 'A':
                      case 'e':
                      case 'E':
                      case 'o':
                      case 'O':
                      case 'I':
                      case 'i':
                      case 'u':
                      case 'U':

                        break;
                      default :
                          cvocales++;
                        break;
                  }
          }
          return cvocales;
  }


void calcular(char cadena[n][30], char revez[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {
        alrevez(cadena[i],revez[i]);
        nvocales=contarvocales(cadena[i]);
    }
}





void presentar (char revez[n] [30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"La cadena alrevez es....["<<i<<"]...:"<<revez[i]<<"   y tiene un numero de vocales de...:"<<nvocales<<"\n";

    }
}
int main()
{
ingreso(cadena);
alrevez(cadena1,cadena2);
calcular(cadena,revez);
presentar(revez);

    return 0;
}

