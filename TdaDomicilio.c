#include <stdio.h>
#include <stdlib.h>
#include "TdaDomicilio.h"
#include "Util.h"
#include <string.h>

domicilioPtr crearDomicilio(char* calle, int altura, char* localidad){
    domicilioPtr domicilio1=(domicilioPtr)obtenerMemoria(sizeof(domicilio));
    domicilio1->altura=altura;

    domicilio1->calle=crearStringDinamico(calle);
    domicilio1->localidad=crearStringDinamico(localidad);

    return domicilio1;
}

domicilioPtr destruirDomicilio(domicilioPtr pd){
    free(pd->calle);
    free(pd->localidad);
    free(pd);
    return NULL;
}

void setCalle(domicilioPtr pd, char* calle){
    strcpy(pd->calle,calle);
}

void setAltura(domicilioPtr pd, int altura){
    pd->altura=altura;
}

void setLocalidad(domicilioPtr pd, char* localidad){
    strcpy(pd->localidad,localidad);
}

char* getCalle(domicilioPtr pd){
    return(pd->calle);
}

int getAltura(domicilioPtr pd){
    return(pd->altura);
}

char* getLocalidad(domicilioPtr pd){
    return(pd->localidad);
}

void mostrarDomicilio(domicilioPtr pd){
    printf("Calle: %s\nAltura: %d\nLocalidad: %s\n",pd->calle,pd->altura,pd->localidad);
}
