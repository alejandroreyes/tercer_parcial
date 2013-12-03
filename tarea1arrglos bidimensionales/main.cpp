#include <iostream>
#include <stdlib.h>
using namespace std;

/*
se tienen 3 colunas con 6 lineas, se necesita  dejar la ultima linea para el promedio de
cada una de las columnas, elaborar el ingreso promedio de columnas, y presentar arreglo completo.
*/



const int lin=6;
const int col=3;

int num[lin][col];

void ingreso(int num[lin][col])
{
    for( int l=0; l<lin-1; l++ )
    {
        for (int c=0; c<col; c++)
        {
            cout<< "Ingresar numeros....[" <<l << "," << c <<"]:  ";
            cin>> num[l][c];

        }
    }

}

void promedio(int num[lin][col])
{
    for (int c=0; c<col; c++)
    {
        num[lin-1][c]=0;

        for( int l=0; l<lin-1; l++ )
        {
            num[lin-1][c]+= num[l][c];

        }
        num[lin-1][c]= num[lin-1][c]/5;
    }
}

void presentar(int num[lin][col])
{
     for( int l=0; l<lin; l++ )
    {
        for (int c=0; c<col; c++)
        {
             cout<< num[l][c] << "  ";
        }
        cout<< "\n";
        }


    }


int main()
{
        ingreso(num);
        cout<< "\n\n";
        promedio(num);

        presentar(num);
    system("PAUSE");
    return 0;
}
