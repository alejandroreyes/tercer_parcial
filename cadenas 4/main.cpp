#include <iostream>
#include<string>
#include<string.h>
using namespace std;


string cadena;
int main()
{
    cout<<"ingresar cadena...:";
    cin>>cadena;
    string subcadena(cadena,2,6);//de la pos 2 alas 6
    cout<<"valor  de subcadena...;"<<subcadena<<"\n";
    string contar;
    contar=cadena.substr(0,5);
     cout<<"valor de cortar...;"<<cortar<<"\n";
      cout<<"tamaño de la cadena....;"<<cadena.size()<<"\n";
      string insertado;
      insertado=cadena;
      insertado=cadena.insert(1,"juan");
       cout<<"valor insertado ...;"<<insertado<<"\n";







    return 0;
}
