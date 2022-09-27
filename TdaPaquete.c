#include <stdio.h>
#include <stdlib.h>
#include "Util.h"
#include "TdaPaquete.h"
#include <string.h>
#include <time.h>

srand(time(NULL));

paquetePtr crearPaquete(float Alto, float Ancho, float Altura, float Peso){
    paquetePtr paquete1=(paquetePtr)obtenerMemoria(sizeof(paquete));
    paquete1->alto=Alto;
    paquete1->ancho=Ancho;
    paquete1->altura=Altura;
    paquete1->peso=Peso;
    paquete1->numeroSerial=rand()%1000;
    return(paquete1);
}
 paquetePtr destruirPaquete(paquetePtr pp){
    free(pp);
    return NULL;
 }

 void setAlto(paquetePtr pp, float Alto){
    pp->alto=Alto;
}

void setAncho(paquetePtr pp, float Ancho){
    pp->ancho=Ancho;
}

void setAlturaPaquete(paquetePtr pp, float Altura){
    pp->altura=Altura;
}

void setPeso(paquetePtr pp, float Peso){
    pp->peso=Peso;
}


float getAlto(paquetePtr pp){
    return(pp->alto);
}

float getAncho(paquetePtr pp){
    return(pp->ancho);
}

float getAlturaPaquete(paquetePtr pp){
    return(pp->altura);
}

float getPeso(paquetePtr pp){
    return(pp->peso);
}

int getNumeroSerial(paquetePtr pp){
    return(paquete->numeroSerial);
}



