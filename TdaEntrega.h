#ifndef TDAENTREGA_H_INCLUDED
#define TDAENTREGA_H_INCLUDED
#include <stdbool.h>
#include "TdaPaquete.h"
#include "TdaDomicilio.h"

typedef struct entrega{
    paquete* paquete;
    domicilio* direcRetiro;
    domicilio* direcEntrega;
    bool estadoEntrega;
    int motivo;
}entrega;

typedef entrega* entregaPtr;

//Operacion de creacion
//Precondicion: entrega no ha sido creado
//Postcondicion: se crea Tda entrega
//Parametros:
// pPaquete: Tda paquete que representa un paquete
// pDirecRetiro: Tda domicilio que representa la direccion de retiro
// pDirecEntrega: Tda domicilio que representa la direccion de entrega
// estadoEntrega: booleano que representa si la entrega fue realizada o no
// motivo: entero que representa el motivo de la no entrega
//Devuelve un puntero a la estructura Entrega en memoria dinamica
entregaPtr crearEntrega(paquete* pPaquete, domicilioPtr pDirecRetiro, domicilioPtr pDirecEntrega, bool estadoEntrega, int motivo);

//Operacion de destruccion
//Precondicion: entrega ha sido creada
//Postcondicion: libera la memoria del Tda entrega
//Parametros:
// pe: Tda entrega que será liberado
//Devuelve NULL
entregaPtr destruirEntrega(entregaPtr pe);

//Operacion de seteo
//Precondicion: entrega ha sido creada
//Postcondicion: setea el paquete al Tda entrega
//Parametros:
// pe: Tda entrega en el que se seteará el paquete
// pPaquete: Tda paquete que representara el paquete de la entrega
//No devuelve valor
void setPaqueteEntrega(entregaPtr pe, paquetePtr pPaquete);

//Operacion de seteo
//Precondicion: entrega ha sido creada
//Postcondicion: setea el motivo al Tda entrega
//Parametros:
// pe: Tda entrega en el que se seteará el motivo
// motivo: entero que representara el motivo de la entrega
//No devuelve valor
void setMotivo(entregaPtr pe, int motivo);

//Operacion de seteo
//Precondicion: entrega ha sido creada
//Postcondicion: setea la direccion de retiro al Tda entrega
//Parametros:
// pe: Tda entrega en el que se seteará la direccion de retiro
// direcRetiro: Tda domicilio que representara la direccion de retiro de la entrega
//No devuelve valor
void setDirecRetiro(entregaPtr pe, domicilioPtr direcRetiro);

//Operacion de seteo
//Precondicion: entrega ha sido creada
//Postcondicion: setea la direccion de entrega al Tda entrega
//Parametros:
// pe: Tda entrega en el que se seteará el paquete
// direcEntrega: Tda domicilio que representara la direccion de entrega de la entrega
//No devuelve valor
void setDirecEntrega(entregaPtr pe, domicilioPtr direcEntrega);

//Operacion de seteo
//Precondicion: entrega ha sido creada
//Postcondicion: setea el estado al Tda entrega
//Parametros:
// pe: Tda entrega en el que se seteará el paquete
// estado: booleano que representara estado de la entrega
//No devuelve valor
void setEstado(entregaPtr pe, bool estado);

//Operacion de obtencion
//Precondicion: entrega ha sido creada
//Postcondicion: obtiene el paquete del Tda entrega
//Parametros:
// pe: Tda entrega del que se obtendra el paquete
//Devuelve el paquete de la entrega
paquetePtr getPaqueteEntrega(entregaPtr pe);

//Operacion de obtencion
//Precondicion: entrega ha sido creada
//Postcondicion: obtiene el motivo del Tda entrega
//Parametros:
// pe: Tda entrega del que se obtendra el motivo
//Devuelve el motivo de la entrega
int getMotivo(entregaPtr pe);

//Operacion de obtencion
//Precondicion: entrega ha sido creada
//Postcondicion: obtiene la direccion de retiro del Tda entrega
//Parametros:
// pe: Tda entrega del que se obtendra la direccion de retiro
//Devuelve la direccion de retiro de la entrega
domicilioPtr getDirecRetiro(entregaPtr pe);

//Operacion de obtencion
//Precondicion: entrega ha sido creada
//Postcondicion: obtiene la direccion de la entrega del Tda entrega
//Parametros:
// pe: Tda entrega del que se obtendra la direccion de la entrega
//Devuelve la direccion de la entrega
domicilioPtr getDirecEntrega(entregaPtr pe);

//Operacion de obtencion
//Precondicion: entrega ha sido creada
//Postcondicion: obtiene el estado del Tda entrega
//Parametros:
// pe: Tda entrega del que se obtendra el estado
//Devuelve el estasdo de la entrega
bool getEstado(entregaPtr pe);

#endif // TDAENTREGA_H_INCLUDED
