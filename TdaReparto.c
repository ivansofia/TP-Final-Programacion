#include <stdio.h>
#include <stdlib.h>
#include "TdaReparto.h"
#include "Util.h"
#include "Tda Pila.h"
#include "Nodo.h"
#include "TdaEntrega.h"
#include <string.h>

repartoPtr crearReparto(chofer* pChofer, vehiculo* pVehiculo, Fecha* pFechaSalida, hora* pHoraSalida, hora* pHoraRetorno){
    repartoPtr reparto1=(repartoPtr)obtenerMemoria(sizeof(reparto));
    reparto1->chofer=pChofer;
    reparto1->vehiculo=pVehiculo;
    reparto1->fechaSalida=pFechaSalida;
    reparto1->horaSalida=pHoraSalida;
    reparto1->horaRetorno=pHoraRetorno;
    reparto1->entregas=crearPila();
    return(reparto1);
}

repartoPtr destruirReparto(repartoPtr pr){
    free(pr->chofer);
    free(pr->vehiculo);
    free(pr->fechaSalida);
    free(pr->horaSalida);
    free(pr->horaRetorno);
    free(pr->entregas);
    free(pr);
    return NULL;
}

void setChofer(repartoPtr pr, choferPtr pChofer){
    pr->chofer=pChofer;
}

void setVehiculo(repartoPtr pr, vehiculoPtr pVehiculo){
    pr->vehiculo=pVehiculo;
}

void setFechaSalida(repartoPtr pr, FechaPtr pFecha){
    pr->fechaSalida=pFecha;
}

void setHoraSalida(repartoPtr pr, horaPtr pHora){
    pr->horaSalida=pHora;
}

void setHoraRetorno(repartoPtr pr, horaPtr pHora){
    pr->horaRetorno=pHora;
}

choferPtr getChofer(repartoPtr pr){
    return(pr->chofer);
}

vehiculoPtr getVehiculo(repartoPtr pr){
    return(pr->vehiculo);
}

FechaPtr getFechaSalida(repartoPtr pr){
    return(pr->fechaSalida);
}

horaPtr getHoraSalida(repartoPtr pr){
    return(pr->horaSalida);
}

horaPtr getHoraRetorno(repartoPtr pr){
    return(pr->horaRetorno);
}


void setEntregaReparto(repartoPtr pr, entregaPtr pEntrega){
    apilar(pr->entregas,pEntrega);
}

entregaPtr getEntrega(repartoPtr pr){
    return(desapilar(pr->entregas));
}
