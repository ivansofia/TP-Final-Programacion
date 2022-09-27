#ifndef TDACLIENTE_H_INCLUDED
#define TDACLIENTE_H_INCLUDED
#include "TdaDomicilio.h"
#include "TdaCuil.h"

typedef struct cliente{
    char* nombre;
    char* apellido;
    domicilioPtr domicilio;
    cuilPtr cuil;
}cliente;

typedef cliente* clientePtr;

//Operacion de creacion
//Precondicion: cliente no haya sido creado
//Postcondicion: se crea un cliente con nombre, apellido, domicilio y cuit
//Parametros:
//nombre: string que representa el nombre
//apellido: string que representa el apellido
//domicilio: TDA que representa el domicilio
//cuit: TDA que representa el cuit
//Devuelve un puntero a la estructura "cliente" en memoria dinamica
clientePtr crearCliente(char* nombre, char* apellido, domicilioPtr pDomicilio, cuilPtr pCuil);

//Operacion de destruccion
//Precondicion: cliente debe haberse creado
//Postcondicion: destruye la estructura cliente
//Parametros:
//pc: TDA cliente a destruir
//Devuelve NULL
clientePtr destruirCliente(clientePtr pc);

//Operacion de mostrar
//Precondicion: que cliente haya sido creado
//Postcondicion: muestra por consola el cliente definido
//Parametros:
//pc: TDA cliente a mostrar
//No devuelve valor
void mostrarCliente(clientePtr pc);

//Operacion de asignacion
//Precondicion: cliente debe haberse creado
//Postcondicion: setea el nombre del cliente
//Parametros:
//pc: TDA cliente donde se seteará el nombre
//nombre: string que define el nombre del cliente
//No devuelve valor
void setNombreCliente(clientePtr pc, char* nombre);

//Operacion de obtencion
//Precondicion: que nombre haya sido definido y cliente debe haberse creado
//Postcondicion: se obtiene el nombre del cliente
//Parametros:
//pv: TDA cliente del que se obtendrá el nombre
//Devuelve un string
char* getNombreCliente(clientePtr pc);

//Operacion de asignacion
//Precondicion: cliente debe haberse creado
//Postcondicion: setea el apellido del cliente
//Parametros:
//pc: TDA cliente donde se seteará el apellido
//apellido: string que define el apellido del cliente
//No devuelve valor
void setApellidoCliente(clientePtr pc, char* apellido);

//Operacion de obtencion
//Precondicion: que apellido haya sido definido y cliente debe haberse creado
//Postcondicion: se obtiene el apellido del cliente
//Parametros:
//pc: TDA cliente del que se obtendrá el apellido
//Devuelve un string
char* getApellidoCliente(clientePtr pc);

//Operacion de asignacion
//Precondicion: cliente y domicilio deben haberse creado
//Postcondicion: setea el domicilio del cliente
//Parametros:
//pc: TDA cliente donde se seteará el domicilio
//pDomicilio: TDA domicilio que se asignará al cliente
//No devuelve valor
void setDomicilioCliente(clientePtr pc, domicilioPtr pDomicilio);

//Operacion de obtencion
//Precondicion: que domicilio haya sido definido y cliente creado
//Postcondicion: se obtiene el domicilio del cliente
//Parametros:
//pc: TDA cliente del que se obtendrá el domicilio
//Devuelve un puntero a la estructura domicilio
domicilioPtr getDomicilioCliente(clientePtr pc);

//Operacion de asignacion
//Precondicion: cliente y cuil deben haberse creado
//Postcondicion: setea el cuil del cliente
//Parametros:
//pc: TDA cliente donde se seteará el cuil
//pCuil: TDA cuil que se asignará al cliente
//No devuelve valor
void setCuilCliente(clientePtr pc, cuilPtr pCuil);

//Operacion de obtencion
//Precondicion: que cuil haya sido definido y cliente creado
//Postcondicion: se obtiene el cuil del cliente
//Parametros:
//pc: TDA cliente del que se obtendrá el cuil
//Devuelve un puntero a la estructura cuil
cuilPtr getCuilCliente(clientePtr pc);

#endif // TDACLIENTE_H_INCLUDED
