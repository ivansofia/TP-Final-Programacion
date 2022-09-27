#ifndef TDAPAQUETE_H_INCLUDED
#define TDAPAQUETE_H_INCLUDED

typedef struct paquete{
    float alto;
    float ancho;
    float altura;
    float peso;
    int numeroSerial;
}paquete;

typedef paquete* paquetePtr;

//Operacion de creacion
//Precondicion: Paquete no ha sido creado
//Postcondicion: se crea el paquete con alto, ancho, altura y peso
//Parametros:
// alto: float que representa el alto del paquete
// ancho: float que representa el ancho del paquete
// altura: float que representa la altura del paquete
// peso: float que representa el peso del paquete
//Devuelve un puntero a la estructura paquete
paquetePtr crearPaquete(float alto, float ancho, float altura, float peso);

//Operacion de destruccion
//Precondicion: paquete debe haberse creado
//Postcondicion: destruye la estructura paquete
//Parametros:
// pv: TDA paquete a destruir
//Devuelve NULL
paquetePtr destruirPaquete(paquetePtr pp);

//Operacion de asignacion
//Precondicion: paquete debe haberse creado
//Postcondicon: setea el alto del paquete
//Parametros:
// alto: float que define el alto del paquete
//No devuelve valor
void setAlto(paquetePtr pp, float alto);

//Operacion de obtencion
//Precondicion: paquete debe haberse creado
//Postcondicion: se obtiene el alto del paquete
//Parametros:
// pp: TDA paquete del que se obtendrá el alto
//Devuelve el float alto
float getAlto(paquetePtr pp);

//Operacion de asignacion
//Precondicion: paquete debe haberse creado
//Postcondicon: setea el ancho del paquete
//Parametros:
// pp: TDA paquete donde se seteará el ancho
// ancho: float que define el ancho del paquete
//No devuelve valor
void setAncho(paquetePtr pp, float ancho);

//Operacion de obtencion
//Precondicion: paquete debe haberse creado
//Postcondicion: se obtiene el ancho del paquete
//Parametros:
// pp: TDA paquete del que se obtendrá el ancho
//Devuelve el float ancho
float getAncho(paquetePtr pp);

//Operacion de asignacion
//Precondicion: paquete debe haberse creado
//Postcondicon: setea la altura del paquete
//Parametros:
// pp: TDA paquete donde se seteará la altura
// altura: float que define la altura del paquete
//No devuelve valor
void setAlturaPaquete(paquetePtr pp, float altura);

//Operacion de obtencion
//Precondicion: paquete debe haberse creado
//Postcondicion: se obtiene la altura del paquete
//Parametros:
// pp: TDA paquete del que se obtendrá la altura
//Devuelve el float altura
float getAlturaPaquete(paquetePtr pp);

//Operacion de asignacion
//Precondicion: paquete debe haberse creado
//Postcondicon: setea el peso del paquete
//Parametros:
// pp: TDA paquete donde se seteará el peso
// peso: float que define el peso del paquete
//No devuelve valor
void setPeso(paquetePtr pp, float peso);

//Operacion de obtencion
//Precondicion: paquete debe haberse creado
//Postcondicion: se obtiene el peso del paquete
//Parametros:
// pp: TDA paquete del que se obtendrá la altura
//Devuelve el float peso
float getPeso(paquetePtr pp);

//Operacion de obtencion
//Precondicion: Paquete debe haberse creado
//Postcondicion: se obtiene el numero serial del paquete
//Parametros:
//pp: TDA paquete del que se obtendrá el numero serial
//Devuelve un entero con el numero serial
int getNumeroSerial(paquetePtr pp);

#endif // TDAPAQUETE_H_INCLUDED
