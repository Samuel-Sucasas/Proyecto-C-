#include "Procedimientos.h"
main(){
    int op = 1;

    while(op != 0){
        cout<<"-Bienvenido al Menu Del juego-"<<endl;
        cout<<"1. Registro de Jugadores Nuevos"<<endl;
        cout<<"2. Eliminar jugadores"<<endl;
        cout<<"3. Agregar un Logro a un jugador existente"<<endl;
        cout<<"4. Actualizar logros"<<endl;
        cout<<"5. Mostrar la lista de jugadores y sus logros"<<endl;
        cout<<"6. Consultar Ranking"<<endl;
        cout<<"7. Seleccion y ejecución de misiones"<<endl;
        cout<<"8. Visualizacion de los logros y perfiles"<<endl;
        cout<<"9. Eliminacion de perfiles"<<endl;
        cout<<"0. Salir y guardar"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>> op;

        switch (op){
            case 1:
                //Aqui va el procedimiento del registro
                break;
            case 2:
                //Aqui va el procedimiento del Eliminar Jugadores
                break;
            case 3:
                //Aqui va el procedimiento del Añadir logros
                break;
            case 4:
                //Aqui va el procedimiento del Actualizar logros
                break;
            case 5:
                //Aqui va el procedimiento del Mostrar lista de j y L
                break;
            case 6:
                //Aqui va el procedimiento del Mostrar Rank
                break;
            case 7:
                //Aqui va el procedimiento del Misiones
                break;
            case 8:
                //Aqui va el procedimiento del Mostras L y Perfiles
                break;
            case 9:
                //Aqui va el procedimiento del Eliminar Perfiles
                break;
            default:
                cout<<"Opcion invalida!"<<endl;
                break;
        }
    }
}