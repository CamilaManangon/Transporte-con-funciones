#include <stdio.h>
#include <string.h>

//recibe el tipo de ruta y los km
float precioRuta(int ruta, float km){
    float p;
    if(ruta==1){
        p = 0.10 * km;
    }else{
        if(ruta == 2){
            p = 0.15*km;
        }else{
            if(ruta == 3){
                p = 0.20 * km;
            }
        }
    }
    return p;
}
//recibe los km y el total calculado el precioRuta
float descuento(float km, float s){
    float desc;
    if(km<50){
        desc = 0;
    }else{
        if(km>=5 && km<=99.99){
            desc = s * 0.05;
        }else{
            if(km>=100 && km<=499.99){
                desc = s * 0.1;
            }else{
                if(km>=500){
                    desc = s * 0.2;
                }
            }
        }
    }
    return desc;
}