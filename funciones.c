#include <stdio.h>
#include <string.h>
#include "operaciones.h"

//verificacion de usuario y contrasena
int login(){
    char usu1[20]="Camila";
    char usu2[20]="Victor";
    char usu3[20]="Emilio";
    int con1 = 1234;
    int con2 = 4321;
    int con3 = 5678;
    char usuv[20];
    int conv,i1,i2,i3, cont;
    cont = 1;

    do{
        printf("Ingrese el usuario.\n");
        scanf("%s",&usuv);
        printf("Ingrese la contrasena.\n");
        scanf("%d",&conv);
        i1 = strcmp(usuv,usu1);
        i2 = strcmp(usuv,usu2);
        i3 = strcmp(usuv,usu3);

        if(i1==0 && conv == con1){
            printf("Ingreso exitoso.\n");
            cont = cont + 3;
            return 1;
        }else{
            if(i2==0 && conv == con2){
                printf("Ingreso exitoso.\n");
                cont = cont + 3;
                return 1; 
            }else{
                if(i3==0 && conv == con3){
                    printf("Ingreso exitoso.\n");
                    cont = cont + 3;
                    return 1;
                }else{
                    printf("Usuario o contraseña fallidos intento #%d\n",cont);
                    cont = cont + 1;
                    if(cont = 3){
                        printf("Imposible ingresar.\n");
                        return 0;
                    }
                }
            }
        }
    }while(cont<=3);
}

//no recibe ningun valor
void operacionTransporte(){
    int i, ruta;
    float s,desc,t,km;
    for(i=1;i<=5;i++){
        printf("Tipos de rutas:\n");
        printf("1. Urbana\n");
        printf("2. Interurbana\n");
        printf("3. Internacional\n");
        printf("Ingrese el tipo de ruta.\n");
        scanf("%d",&ruta);
        do{
            printf("Ingrese el numero de kilometros.\n");
            scanf("%f",&km);
            if(km<0){
                printf("Dato invalido.\n");
            }
        }while(km<0);
        //asigno los valores de las funciones a variables
        s = precioRuta(ruta, km);
        desc = descuento(km,s);
        t = s - desc;
        printf("Subtotal:%.2f\n",s);
        printf("Descuento: %.2f\n",desc);
        printf("Total: %.2f\n",t);
    }
}
//no recibe ningun dato, solo imprime cantidad de publicaciones
void redSocial(){
int i,cat,n, e , p;
char cont[200];
  n = 0;
  e = 0;
  p = 0;
    for(i=1;i<=5;i++){
        printf("Elija el tipo de publicacion.\n1.Noticias\n2.Eventos\n3.Preguntas\n");
        scanf("%d",&cat);
        if(cat==1){
            n = n+1;
        }else{
            if(cat == 2){
                e = e + 1;
            }else{
              if(cat == 3){
                p = p + 1;
              }
            }
        }
        printf("Ingrese el contenido:\n");
        scanf("%s",&cont);
      fflush(stdin);
    }
    printf("Noticias: %d\n",n);
    printf("Eventos: %d\n",e);
    printf("Preguntas: %d\n",p);
}

//no recibe ningun dato
void Menu(){
    int opc;
    do{
        printf("Menu de opciones.\n");
        printf("1. Operacion de transporte.\n");
        printf("2. Interactuar con la red social.\n");
        printf("3. Salir\n");
        do{
            printf("Elija la opcion.\n");
            scanf("%d",&opc);
            if(opc<=0 || opc>=4){
                printf("Dato incorrecto.\n");
            }
        }while(opc<=0 || opc>=4);

        switch(opc){
            case 1:
            operacionTransporte();
            break;
            case 2:
            redSocial();
            break;
            case 3:
            printf("Saliste del menu\n");
            break;

        }

    }while(opc!=3);
}