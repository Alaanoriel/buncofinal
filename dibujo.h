#ifndef DIBUJO_H_INCLUDED
#define DIBUJO_H_INCLUDED
#include <iostream>
#include <conio.h>
using namespace std;


///declaracion funciones
void pintarDados(int [], int , int , int);
void EntreRondas(char[], int , int ,int ,int , int);
void DatosDelJugador(char[], int, int, int, int,int, int,int);
void PuntuacionFinal(char[], int , int ,int ,int);

///implementacion funciones
void DatosDelJugador(char nombre[],int Buncos, int TiradasinP, int Lanzamientos,int puntos, int puntaje,int Totalpuntos,int rondas) ///Dibuja los datos del juego.
{
            gotoxy(1,1);
            cout<<"Turno de "<<nombre<<endl;

            gotoxy(18,1);
            cout<<"|";

            gotoxy(19,1);
            cout<<"Ronda N*: "<<rondas<<endl;

            gotoxy(32,1);
            cout<<"|";

            gotoxy(1,2);
            cout<<"--------------------------------------------------";

            gotoxy(35,1);
            cout<<"Lanzamiento N* "<<Lanzamientos<<endl;

            gotoxy(1,3);
            cout<<"Veces que obtuvo bunco: "<<Buncos<<endl;

            gotoxy(1,4);
            cout<<"--------------------------------------------------";

            gotoxy(25,5);
            cout<<"Puntaje actual:"<<Totalpuntos<<endl;


            gotoxy(1,5);
            cout<<"Puntaje acumulado:"<<puntaje<<endl;

            gotoxy(1,6);
            cout<<"--------------------------------------------------";


            gotoxy(1,14);
            cout<<"Puntaje obtenido:"<<puntos<<endl;



            gotoxy(1,16);
            cout<<endl;
            system("pause");

}

void EntreRondas(char nombre[],int rondas,int Totalpuntos ,int Buncos ,int TiradasinP ,int Lanzamientos) /// Dibuja recuadro entre rondas
{

    ///cout<<" ______________________________________________________"<<endl;
    ///cout<<"|        Ronda N*:"<<RondasActual<<"                                    |"<<endl;
    ///cout<<"|______________________________________________________|"<<endl;
    ///cout<<"|        Puntaje:"<<Puntaje;                            gotoxy(56,4);cout<<"|"<<endl;
    ///cout<<"|        Buncos:"<<Buncos<<"                                      |"<<endl;
    ///cout<<"|        Tiradas Fallidas:"<<TiradasFallidas;          gotoxy(56,6);cout<<"|"<<endl;
    ///cout<<"|        Lanzamientos:"<<Lanzamientos;                 gotoxy(56,7);cout<<"|"<<endl;
    ///cout<<"|______________________________________________________|"<<endl;

    gotoxy(56,19);
    cout<<rondas;
    gotoxy(56,20);
    cout<<nombre;
    gotoxy(56,22);
    cout<<Totalpuntos;
    gotoxy(56,23);
    cout<<Buncos;
    gotoxy(56,24);
    cout<<TiradasinP;
    gotoxy(56,25);
    cout<<Lanzamientos;


    gotoxy(27,18);
    cout<<" ________________________________________________________"<<endl;
    gotoxy(27,19);
    cout<<"|                Ronda N :";
    gotoxy(84,19);
    cout<<"|"<<endl;
    gotoxy(27,20);
    cout<<"|                 Jugador:";
    gotoxy(84,20);
    cout<<"|"<<endl;
    gotoxy(27,21);
    cout<<"|________________________________________________________|"<<endl;
    gotoxy(27,22);
    cout<<"|                 Puntaje:";
    gotoxy(84,22);
    cout<<"|"<<endl;
    gotoxy(27,23);
    cout<<"|                  Buncos:";
    gotoxy(84,23);
    cout<<"|"<<endl;
    gotoxy(27,24);
    cout<<"|        Tiradas Fallidas:";
    gotoxy(84,24);
    cout<<"|"<<endl;
    gotoxy(27,25);
    cout<<"|            Lanzamientos:";
    gotoxy(84,25);
    cout<<"|"<<endl;
    gotoxy(27,26);
    cout<<"|________________________________________________________|"<<endl;

    system("pause");
}



void pintarDados(int Posicion[], int indice, int x,int y) /// Recibo el vector, con la posicion correspondiente e X y Y.
{

        switch(Posicion[indice]) /// Pregunto por el vector con la posicion "Indice", que ya esta cargado con el valor.
        {
            case 1:
                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;

                gotoxy(x,y++);
                cout << "|     |" << endl;

                gotoxy(x,y++);
                cout << "|  O  |" << endl;

                gotoxy(x,y++);
                cout << "|     |" << endl;

                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;

            case 2:

                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;
                gotoxy(x,y++);
                cout << "|    O|" << endl;
                gotoxy(x,y++);
                cout << "|     |" << endl;
                gotoxy(x,y++);
                cout << "|O    |" << endl;
                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;

            case 3:

                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;
                gotoxy(x,y++);
                cout << "|    O|" << endl;
                gotoxy(x,y++);
                cout << "|  O  |" << endl;
                gotoxy(x,y++);
                cout << "|O    |" << endl;
                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;

            case 4:

                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << "|     |" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;

            case 5:

                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << "|  O  |" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;

            case 6:

                gotoxy(x,y++); /// Uso X e Y que envie de la otra funcion.
                cout << " -----" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << "|O   O|" << endl;
                gotoxy(x,y++);
                cout << " ----- " << endl;

                break;
        }


    cout << endl;
}


void PuntuacionFinal(char nombre[], int Buncos, int TiradasFallidas, int LanzamientosFinales, int PuntajeFinal/*,int Total, int Fallidas*/)
{
  int Puntos=0; int Descontar=0;

    ///system("cls");
    Descontar=TiradasFallidas*2;
    Puntos=PuntajeFinal-Descontar;

    gotoxy(57,19);
    cout<<nombre;///b
    gotoxy(57,21);
    cout<<Puntos;///b
    gotoxy(57,22);
    cout<<Buncos;///b
    gotoxy(57,23);
    cout<<TiradasFallidas;
    gotoxy(57,24);
    cout<<LanzamientosFinales;

    gotoxy(27,18);
    cout<<" ______________________________________________________"<<endl;
    gotoxy(27,19);
    cout<<"|            Nombre Jugador:";
    gotoxy(82,19);
    cout<<"|"<<endl;///27 espacio en blanco
    gotoxy(27,20);
    cout<<"|______________________________________________________|"<<endl;
    gotoxy(27,21);
    cout<<"|             Puntaje Final:";
    gotoxy(82,21);
    cout<<"|"<<endl;///27 para el espacio e blanco
    gotoxy(27,22);
    cout<<"|            Buncos Totales:";
    gotoxy(82,22);
    cout<<"|"<<endl;///27
    gotoxy(27,23);
    cout<<"|          Tiradas Fallidas:";
    gotoxy(82,23);
    cout<<"|"<<endl;///27
    gotoxy(27,24);
    cout<<"|              Lanzamientos:";
    gotoxy(82,24);
    cout<<"|"<<endl;///27
    gotoxy(27,25);
    cout<<"|______________________________________________________|"<<endl;


    system("pause");
}






#endif // DIBUJO_H_INCLUDED
