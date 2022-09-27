#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED
#include <stdbool.h>

typedef struct cuil{
    char* cuilCuit;
}cuil;

typedef cuil* cuilPtr;

//Operacion de creacion
//Precondicion: Cuil no ha sido creado
//Postcondicion: Se reserva espacio en memoria para la estructura "cuil"
//Parametros:
// cuilCuit: string que representa el cuil/cuit del usuario
//Devuelve un puntero a la estructura cuil en memoria dinamica
cuilPtr crearCuil(char* cuilCuit);

//Operacion de destruccion
//Precondicion: Cuil debe haberse creado
//Postcondicion: Se libera el espacio de la memoria ocupada por "cuil"
//Parametros:
// pc: TDA Cuil que será liberado
//Devuelve NULL
cuilPtr destruirCuil(cuilPtr pc);

//Operacion de seteo
//Precondicion: Cuil debe haberse creado
//Postcondicion: Setea el cuil/cuit del usuario
//Parametros:
// pc: TDA Cuil en el que se pondrá el cuil del usuario
// cuilCuit: string que representa el cuil
//No devuelve valor
void setCuil(cuilPtr pc, char* cuilCuit);

//Operacion de obtencion
//Precondicion: Cuil debe haberse creado
//Postcondicion: Se obtiene el cuil
//Parametros:
// pc: TDA Cuil del que se obtendrá el cuil
//Devuelve el cuil
char* getCuil(cuilPtr pc);

//Operacion de verificacion
//Precondicion: Cuil debe haberse creado
//Postcondicion: Se verifica que el ultimo numero del cuil sea correcto
//Parametros:
// pc: TDA Cuil del que se verficará el ultimo numero
//No devuelve valor
bool verificarCuil(cuilPtr pc);


#endif // TDACUIL_H_INCLUDED
