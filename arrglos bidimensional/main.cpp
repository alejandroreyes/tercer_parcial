#include <iostream>

using namespace std;

 /*
 arreglos bidimensionales

*/

const int lin=4;
const int col=3;
int num[lin][col];


void ingreso(int num[lin][col])
{  for(int l=0;l<lin;l++)
  {
    for(int c=0;c<col;c++)
   {
     cout<<"ingresar dato....["<<l<<","<<c<<"]...";
     cin>>num[l][c];
   }

}

}

void presentar(int num[lin][col])
{  for(int l=0;l<lin;l++)
  {
    for(int c=0;c<col;c++)
   { cout<<num[l][c]<<"  ";}

     cout<<"\n";
  }
}


int main()

{
    ingreso(num);
    presentar(num);
    return 0;
}
