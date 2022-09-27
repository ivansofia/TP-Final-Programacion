#include <stdio.h>
#include <stdlib.h>
#include "TdaDomicilio.h"
#include "TdaCuil.h"
#include "TdaEntrega.h"
#include "TdaChofer.h"
#include "Tda Vehiculo.h"
#include "TdaReparto.h"
#include "Tda Fecha.h"
#include "TdaHora.h"
#include "stdbool.h"
#include "Util.h"
#include <time.h>

int main()
{
    domicilioPtr domicilio1=crearDomicilio("Cerrito",400,"Temperley");
    cuilPtr cuil1=crearCuil(100);

    choferPtr chofer1=CrearChofer("Alfonso","Rios",domicilio1,cuil1);

    vehiculoPtr vehiculo1=crearVehiculo("Auto","Ford","Fiesta","DYC 123");

    FechaPtr fecha1=crearFecha(26,9,2022);

    horaPtr horaSalida1=crearHora(13,20);

    horaPtr horaRetorno1=crearHora(20,00);

    paquetePtr paquete1=crearPaquete(1,1,1,2);

    domicilioPtr direcRetiro=crearDomicilio("Alemania",5432,"Almirante Brown");

    domicilioPtr direcEntrega=crearDomicilio("Nueva York",350,"Temperley");

    entregaPtr entrega1=crearEntrega(paquete1,direcRetiro,direcEntrega,true,0);

    repartoPtr reparto1=crearReparto(chofer1,vehiculo1,fecha1,horaSalida1,horaRetorno1);

    mostrarHora(horaSalida1);

    return 0;
}
