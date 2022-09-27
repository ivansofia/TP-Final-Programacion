#ifndef TDA_VEHICULO_H_INCLUDED
#define TDA_VEHICULO_H_INCLUDED

typedef struct vehiculo{
    char* tipo;
    char* marca;
    char* modelo;
    char* patente;
}vehiculo;

typedef vehiculo* vehiculoPtr;

//Operacion de creacion
//Precondicion: vehiculo no ha sido creado
//Postcondicion: se crea un TDA vehiculo
//Parametros:
// tipo: string que representa el tipo de vehiculo
// marca: string que representa la marca del vehiculo
// modelo: string que representa el modelo del vehiculo
// patente: string que representa la patente del vehiculo
//Devuelve un puntero a la estructura vehiculo en memoria dinamica
vehiculoPtr crearVehiculo(char* tipo, char* marca, char* modelo, char* patente);

//Operacion de destruccion
//Precondicion: vehiculo debe haberse creado
//Postcondicion: destruye la estructura vehiculo
//Parametros:
// pv: TDA vehiculo a destruir
//Devuelve NULL
vehiculoPtr destruirVehiculo(vehiculoPtr pv);

//Operacion de mostrar
//Precondicion: vehiculo debe haberse creado
//Postcondicion: muestra el vehiculo definido
//Parametros:
// pv: TDA vehiculo a mostrar
//No devuelve valor
void mostrarVehiculo(vehiculoPtr pv);

//Operacion de asignacion
//Precondicion: vehiculo debe haberse creado
//Postcondicon: setea el tipo de vehículo
//Parametros:
// pv: TDA vehiculo en el que se setea el tipo de vehiculo
// tipo: string que define el tipo de vehiculo
//No devuelve valor
void setTipo(vehiculoPtr pv,char* tipo);

//Operacion de asignacion
//Precondicion: vehiculo debe haberse creado
//Postcondicon: setea la marca del vehículo
//Parametros:
// pv: TDA vehiculo en el que se setea la marca
// marca: string que define la marca del vehiculo
//No devuelve valor
void setMarca(vehiculoPtr pv,char* tipo);

//Operacion de asignacion
//Precondicion: vehiculo debe haberse creado
//Postcondicon: setea el modelo del vehículo
//Parametros:
// pv: TDA vehiculo en el que se setea el modelo
// modelo: string que define el modelo del vehiculo
//No devuelve valor
void setModelo(vehiculoPtr pv,char* tipo);

//Operacion de asignacion
//Precondicion: vehiculo debe haberse creado
//Postcondicon: setea la patente del vehículo
//Parametros:
// pv: TDA vehiculo en el que se setea la patente
// patente: string que define la patente del vehiculo
//No devuelve valor
void setPatente(vehiculoPtr pv,char* tipo);

//Operacion de obtencion
//Precondicion: vehiculo debe haberse creado
//Postcondicion: se obtiene el tipo del vehiculo
//Parametros:
// pv: TDA vehiculo del que se obtiene el tipo
// tipo: string que define el tipo de vehiculo
//Devuelve el string tipo
char* getTipo(vehiculoPtr pVehiculo);

//Operacion de obtencion
//Precondicion: vehiculo debe haberse creado
//Postcondicion: se obtiene la marca del vehiculo
//Parametros:
// pv: TDA vehiculo del que se obtiene la marca
// marca: string que define la marca del vehiculo
//Devuelve el string tipo
char* getMarca(vehiculoPtr pVehiculo);

//Operacion de obtencion
//Precondicion: vehiculo debe haberse creado
//Postcondicion: se obtiene el modelo del vehiculo
//Parametros:
// pv: TDA vehiculo del que se obtiene el modelo
// modelo: string que define el modelo del vehiculo
//Devuelve el string tipo
char* getModelo(vehiculoPtr pVehiculo);

//Operacion de obtencion
//Precondicion: vehiculo debe haberse creado
//Postcondicion: se obtiene la patente del vehiculo
//Parametros:
// pv: TDA vehiculo del que se obtiene la patente
// patente: string que define la patente del vehiculo
//Devuelve el string tipo
char* getPatente(vehiculoPtr pVehiculo);

#endif // TDA_VEHICULO_H_INCLUDED
