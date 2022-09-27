#ifndef HEADERS_IVAN_H_INCLUDED
#define HEADERS_IVAN_H_INCLUDED

typedef struct cliente{
    char* nombre;
    char* apellido;
    domicilio;
    cuit;
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
clientePtr crearCliente(char* nombre. char* apellido,);

//Operacion de destruccion
//Precondicion: cliente debe haberse creado
//Postcondicion: destruye la estructura cliente
//Parametros:
//pc: TDA cliente a destruir
//Devuelve NULL
int destruirCliente(clientePtr pc);

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
void setNombre(clientePtr pc,char* nombre);

//Operacion de obtencion
//Precondicion: que nombre haya sido definido y cliente debe haberse creado
//Postcondicion: se obtiene el nombre del cliente
//Parametros:
//pv: TDA cliente del que se obtendrá el nombre
//nombre: string que define el nombre del cliente
//Devuelve un string
char* getNombre(clientePtr pc, char* nombre);

//Operacion de asignacion
//Precondicion: cliente debe haberse creado
//Postcondicion: setea el apellido del cliente
//Parametros:
//pc: TDA cliente donde se seteará el apellido
//apellido: string que define el apellido del cliente
//No devuelve valor
void setApellido(clientePtr pc, char* apellido);

//Operacion de obtencion
//Precondicion: que apellido haya sido definido y cliente debe haberse creado
//Postcondicion: se obtiene el apellido del cliente
//Parametros:
//pc: TDA cliente del que se obtendrá el apellido
//apellido: string que define el apellido del cliente
//Devuelve un string
char* getApellido(clientePtr pc, char* apellido);

typedef struct hora{
    int hora1;
}hora;

typedef hora1* horaPtr;

//Operacion de creacion
//Precondicion: que hora no haya sido creada
//Postcondicion: se crea una hora
//Parametros:
//hora1: array que representa la hora
//Devuelve un puntero al entero "hora" en memoria dinamica
horaPtr crearHora(int hora1);

//Operacion de destruccion
//Precondicion: que hora haya sido creada
//Postcondicion: destruye la estructura hora
//Parametros:
//hora1: array que representa la hora
//Devuelve NULL
int destruirHora(horaPtr ph);

//Operacion de asignacion
//Precondicion: que hora no haya sido definida
//Postcondicion: setea la hora
//Parametros:
//ph: TDA hora a la que se le asigna valor
//hora1: array que representa la hora
//No devuelve valor
void setHora(horaPtr ph, int hora1);

//Operacion de obtencion
//Precondicion: que hora haya sido definida
//Postcondicion: se obtiene la hora
//Parametros:
//ph: TDA hora a la que se le asigna valor
//hora1: entero que representa la hora
//Devuelve un entero
int getHora(horaPtr ph,int hora1);

//Operacion de diferencia
//Precondicion: que ambas variables hayan sido creadas y definidas
//Postcondicion: se hace la diferencia entre las dos horas
//Parametros:
//hora1: TDA hora que representa una de las horas
//hora2: TDA hora que representa la otra hora
//Devuelve un entero con la diferencia entre ambas horas
int diferenciaHoras(horaPtr hora1, horaPtr hora2);

#endif // HEADERS_IVAN_H_INCLUDED
