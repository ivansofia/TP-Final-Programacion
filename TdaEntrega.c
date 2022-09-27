#include <stdio.h>
#include <stdlib.h>
#include "TdaEntrega.h"
#include "Util.h"

entregaPtr crearEntrega(paquete* pPaquete, domicilioPtr pDirecRetiro, domicilioPtr pDirecEntrega, bool estadoEntrega, int motivo){
    entregaPtr pe=(entregaPtr)obtenerMemoria(sizeof(entrega));
    pe->paquete=pPaquete;
    pe->motivo=motivo;
    pe->estadoEntrega=estadoEntrega;
    pe->direcRetiro=pDirecRetiro;
    pe->direcEntrega=pDirecEntrega;
    return(pe);
}

entregaPtr destruirEntrega(entregaPtr pe){
    free(pe);
    return NULL;
}

void setPaqueteEntrega(entregaPtr pe, paquetePtr pPaquete){
    pe->paquete=pPaquete;
}

void setMotivo(entregaPtr pe, int motivo){
    pe->motivo=motivo;
}

void setDirecRetiro(entregaPtr pe, domicilioPtr direcRetiro){
    pe->direcRetiro=direcRetiro;
}

void setDirecEntrega(entregaPtr pe, domicilioPtr direcEntrega){
    pe->direcEntrega=direcEntrega;
}

void setEstado(entregaPtr pe, bool estado){
    pe->estadoEntrega=estado;
}

paquetePtr getPaqueteEntrega(entregaPtr pe){
    return(pe->paquete);
}

int getMotivo(entregaPtr pe){
    return(pe->motivo);
}

domicilioPtr getDirecRetiro(entregaPtr pe){
    return(pe->direcRetiro);
}

domicilioPtr getDirecEntrega(entregaPtr pe){
    return(pe->direcEntrega);
}

bool getEstado(entregaPtr pe){
    return(pe->estadoEntrega);
}
