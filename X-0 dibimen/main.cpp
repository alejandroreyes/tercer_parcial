#include <iostream>

using namespace std;

void inicio(int arr[3][3]){
    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++ ){
            arr[f][c] = -1;
        }
    }
}

void presentar(int arr[3][3]){
    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++ ){
            if( arr[f][c] == -1 ){
                cout << "  | ";
            }
            else{

                if(arr[f][c]==1)
                {
                    cout << "X"  << " | ";
                }else if(arr[f][c]==0)
                {
                    cout << "0"  << " | ";
                }
            }
        }
        cout << "\n-----------\n";
    }
}

bool gano(int arr[3][3], int tipo){
    int cont;

    //  POSIVILIDADES DE GANAR HORIZONTALMENTE
    for(int f=0; f < 3; f++){
        cont = 0;
        for(int c=0; c < 3; c++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){
            return true;
        }
    }

    // POSIVILIDADES DE GANAR VERTICALMENTE
    for(int c=0; c < 3; c++){
        cont = 0;
        for(int f=0; f < 3; f++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){
            return true;
        }
    }

    // POSIBILIDADES DE GANAR  DIAGONALMENTE.
    if(arr[0][0] == tipo and arr[1][1] == tipo and arr[2][2] == tipo){
        return true;
    }
    else if(arr[0][2] == tipo and arr[1][1] == tipo and arr[2][0] == tipo){
        return true;
    }

    return false;
}

bool disponible(int arr[3][3]){

    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++){
            if( arr[f][c] == -1){
                return true;
            }
        }
    }
    return false;
}

bool esvalido(int arr[3][3],int f,int c){
    if(f < 0 or f > 2 or c < 0 or c > 2){
        return false;
    }

    if( arr[f][c] != -1){
        return false;
    }

    return true;
}

void cambioturno(int &turno){
    if(turno == 1){
        turno = 0;
    }
    else{
        turno = 1;
    }
}

int main()
{
    int tablero[3][3], turno = 1, fila, col;
    char jug1[30], jug2[30];
    bool dispo, ganador, valido;



                //inicializo el tablero
                inicio(tablero);

                // PIDE   EL NOMBRE DEL  JUGADOR QUE DESEA  JUGAR.
                cout << "Jugador 1: ";
                cin >> jug1;
                cout<<"\n";
                cout << "Jugador 2: ";
                cin >> jug2;

               //inicia el  juego   X-0
                do{
                    //pide  ingresar  la fila  y la columna  al jugador
                    do{
                        cout << "*****Ingresar  la posicion del jugador  **** :" <<  turno << "\n\n";
                        cout<<"\n";
                        cout << "Fila <0-2>: ";
                        cin >> fila;
                        cout<<"\n";
                        cout << "Columna <0-2>: ";
                        cin >> col;
                        cout<<"\n";
                        valido = esvalido(tablero, fila, col);
                    }while(!valido);


                    tablero[fila][col] = turno;


                    presentar(tablero);
                    // evalua  si  algun jugador  gano
                    ganador = gano(tablero,turno);
                    if(ganador){
                        if(turno == 1 ){
                            cout << jug1 << "LO  ESTRANGULO  A " << jug2 << "\n\n";
                        }
                        else{
                            cout << jug2 << " LO   ESTRANGULO A " << jug1 << "\n\n";
                        }
                        break;//Fin del ciclo
                    }
                    //cambia de turno del jugador
                    cambioturno(turno);
                    // si hay  posiciones disponibles  en el tablero
                    dispo = disponible(tablero);
                    if(!dispo){
                        cout << "******hay empate nadie  gano*******";
                    }
                }while(dispo);




    return 0;
}

