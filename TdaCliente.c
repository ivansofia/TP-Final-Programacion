#include <stdio.h>
#include <stdlib.h>
#include "TdaCuil.h"
#include "TdaDomicilio.h"
#include "Util.h"
#include "TdaCliente.h"
#include <string.h>

clientePtr crearCliente(char* nombre, char* apellido, domicilioPtr pDomicilio, cuilPtr pCuil){
    clientePtr cliente1=(clientePtr)obtenerMemoria(sizeof(cliente));

    cliente1->nombre=crearStringDinamico(nombre);
    cliente1->apellido=crearStringDinamico(apellido);
    cliente1->domicilio=pDomicilio;
    cliente1->cuil=pCuil;

    return cliente1;
}

clientePtr destruirCliente(clientePtr pc){
    free(pc->nombre);
    free(pc->apellido);
    free(pc);
    return NULL;
}

void mostrarCliente(clientePtr pc){
    printf("-------Cliente-------\r\nNombre:%s\r\nApellido:%s\r\n", pc->nombre, pc->apellido);
    printf("Domicilio:\r\n");
    mostrarDomicilio(pc->domicilio);
}

void setNombreCliente(clientePtr pc, char* nombre){
    strcpy(pc->nombre,nombre);
}

char* getNombreCliente(clientePtr pc){
    return(pc->nombre);
}

void setApellidoCliente(clientePtr pc, char* apellido){
    strcpy(pc->apellido,apellido);
}

char* getApellidoCliente(clientePtr pc){
    return(pc->apellido);
}

void setDomicilioCliente(clientePtr pc, domicilioPtr pDomicilio){
    pc->domicilio=pDomicilio;
}

domicilioPtr getDomicilioCliente(clientePtr pc){
    return(pc->domicilio);
}

void setCuilCliente(clientePtr pc, cuilPtr pCuil){
    pc->cuil=pCuil;
}

cuilPtr getCuilCliente(clientePtr pc){
    return(pc->cuil);
}
