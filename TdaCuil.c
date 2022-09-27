#include <stdio.h>
#include <stdlib.h>
#include "TdaCuil.h"
#include "Util.h"
#include <stdbool.h>
#include <string.h>

cuilPtr crearCuil(char* cuilCuit){
    cuilPtr pc=(cuilPtr)obtenerMemoria(sizeof(cuil));
    pc->cuilCuit=crearStringDinamico(cuilCuit);
    //strcpy(pc->cuilCuit,cuilCuit);
    return(pc);
}

cuilPtr destruirCuil(cuilPtr pc){
    free(pc->cuilCuit);
    free(pc);
    return NULL;
}

void setCuil(cuilPtr pc, char* cuilCuit){
    strcpy(pc->cuilCuit,cuilCuit);
}

char* getCuil(cuilPtr pc){
    return(pc->cuilCuit);
}

bool verificarCuil(cuilPtr pc){

    int a;
    int hombre=(pc->cuilCuit[1]-48);
    int mujer=(pc->cuilCuit[1]-48);

    int b=pc->cuilCuit[10]-48;

    a=(pc->cuilCuit[0]-48)*5;
    a+=(pc->cuilCuit[1]-48)*4;
    a+=(pc->cuilCuit[2]-48)*3;
    a+=(pc->cuilCuit[3]-48)*2;
    a+=(pc->cuilCuit[4]-48)*7;
    a+=(pc->cuilCuit[5]-48)*6;
    a+=(pc->cuilCuit[6]-48)*5;
    a+=(pc->cuilCuit[7]-48)*4;
    a+=(pc->cuilCuit[8]-48)*3;
    a+=(pc->cuilCuit[9]-48)*2;
    a=a%11;
    if(a!=b){
        a=11-a;
    }
    if(a==0){
        b=0;
    }
    if(a==1 && hombre==7){
        b=9;
        hombre=3;
    }
    if(a==1 && mujer==9){
        b=4;
        mujer==3;
    }
    if(a!=b){
        return(false);
    }
    return(true);
}
