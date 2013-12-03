#include <iostream>

using namespace std;
/*
elaborar un programa donde declare la siguiente estructura.
nombre,horas,hn,he,pn,pe,pb,ihss,y tp
se tiene que elaborar un procedimiento para ingresar los datos
al reguistro, luego debemos calcular la hn,he,pn,pe,pb,ihss,y tp
un procedimiento.(las horas normales son las primeras 40 y las demas extras)

se tiene que elaborar una funcion para determinar el seguro social.
donde solo se ingrese el pago brutom que es parte de la estructura
y nos devuelva el ihss

emplex.ihss=seguro(emplex.pb)

luego precentar los datos usando un procedimiento.


*/
struct empleado
{
    char nombre[30];
    int hn,he,pn,pe,pb,ihss,tp;
    char obs[15];

};

empleado emplex;

void ingreso (empleado &emplex)
{
    cout<< "Ingresar nombre del empleado: ";
    cin.getline(emplex.nombre,30);
    cout<< "pago bruto...: ";
    cin>> emplex.pb;
    cout<< "nota examen: ";
    cin>> alumx.ne;

}



int seguro(int pb)
{
 if (pb>7000)
 return 245;
 else
    return 0.035*pb;

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
