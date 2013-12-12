#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ingresar  5 nombres  a un arrglo de cadenas  y que la devuelva al reves en otro arrglo.*/

using namespace std;

const int n=4;
char cadena[n][30];
char revez[n][30];





void ingreso (char cadena[n][30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"Ingresar palabra o un nombre......:";
        cin.getline(cadena[i],30);
        _flushall();
    }
}

void nombrealrevez (char cadena1[], char cadena2[])
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

void todacadena(char cadena[n][30], char revez[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {
        nombrealrevez(cadena[i],revez[i]);
    }
}


void presentar (char revez[n] [30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"La cadena alrevez es....["<<i<<"]...:"<<revez[i]<<"\n";

    }
}



int main()
{
    ingreso(cadena);
    todacadena(cadena,revez);
    cout <<"\n";
    presentar(revez);
    return 0;
}

