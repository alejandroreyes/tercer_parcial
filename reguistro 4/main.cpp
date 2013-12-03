#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct empleados
{ char nombre[30];
int ventas,comis;

};
 const int tam=5;
 empleados emple[tam];
 empleados emplemax;

  empleados mayorempleado(empleados emple[])
 {
     empleados auxmayor;
      auxmayor.comis=0;
     for (int i=0;i<tam;i++)
     {
         if (auxmayor.comis<emple[i].comis)
         {
          auxmayor=emple[i];
         }
     }
     return auxmayor;
 }


 void ingreso(empleados emple[])
 {
     for (int i=0;i<tam;i++)
     {
         cout<<"ingresar  el nombre..";
         cin.getline(emple[i].nombre,30);
         cout<<"\n";
         cout<<"ventas  del empleado.....";
         cin>>emple[i].ventas;
        cout<<"\n";
         _flushall();
     }
 }

void calcular (empleados emple[])
{
    for (int i=0;i<tam;i++)
   {  emple[i].comis=emple[i].ventas*0.05;

   }

}

 void  presentar (empleados emple[])
 { for (int i=0;i<tam;i++)
     {
         cout<<"el empleado  "<<emple[i].nombre<<" gano  "<<emple[i].comis<<" de comision "<<"\n";

     }

 }

int main()
{
    ingreso(emple);
    calcular(emple);
    cout<<"\n\n";
    presentar(emple);
    emplemax=mayorempleado(emple);
   cout<<"\n\n";
    cout<<"el empleado que tiene la mayor comision es  "<<emplemax.nombre<<"  con la comision  "<<emplemax.comis<<"\n";

    return 0;
}
