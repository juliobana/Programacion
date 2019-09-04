#include <stdio.h>
#include <stdio_exe.h>
#include <stdlib.h>
#define QTY_EDADES 5
int main()
{
    //array = direccion de memoria del primer elemento
    int edades [QTY_EDADES]
    edades[4] = 22; //agrego en la posicion 4 el numero 22 -

    for(i=0;i<QTY_EDADES;i++) //agrego en las 5 posiciones el numero 14
    {
        edades[i] = 14;
        edades === &edades[0]// array sin nada es el primer elemento de la direccion de memoria(uno esta a continuacion del otro)
                                // las dos son la misma
        //edades+4
    }
    return retorno;

    // 1 -inicializar array int 2- cantidad de elementos 3(limite) - posibilidad de pasar como parametros
    // el array y el limite siempre tengo que pasar como parametro

    int initArrayInt(int array[], int limite, int valor){
        int retorno = -1;
        int i;
        for(i=0;i<QTY_EDADES;i++)
    {
        pArray[i]=14
    }
// imprime
    int initArrayInt(int *pArray, int limite, int valor){
    int retorno = -1;
        int i;
        printf("\n\DEBUG\n")
        if(pArray != NULL && limite >0){
        for(i=0;i<limite;i++){
            printf("\n\t%i",pArray[i])
        }retorno=0;
        }return retorno;

    }



    int getArrayInt(int *pArray, int limite){
    int retorno = -1;
    int i;
    char respuesta;
    // hacer get char funcion


        do{

            printf("Continuar?"\n);
            _fpurge(stdin); //fflush(stdin)
            scanf("%c",&respuesta);

        }while(respuesta != "n");

        }retorno=0;
        }return retorno;

    }
}
