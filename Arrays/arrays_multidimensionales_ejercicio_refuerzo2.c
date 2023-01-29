

// Escribe un programa para trabajar sobre un arreglo de 10 elementos 
// en el cual se solicite al usuario los valores del array y posteriormente
//se puedan hacer las siguinetes operaciones:

/*

1) ingresar o modificar elementos del array 
2) mostrar la suma de los elementos
3) realizar la multiplicacion de los elementos
4) realizar la suma solo de los elementos divisbles netre 3
5) multiplicar por 3 cada elemento del arreglo

El usuaro seleccionará la opcion de su preferencia y el programa mostrara los datos del arreglo 
original y el resulatado de la opcuion seleccionada
el programa debe realizarse en un menu que debe ejecutarse continuamente hasta que el usuario
decida salir
*/

#include <stdio.h>

int main(){

    int arreglo1[10];
    int bucle = 1;
    int opcion;




    printf("Este programa ejecuta operaciones sobre un arreglo de 10 elementos\n ");


    for (int i = 0; i < 10; i++){   // O i <= 9
         
         printf("Escribe el elemento [%i] del arreglo\n",i);
         scanf("%i",&arreglo1[i]);
    }


    while (bucle = 1){    // No hace falta poner el = 1

        printf("Selecciona la opcion que quieres \n\n");
        printf("1) Ingresar o modificar elementos del arreglo\n2) Mostrar la suma de los elementos\n");
        printf("3) Realizar la multiplicacion de los elementos\n4) Realizar la suma solo de los elementos divisible entre 3\n");
        printf("5) Multiplicar por 3 cada elemento del arreglo\n0) Salir");

        scanf("%i",&opcion);

        switch (opcion){

            case 1:

            printf("1) Ingresar o modificar elementos del arreglo\n");

                break;

            case 2: 

                break;

            case 3:

                break;

            case 4:

                break;

             case 5:

                break;

             case 0:

                bucle = 0;
                break;

             default:

             printf("Opcion no valida\n");
             break;                      
        }
    }





    return 0;
}


void DatoaArreglo(){   // Va a recibir datos, por eso es void


}