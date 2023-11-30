//Definimos las librerias para poner numeros aleatorios//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Ahora creamos las variables que vamos a usar//
 int main(int argc, char const *argv[])
 {
    int x;
    int y;
    int z;
//Pedimos los datos al usuario //

    printf("Ingrese el numero de filas");
    scanf("%d", &x);
    printf("Ingrese el numero de columnas");
    scanf("%d", &y);
//Creamos la matriz con x y z//
    int matriz [x][y][z];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                /* code */
            }
            
        }
        
    }
    

    return 0;
 }
 

