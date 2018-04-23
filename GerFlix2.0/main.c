#include <stdio.h>
#include <stdlib.h>
/**
*
    1. mostrar cada usuario con las series que ve
    2. mostrar por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
    4. mostrar la/s series menos populares
    5. ingresar usuario y listar sus series
    6. ingresar serie y listar sus usuarios
    7. top 3 de series
*
*/

int opcion;

int main()
{
    do
    {
        printf("1. Mostrar usuario y las series que ve\n");
        printf("2. Mostrar usuarios\n");
        printf("3. Mostrar cantidad de usuarios");
        printf("4. Salir");
        scanf("%d", &opcion);

        switch
        {
        case 1:


        }
    }
    while (opcion != 4);

    printf("Facundo Serrano\n");
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#define TAMANIO 5


*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*


void mostarLosUsuariosConSusSeries( eSerie [],int,  eUsuario [],int,eUsuarioSerie [],int);

int main()
{
    eSerie listadoSeries[5];
    eUsuario listadoUsuarios[3];
    eUsuarioSerie listadoDeVistas[10];

    CrearListadoDeTresUsuarios(listadoUsuarios);
    CrearListadoSeries(listadoSeries);
    CrearListadoUsuariosYSeries(listadoDeVistas);

    mostarLosUsuariosConSusSeries(listadoSeries,5,listadoUsuarios,3,listadoDeVistas,10);


    printf("Hello world!\n");
    return 0;
}
void mostarLosUsuariosConSusSeries( eSerie listSerie[],int cantSer , eUsuario listUsuario[],int cantUsu,eUsuarioSerie listRelaciones[],int cantRe){

    int i;
    for(i=0;i<cantRe;i++)
    {
        int j;
        for(j=0;j<cantUsu;j++)
        {
            if(listRelaciones[i].idUsuario== listUsuario[j].idUsuario )
            {
                printf("\nusuario: %s",listUsuario[j].nombre);
                break;
            }
        }
         for(j=0;j<cantSer;j++)
        {
            if(listRelaciones[i].idSerie== listSerie[j].idSerie )
            {
                printf("serie: %s",listSerie[j].nombre);
                break;
            }
        }


    }
}
*/
