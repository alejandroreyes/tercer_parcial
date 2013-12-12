#include <iostream>

using namespace std;
struct persona
{
    char nombre[10];
    char nombreRevez[10];
    int vocales;
};
const int n=5;
persona personas[n];

void ingresar ()
{
      int i;
      for(i=0;i<n;i++)
      {
          cout<<"Ingresar nombre #"<<i;
          cin.getline(personas[i].nombre,30);
      }
}

void alrevez()
{
      int i;
      for(i=0;i<n;i++)
      {
          personas[i].vocales = 0;
          int largo=strlen(personas[i].nombre);
          int x=largo-1;
          int c=0;

          for (x=largo-1;x>=0;x--)
          {
                personas[i].nombreRevez[c]=personas[i].nombre[x];

                switch(personas[i].nombre[x])
                {
                case 'a':
                    personas[i].vocales++;
                    break;
                case 'e':
                    personas[i].vocales++;
                    break;
                case 'i':
                    personas[i].vocales++;
                    break;
                case 'o':
                    personas[i].vocales++;
                    break;
                case 'u':
                    personas[i].vocales++;
                    break;
                default:
                    break;
                }
                c++;
          }
      }
}

void mostrar()
{
    int i;
      for(i=0;i<n;i++)
      {
          cout<<"Persona #"<<i<<"\n";
          cout<<"Nombre"<<personas[i].nombre<<"\n";
          cout<<"Nombre Alrevez "<<personas[i].nombreRevez<<"\n";
          cout<<"Numero de Vocales "<<personas[i].vocales<<"\n";
      }

}

int main()
{
    ingresar();
    alrevez();
    mostrar();
    return 0;
}
