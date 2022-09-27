#ifndef TDA_FECHA_H_INCLUDED
#define TDA_FECHA_H_INCLUDED

typedef struct Fecha {
    int diaJuliano;
} Fecha;

// Typedef de puntero al tipo de ato
typedef Fecha* FechaPtr;

// Primitivas

// Operaci�n de creaci�n (Constructor)
// Precondicion: la fecha no ha sido creada
// Postcondici�n: se crea una fecha con d�a, mes y a�o
// Par�metros:
//  dia: entero representando el d�a del mes
//  mes: entero representando el mes
//  anio: entero representando el anio
// Devuelve puntero a la estructura Fecha en memoria din�mica
FechaPtr crearFecha(int dia, int mes, int anio);

// Operaci�n de destrucci�n (Destructor)
// Precondicion: fecha debe haberse creado con crearFecha
// Postcondici�n: se destruye fecha y se libera la memoria que ocupaba
// Par�metros:
//  fecha: TDAFecha a destruir
// Devuelve NULL
FechaPtr destruirFecha(FechaPtr fecha);

// Operaci�n de obtenci�n de d�a del mes
// Precondicion: fecha debe haberse creado
// Postcondici�n: se obtiene el d�a del mes de fecha
// Par�metros:
//  fecha: TDAFecha del que es obtiene el d�a
// Devuelve un entero representando el d�a del mes
int getDia(FechaPtr fecha);

// Operaci�n de obtenci�ndel mes
// Precondicion: fecha debe haberse creado
// Postcondici�n: se obtiene el mes de fecha
// Par�metros:
//  fecha: TDAFecha del que es obtiene el mes
// Devuelve un entero representando el mes
int getMes(FechaPtr fecha);

// Operaci�n de obtenci�n de a�o
// Precondicion: fecha debe haberse creado
// Postcondici�n: se obtiene el a�o de fecha
// Par�metros:
//  fecha: TDAFecha del que es obtiene el a�o
// Devuelve un entero representando el a�o
int getAnio(FechaPtr fecha);

// Operaci�n de asignaci�n de d�a
// Precondicion: fecha debe haberse creado
// Postcondici�n: fecha cambia con el nuevo valor de dia
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor de dia
//  dia: entreo representando el nuevo valor de d�a del mes
// No devuelve valor.
void setDia(FechaPtr fecha, int dia);

// Operaci�n de asignaci�n de mes
// Precondicion: fecha debe haberse creado
// Postcondici�n: fecha cambia con el nuevo valor de mes
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor de mes
//  dia: entreo representando el nuevo valor del mes
// No devuelve valor.
void setMes(FechaPtr fecha, int mes);

// Operaci�n de asignaci�n de a�o
// Precondicion: fecha debe haberse creado
// Postcondici�n: fecha cambia con el nuevo valor de a�o
// Par�metros:
//  fecha: TDAFecha al que se asignara el nuevo valor de a�o
//  dia: entreo representando el nuevo valor de a�o
// No devuelve valor.
void setAnio(FechaPtr fecha, int anio);

// Operaci�n de resta de fechas
// Precondicion: fecha1 y fecha2 deben haberse creado
// Postcondici�n: se obtiene la diferencia entre ambdas fechas (fecha1-fecha2) en d�as
// Par�metros:
//  fecha1: TDAFecha al que se restar� fecha2
//  fecha2: TDAFecha que restar� a fecha1
// Devuelve un entero representando la diferencia en d�as
int calcularDiferenciaFechas(FechaPtr fecha1, FechaPtr fecha2);


// Operaci�n de conversi�n a string
// Precondicion: fecha debe haberse creado
// Postcondici�n: se obtiene la representaci�n "dd/mm/aaaa" de la fecha
// Par�metros:
//  fecha: TDAFecha a convertir
//  Buffer: buffer de memoria con capacidad para 11 char
// No devuelve valor.
void traerFechaCorta(FechaPtr fecha, char* buffer);

// Operaci�n de conversi�n a string
// Precondicion: fecha debe haberse creado
// Postcondici�n: se obtiene la representaci�n "dd/mm/aaaa" de la fecha en memoria din�mica
// Par�metros:
//  fecha: TDAFecha a convertir
// Devuelve puntero a la representaci�n como srtring en memoria din�mica
// **** Recordar liberar memoria luego de utilizar ****//
char* traerFechaCortaDinamica(FechaPtr fecha);


#endif // TDA_FECHA_H_INCLUDED
