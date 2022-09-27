#include <stdio.h>
#include <stdlib.h>
#include "Tda Vehiculo.h"
#include "Util.h"
#include <string.h>

vehiculoPtr crearVehiculo(char* pTipo, char* pMarca, char* pModelo, char* pPatente){
    vehiculoPtr vehiculo1=(vehiculoPtr)obtenerMemoria(sizeof(vehiculo));
    vehiculo1->tipo=crearStringDinamico(pTipo);
    vehiculo1->marca=crearStringDinamico(pMarca);
    vehiculo1->modelo=crearStringDinamico(pModelo);
    vehiculo1->patente=crearStringDinamico(pPatente);

    return(vehiculo1);
}
 vehiculoPtr destruirVehiculo(vehiculoPtr pv){
    free(pv->tipo);
    free(pv->marca);
    free(pv->modelo);
    free(pv->patente);
    free(pv);
    return NULL;
 }

 void setTipo(vehiculoPtr pv, char* pTipo){
    strcpy(pv->tipo,pTipo);
}

void setMarca(vehiculoPtr pv, char* pMarca){
    strcpy(pv->marca,pMarca);
}

void setModelo(vehiculoPtr pv, char* pModelo){
    strcpy(pv->modelo,pModelo);
}

void setPatente(vehiculoPtr pv, char* pPatente){
    strcpy(pv->patente,pPatente);
}

char* getTipo(vehiculoPtr pv){
    return(pv->tipo);
}


char* getMarca(vehiculoPtr pv){
    return(pv->marca);
}

char* getModelo(vehiculoPtr pv){
    return(pv->modelo);
}

char* getPatente(vehiculoPtr pv){
    return(pv->patente);
}

void mostrarVehiculo(vehiculoPtr pv){
    printf("-----Vehiculo-----\nTipo: %s\nMarca: %s\nModelo: %s\nPatente: %s\n",pv->tipo,pv->marca,pv->modelo,pv->patente);
}
