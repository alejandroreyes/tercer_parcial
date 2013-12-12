#include <iostream>


/*
Prueba #5
Se tiene el siguiente registro:
Nombre
Ventas
Turno
Porcomision
Comisión
Ihss
TotalPagar

Elaborar un programa para el ingreso del nombre, ventas y turno (que solo sea 1,2,3).
Luego se deberá de elaborar una función para determinar el porcentaje de comisión usando la siguiente tabla :
	Turno		porcomision
	1			3%
    2			5%
    3			6%
Elaborar una función para determinar el ihss.
Elaborar un procedimiento para determinar la comisión , ihss, y total a pagar .
Elaborar un procedimiento para presentar los datos del registro.
*/

using namespace std;
struct empleado
{   char nombre[30];
    int turno;
    double ventas,comision,ihss,tp,pc,tbruto;
};
empleado emple;

void ingresar(empleado &emple)
{
    cout<<"Ingresar el Nombre......: ";
    cin.getline(emple.nombre,30);
    cout<<"\n";
    cout<<"ventas......: ";
    cin>>emple.ventas;
    cout<<"\n";
    do
    {
        cout<<"Ingresar   Turno  del empleado (1,2,3) :  ";
        cin>>emple.turno;
        cout<<"\n";
    }while(!((emple.turno>=1) and (emple.turno<=3)));
}

int seguro (double ventas)
 {if (ventas >=7000)
{
    return 245;
}
else
 { return 0.035 * ventas;

 }
 }

double  porcomis(int turno)
{
    switch (turno)
    {
        case 1:
            return 0.03;
            break;
        case 2:
            return 0.05;
            break;
        default:
            return 0.06;
            break;
    }
}

void calcular (empleado  &emple)
{   emple.pc= porcomis(emple.turno);
    emple.comision=emple.pc * emple.ventas;
    emple.ihss=seguro(emple.ventas)-emple.tbruto;

    emple.tbruto= emple.ventas + emple.comision;

    emple.tp=emple.tbruto  - emple.ihss;
}

void presentar (empleado emple)
{
    cout<<"Nombre del Empleado  : "<<emple.nombre<<"\n";
    cout<<"\n";
    cout<<"porcentaje de  comision  : "<<emple.pc<<"  LPS"<<"\n";
    cout<<"\n";
    cout<<"Pago por Comision ganada  : "<<emple.comision<<"  LPS"<<"\n";
    cout<<"\n";
    cout<<"IHSS  : "<<emple.ihss<<"  LPS"<<"\n";
    cout<<"\n";
    cout<<"Total pago Bruto       :  "<<emple.tbruto<< " LPS"<<"\n";
    cout<<"\n";
    cout<<"Total a Pagar  : "<<emple.tp<<"  LPS"<<"\n";
    cout<<"\n";
}


int main()
{
        ingresar (emple);
        calcular (emple);
        presentar (emple);

        return 0;
}
