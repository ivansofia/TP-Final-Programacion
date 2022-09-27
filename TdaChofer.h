#ifndef TDACHOFER_H_INCLUDED
#define TDACHOFER_H_INCLUDED
#include "TdaCuil.h"
#include "TdaDomicilio.h"

typedef struct chofer{
    char* nombre;
    char* apellido;
    cuilPtr cuil;
    domicilioPtr domicilio;
}chofer;

typedef chofer* choferPtr;

//Operacion de creacion
//Precondicion: chofer no ha sido creado
//Postcondicion: se crea un TDA chofer
//Parametros:
// nombre: string que representa el nombre del chofer
// apellido: string que representa el apellido del chofer
//Devuelve un puntero a la estructura chofer en memoria dinamica
choferPtr CrearChofer(char* nombre, char* apellido, domicilioPtr pDomicilio, cuilPtr pCuil);

//Operacion de destruccion
//Precondicion: chofer debe haberse creado
//Postcondicion: destruye la estructura chofer
//Parametros:
// pChofer: TDAchofer a destruir
//Devuelve NULL
choferPtr destruirChofer(choferPtr pc);

//Operacion de mostrar
//Precondicion: chofer debe haberse creado
//Postcondicion: muestra el chofer definido
//Parametros:
// pChofer: TDAChofer a convertir
//No devuelve valor
void mostrarChofer(choferPtr pc);

//Operacion de asignacion
//Precondicion: chofer debe haberse creado
//Postcondicion: setea el nombre del chofer
//Parametros:
//pChofer: TDA chofer en el que se setea el nombre
//nombre: string que define el nombre del chofer
//No devuelve valor
void setNombreChofer(choferPtr pc,char* nombre);

//Operacion de asignacion
//Precondicion: chofer debe haberse creado
//Postcondicion: setea el apellido del chofer
//Parametros:
//pChofer: TDA chofer en el que se setea el apellido
//apellido: string que define el apellido del chofer
//No devuelve valor
void setApellidoChofer(choferPtr pc,char* apellido);

//Operacion de asignacion
//Precondicion: chofer debe haberse creado
//Postcondicion: setea el cuil del chofer
//Parametros:
//pChofer: TDA chofer en el que se setea el cuil
//cuil: tipo de dato que define el cuil del chofer
//No devuelve valor
void setCuilChofer(choferPtr pc,cuilPtr cuil);

//Operacion de asignacion
//Precondicion: chofer debe haberse creado
//Postcondicion: setea el domicilio del chofer
//Parametros:
//pChofer: TDA chofer en el que se setea el domicilio
//domicilio: tipo de dato que define el domicilio del chofer
//No devuelve valor
void setDomicilioChofer(choferPtr pc,domicilioPtr domicilio);

//Operacion de obtencion
//Precondicion: chofer debe haberse creado
//Postcondicion: se obtiene el nombre del chofer
//Parametros:
// pChofer: TDA chofer del que se obtiene el nombre
//Devuelve el string nombre
char* getNombreChofer(choferPtr pc);

//Operacion de obtencion
//Precondicion: chofer debe haberse creado
//Postcondicion: se obtiene el apellido del chofer
//Parametros:
//pChofer: TDA chofer del que se obtendrá el apellido
//Devuelve el string apellido
char* getApellidoChofer(choferPtr pc);

//Operacion de obtencion
//Precondicion: chofer debe haberse creado
//Postcondicion: se obtiene el cuil del chofer
//Parametros:
//pChofer: TDA chofer del que se obtendrá el cuil
//Devuelve un entero cuil
cuilPtr getCuilChofer(choferPtr pc);

//Operacion de obtencion
//Precondicion: chofer debe haberse creado
//Postcondicion: se obtiene el domicilio del chofer
//Parametros:
//pChofer: TDA chofer del que se obtendrá el domicilio
//Devuelve un entero domicilio
domicilioPtr getDomicilioChofer(choferPtr pc);

#endif // TDACHOFER_H_INCLUDED
