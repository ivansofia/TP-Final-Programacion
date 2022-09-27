#ifndef TDAHORA_H_INCLUDED
#define TDAHORA_H_INCLUDED


typedef struct hora{
    int hora1;
    int minuto1;
}hora;

typedef hora* horaPtr;

//Operacion de creacion
//Precondicion: que hora no haya sido creada
//Postcondicion: se crea una hora
//Parametros:
//hora1: entero que representa la hora
//minuto1: entero que representa los minutos
//Devuelve un puntero al entero "hora" en memoria dinamica
horaPtr crearHora(int hora1, int minuto1);

//Operacion de destruccion
//Precondicion: que hora haya sido creada
//Postcondicion: destruye la estructura hora
//Parametros:
//hora1: entero que representa la hora
//Devuelve NULL
horaPtr destruirHora(horaPtr ph);

//Operacion de asignacion
//Precondicion: que hora no haya sido definida
//Postcondicion: setea la hora
//Parametros:
//ph: TDA hora a la que se le asigna valor
//hora1: entero que representa la hora
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

//Operacion de asignacion
//Precondicion: que minutos no haya sido definida
//Postcondicion: setea los minutos
//Parametros:
//ph: TDA hora a la que se le asigna valor
//hora1: entero que representa los minutos
//No devuelve valor
void setMinutos(horaPtr ph, int minuto1);

//Operacion de obtencion
//Precondicion: que minuto haya sido definida
//Postcondicion: se obtienen los minutos
//Parametros:
//ph: TDA hora a la que se le asigna valor
//hora1: entero que representa los minutos
//Devuelve un entero
int getMinutos(horaPtr ph,int minuto1);

//Operacion de diferencia
//Precondicion: que ambas variables hayan sido creadas y definidas
//Postcondicion: se hace la diferencia entre las dos horas
//Parametros:
//hora1: TDA hora que representa una de las horas
//hora2: TDA hora que representa la otra hora
//Devuelve un entero con la diferencia entre ambas horas
int diferenciaHoras(horaPtr hora1, horaPtr hora2);

//Operacion de conversion
//Precondicion: que minutos haya sido creada
//Postcondicion: se convierten los minutos en horas
//Parametros:
//minutos: entero que representa minutos
//Devuelve un entero
int devolverHoras(int minutos);

//Operacion de conversion
//Precondicion: que minutos haya sido creada
//Postcondicion: se devuelve el resto de minutos
//Parametros:
//minutos: entero que representa minutos
//Devuelve un entero
int devolverMinutos(int minutos);


//Operacion de conversion
//Precondicion:que horas y minutos esten definidos
//Postcondicion: pasa las horas y los minutos a segundos
//Parametros:
//horas: entero que representa las horas
//minutos: entero que representa los minutos
//Devuelve un entero
int pasarSegundos(int horas, int minutos);

//Operacion de mostrar
//Precondicion: que la estructura hora haya sido creada
//Postcondicion: muestra por pantalla la hora
//Parametros:
//hora1: puntero a la estructura hora
//No devuelve valor
void mostrarHora(horaPtr hora1);


#endif // TDAHORA_H_INCLUDED
