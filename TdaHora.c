#include <stdio.h>
#include <stdlib.h>
#include "Util.h"
#include "TdaHora.h"


horaPtr crearHora(int hora1, int minuto1){
    horaPtr horas=(horaPtr)obtenerMemoria(sizeof(hora));
    horas->hora1=hora1;
    horas->minuto1=minuto1;

    return horas;
}

horaPtr destruirHora(horaPtr ph){
    free(ph);
    return NULL;
}

void setHora(horaPtr ph, int hora1){
    ph->hora1=hora1;
}

int getHora(horaPtr ph,int hora1){
    return(ph->hora1);
}

void setMinutos(horaPtr ph, int minuto1){
    ph->minuto1=minuto1;
}

int getMinutos(horaPtr ph,int minuto1){
    return(ph->minuto1);
}

int diferenciaHoras(horaPtr hora1, horaPtr hora2){
    int segundos1=hora1->hora1*60;
    int segundos2=hora2->hora1*60;
    segundos1+=hora1->minuto1;
    segundos2+=hora2->minuto1;
    segundos1*=60;
    segundos2*=60;
    int acumuladorMinutos=(segundos1-segundos2)/60;
    return acumuladorMinutos;
}

int devolverHoras(int minutos){
    return(minutos/60);
}

int devolverMinutos(int minutos){
    return(minutos%60);
}

int pasarSegundos(int horas, int minutos){
    horas*=60;
    horas+=minutos;
    horas*=60;
    return horas;
}

void mostrarHora(horaPtr hora1){
    if(hora1->minuto1<10){
        printf("Hora=%d:%d%d", hora1->hora1, 0, hora1->minuto1);
    }
    else{
        printf("Hora=%d:%d", hora1->hora1, hora1->minuto1);
    };
}
