#ifndef TDADOMICILIO_H_INCLUDED
#define TDADOMICILIO_H_INCLUDED

typedef struct domicilio{
    char* calle;
    int altura;
    char* localidad;
}domicilio;

typedef domicilio* domicilioPtr;

//Operacion de creacion (constructor)
//Precondicion: Domicilio no ha sido creado
//Postcondicion: Se crea un espacio en memoria para el TDA domicilio
//Parametros:
// calle: string que representa el nombre de la calle
// altura: entero que representa la altura de la casa
// localidad: string que representa la localidad de la casa
//Devuelve un puntero a la estructura "domicilio" en memoria dinamica
domicilioPtr crearDomicilio(char* calle, int altura, char* localidad);

//Operacion de destruccion
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Se libera el espacio reservado en memoria de la estructura "domicilio"
//Parametros:
// pd: TDA Domicilio que será liberado en memoria
//Devuelve NULL
domicilioPtr destruirDomicilio(domicilioPtr pd);

//Operacion de seteo
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Setea la calle para el domicilio
//Parametros:
// calle: string que representará a la calle
//No devuelve valor
void setCalle(domicilioPtr pd, char* calle);

//Operacion de seteo
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Setea la altura del domicilio
//Parametros:
// altura: entero que representa la altura
//No devuelve valor
void setAltura(domicilioPtr pd, int altura);

//Operacion de seteo
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Setea la localidad del domicilio
//Parametros:
// localidad: string que representa la localidad
//No devuelve valor
void setLocalidad(domicilioPtr pd, char* localidad);

//Operacion de obtencion
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Se obtiene la calle del domicilio
//Parametros:
// pd: TDA Domicilio donde se buscara el string calle
//Devuelve un string que representa la calle
char* getCalle(domicilioPtr pd);

//Operacion de obtencion
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Se obtiene la altura del domicilio
//Parametros:
// pd: TDA Domicilio donde se buscara la altura
//Devuelve un entero que representa la altura del domicilio
int getAltura(domicilioPtr pd);

//Operacion de obtencion
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Se obtiene la localidad del domicilio
//Parametros:
// pd: TDA Domicilio donde se buscara la localidad
//Devuelve un string que representa la altura del domicilio
char* getLocalidad(domicilioPtr pd);

//Operacion de obtencion
//Precondicion: Domicilio debe haberse creado
//Postcondicion: Muestra por pantalla los datos del domicilio
//Parametros:
// pd: TDA Domicilio el cual se mostrará por pantalla
//No devuelve valor
void mostrarDomicilio(domicilioPtr pd);

#endif // TDADOMICILIO_H_INCLUDED
