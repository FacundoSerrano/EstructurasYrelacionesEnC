#include "usuario.h"

void CrearListadoDeTresUsuarios(eUsuario MisUsuarios[])
{
    int i;
    for(i=0;i<3;i++)
    {
        MisUsuarios[i].idUsuario=i+100;

    }
     strcpy(MisUsuarios[0].nombre,"Mar�a P�a");
     strcpy(MisUsuarios[1].nombre,"Jos� Luis");
     strcpy(MisUsuarios[2].nombre,"Dafne");
}
