#ifndef TDAREPARTO_H_INCLUDED
#define TDAREPARTO_H_INCLUDED
#include "TdaChofer.h"
#include "Tda Vehiculo.h"
#include "Tda Fecha.h"
#include "TdaHora.h"
#include "Tda Pila.h"

typedef struct reparto{
    chofer* chofer;
    vehiculo* vehiculo;
    Fecha* fechaSalida;
    hora* horaSalida;
    hora* horaRetorno;
    PtrPila entregas;
}reparto;

typedef reparto* repartoPtr;

//Operacion de creacion
//Precondicion: reparto no ha sido creado
//Postcondicion:
//Parametros:
// pChofer: Tda chofer que representa el chofer del reparto
// pVehiculo: Tda vehiculo que representa el vehiculo del reparto
// pFechaSalida: Tda fechajuliana que representa la fecha de salida
// pHoraSalida: Tda hora que representa la hora de salida
// pHoraRetorno: Tda hora que representa la hora de salida
// pPaquete: Tda paquete que representa un paquete del reparto
//Devuelve un puntero a la estructura reparto en memoria dinamica
repartoPtr crearReparto(chofer* pChofer, vehiculo* pVehiculo, Fecha* pFechaSalida, hora* pHoraSalida, hora* pHoraRetorno);

//Operacion de destruccion
//Precondicion: reparto ha sido creado
//Postcondicion: se libera la memoria ocupada por reparto
//Parametros:
// pr: Tda reparto que se liberará
//Devuelve NULL
repartoPtr destruirReparto(repartoPtr pr);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea el chofer del reparto
//Parametros:
// pr: Tda reparto donde se seteará el chofer
// pChofer: Tda chofer que representa el chofer del reparto
//No devuelve valor
void setchofer(repartoPtr pr, choferPtr pChofer);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea el vehiculo del reparto
//Parametros:
// pr: Tda reparto donde se seteará el vehiculo
// pVehiculo: Tda vehiculo que representa el vehiculo del reparto
//No devuelve valor
void setVehiculo(repartoPtr pr, vehiculoPtr pVehiculo);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea la fecha de salida del reparto
//Parametros:
// pr: Tda reparto donde se seteará la fecha de salida
// pFecha: Tda fechajuliana que representa la fecha de salida del reparto
//No devuelve valor
void setFechaSalida(repartoPtr pr, FechaPtr pFecha);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea la hora de salida del reparto
//Parametros:
// pr: Tda reparto donde se seteará la hora de salida
// pHora: Tda hora que representa la hora de salida del reparto
//No devuelve valor
void setHoraSalida(repartoPtr pr, horaPtr pHora);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea la hora de retorno del reparto
//Parametros:
// pr: Tda reparto donde se seteará la hora de retorno
// pHora: Tda hora que representa la hora de retorno del reparto
//No devuelve valor
void setHoraRetorno(repartoPtr pr, horaPtr pHora);

//Operacion de seteo
//Precondicion: reparto ha sido creado
//Postcondicion: setea los paquete del reparto
//Parametros:
// pr: Tda reparto donde se setearán los paquetes
// pPaquete: Tda pila que representa los paquetes del reparto
//No devuelve valor
void setPaquete(repartoPtr pr, PtrPila pPaquete);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene el chofer del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá el chofer
//Devuelve el chofer del reparto
choferPtr getChofer(repartoPtr pr);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene el vehiculo del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá el chofer
//Devuelve el vehiculo del reparto
vehiculoPtr getVehiculo(repartoPtr pr);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene la fecha de salida del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá la fecha de salida
//Devuelve la fecha de salida del reparto
FechaPtr getFechaSalida(repartoPtr pr);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene el la hora de salida del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá la hora de salida
//Devuelve la hora de salida del reparto
horaPtr getHoraSalida(repartoPtr pr);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene la hora de retorno del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá la hora de retorno
//Devuelve la hora de retorno del reparto
horaPtr getHoraRetorno(repartoPtr pr);

//Operacion de obtencion
//Precondicion: reparto ha sido creado
//Postcondicion: obtiene un paquete del reparto
//Parametros:
// pr: Tda reparto del que se obtendrá un paquete
//Devuelve un paquete del reparto
PtrPila getPaquete(repartoPtr pr);

#endif // TDAREPARTO_H_INCLUDED
