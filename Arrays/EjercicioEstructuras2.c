

// Creacion de un arreglo de estructuras

/*Crear la estrucuctura asignatura
Agregar la estructura alumno a un arreglo de asignaturas
Inizializar alumnos con sus respectivas materias
Permitir al usuario ver las materias
Permitir al usuario modificarlas
Permitir al usuario crear alimnmos con sus materias desde 0*/


#include <stdio.h>
#include <string.h>





typedef struct Asignatura{
    char Materia[30];

}Asignatura;


typedef struct Alumno{
    Asignatura Asignaturas[5];

}Alumno;





int main(){

    //!Alumno Nuevo;//
    //!char AlumnoNuevo[20];//

    Alumno Jorge,Juan; // int Jorge, Juan

    //Inicializar los alumnos

    strcpy(Jorge.Asignaturas[0].Materia,"Matemáticas");
    strcpy(Jorge.Asignaturas[1].Materia,"Física");
    strcpy(Jorge.Asignaturas[2].Materia,"Química");


    strcpy(Juan.Asignaturas[0].Materia,"Musica");
    strcpy(Juan.Asignaturas[1].Materia,"Ingles");
    strcpy(Juan.Asignaturas[2].Materia,"Programacion");

    printf("Este programa te permite ver las materias, modificarlas y crear alumnos\n");
    printf("Selecciona la opcion que quieras\n");
    printf("1)Ver materias\n2)Modificarlas\n3)Crear alumnos con materias\n0)Salir");


    int opcion;
    scanf("%d",&opcion);

    switch (opcion)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    





    








    return 0;
}