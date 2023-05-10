//Andrea Manangon
//Thommy Calderon
//Andres Zurita

#include <stdio.h>
#include <string.h>
#include "funciones.h"


int main(void){
    //de acuerdo a dato de login sale el menu
    if(login()==1){
        Menu();
    }else{
        printf("No se pude ingresar.\n");
    }
    return 0;
}