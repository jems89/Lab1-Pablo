#include<cstdio>
#include <iostream>
using namespace std;
#include<cstdlib>
#ifndef FUNCIONES_GENERALA_H_INCLUDED
#define FUNCIONES_GENERALA_H_INCLUDED


void tirarDados(int vecDados[], int tam);
void mostrarDados(int vecDados[], int tam);
void resetDados(int vecDados[], int tam);
int sumarPuntos(int vecDados[], int tam);

void juego2jugadores();

void juego2jugadores(){

    int  matrixJuego[3][3], vecDados[6]={}, opcion, ronda=1, puntajeTotal1=0, puntajeTotal2=0, puntajeMaximo=0;
    int puntajeRonda=0, lanzamiento=1, i;
    char ganador[25], jugador1[25], jugador2[25], continuarLanzando;
    int tam=5, cualDado;


    cout<<"INGRESE NOMBRE DEL JUGADOR 1: "<<endl;
    cin.getline(jugador1,25);
    cin.ignore();

    cout<<"INGRESE NOMBRE DEL JUGADOR 2: "<<endl;
    cin.getline(jugador2,25);
    cin.ignore();

    cout<< "¡A comenzar a jugar!"<<endl;
    cout<< "Presione enter para continuar...";
    cin.ignore();
    system("pause");
    cout<<endl;
    while ( getchar() != '\n');





while (ronda!=10){
    while (lanzamiento!=3){
        cout<<"Turno de "<<jugador1<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje total "<<puntajeTotal1<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        cin.ignore();
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        cout<<endl;
        cout<<endl;


        while (lanzamiento!=3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;

            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>tam;

                if (tam==5){
                    tirarDados(vecDados, tam);
                }

                else {
                    for (i=0;i<tam;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        switch (cualDado) {
                            case 1:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 2:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 3:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 4:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 5:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;

                            }
                        }

                    }
                    mostrarDados(vecDados, 5);

            tam=5;
            break;

            case 'n':
            case 'N':
                cout<< "Fin del turno de "<<jugador1<<endl;
                cout<<endl;
                cout<<"Ronda n° "<<ronda<<endl;
                cout<<"Próximo turno de "<<jugador2<<endl;
                cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1<<endl;
                cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2<<endl;
                cout<<endl;


                cout<< "Presione enter para continuar...";
                cin.ignore();
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');

                lanzamiento=3;
                ronda++;
                sumarPuntos(vecDados,tam);

                cout<<endl;


                break;
            }


        }
        }

        cout<< "Fin del turno de "<<jugador1<<endl;
        cout<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Próximo turno de "<<jugador2<<endl;
        cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1<<endl;
        cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2<<endl;
        cout<<endl;


        cout<< "Presione enter para continuar...";
        cin.ignore();
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');

        lanzamiento=1;
        sumarPuntos(vecDados,tam);
        cout<<endl;

        while (lanzamiento!=3){
        cout<<"Turno de "<<jugador2<<endl;
        cout<<"Ronda n° "<<ronda<<endl;
        cout<<"Puntaje total "<<puntajeTotal2<<endl;
        cout<<"Lanzamiento n° "<<lanzamiento<<endl;
        cout<<endl;
        cout<<endl;
        cout<< "Presione enter para tirar los dados...";
        cin.ignore();
        system("pause");
        cout<<endl;
        while ( getchar() != '\n');
        tirarDados (vecDados, tam);
        mostrarDados(vecDados, tam);
        cout<<endl;
        cout<<endl;


        while (lanzamiento!=3){
            cout<<"¿Continuar lanzando?: "<<endl;
            cin>>continuarLanzando;

            switch (continuarLanzando){
            case 'S':
            case 's':
                lanzamiento++;
                cout<<"¿Cuántos dados desea volver a lanzar?: "<<endl;
                cin>>tam;

                if (tam==5){
                    tirarDados(vecDados, tam);
                }

                else {
                    for (i=0;i<tam;i++){
                        cout<<"¿Cuál dado?: "<<endl;
                        cin>>cualDado;
                        switch (cualDado) {
                            case 1:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 2:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 3:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 4:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;
                            case 5:
                            srand(time(NULL));
                            vecDados[cualDado-1]=(rand()%6)+1;
                            break;

                            }
                        }

                    }
                    mostrarDados(vecDados, 5);

            tam=5;
            break;

            case 'n':
            case 'N':
                cout<< "Fin del turno de "<<jugador2<<endl;
                cout<<endl;
                cout<<"Ronda n° "<<ronda<<endl;
                cout<<"Próximo turno de "<<jugador1<<endl;
                cout<<"Puntaje de "<<jugador1<<": "<<puntajeTotal1<<endl;
                cout<<"Puntaje de "<<jugador2<<": "<<puntajeTotal2<<endl;
                cout<<endl;


                cout<< "Presione enter para continuar...";
                cin.ignore();
                system("pause");
                cout<<endl;
                while ( getchar() != '\n');

                lanzamiento=3;
                ronda++;
                sumarPuntos(vecDados,tam);

                cout<<endl;


                break;
            }


        }
        }


    }
}





void tirarDados(int vecDados[], int tam){
    int i, n;
    srand(time(NULL));
    for(i=0;i<tam;i++){
       vecDados[i]=(rand()%6)+1;
     }
    }

 void mostrarDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<vecDados[i]<<"\t";
    }
    cout<<endl;
 }

 void resetDados(int vecDados[], int tam){
    int i;
    for(i=0;i<tam;i++){
       vecDados[i]=0;
    }
 }

 int sumarPuntos(int vecDados[], int tam){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=vecDados[i];

    }
    return suma;
 }




#endif // FUNCIONES_GENERALA_H_INCLUDED

