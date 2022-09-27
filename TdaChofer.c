#include <stdio.h>
#include <stdlib.h>
#include "Util.h"
#include "TdaDomicilio.h"
#include "TdaCuil.h"
#include "TdaChofer.h"
#include <string.h>

choferPtr CrearChofer(char* nombre, char* apellido, domicilioPtr pDomicilio, cuilPtr pCuil){
    choferPtr chofer1=(choferPtr)obtenerMemoria(sizeof(chofer));
    chofer1->nombre=crearStringDinamico(nombre);
    chofer1->apellido=crearStringDinamico(apellido);
    chofer1->domicilio=pDomicilio;
    chofer1->cuil=pCuil;
    return(chofer1);
}
 choferPtr destruirChofer(choferPtr pc){
    free(pc->nombre);
    free(pc->apellido);
    free(pc->domicilio);
    free(pc->cuil);
    free(pc);
    return NULL;
 }

 void setNombreChofer(choferPtr pc, char* nombre){
    strcpy(pc->nombre, nombre);
}

void setApellidoChofer(choferPtr pc, char* apellido){
    strcpy(pc->apellido, apellido);
}

void setDomicilioChofer(choferPtr pc, domicilioPtr pDomicilio){
    pc->domicilio=pDomicilio;
}

void setCuilChofer(choferPtr pc, cuilPtr pCuil){
    pc->cuil=pCuil;
}

char* getNombreChofer(choferPtr pc){
    return(pc->nombre);
}

char* getApellidoChofer(choferPtr pc){
    return(pc->apellido);
}

domicilioPtr getDomicilioChofer(choferPtr pc){
    return(pc->domicilio);
}

cuilPtr getCuilChofer(choferPtr pc){
    return(pc->cuil);
}

void mostrarChofer(choferPtr pc){
    printf("-----Chofer-----\nNombre: %s\nApellido: %s\n",pc->nombre,pc->apellido);
    printf("Domicilio: \n");
    mostrarDomicilio(pc->domicilio);
}

