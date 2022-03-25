//1.- Librerias
#include<stdio.h>

/**  
 * 2.- programa 5 capitulo 10
 * 
 * Programar la computadora para que "dibuje" 
 * un cuadro en la terminal.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/

// 4.- Funciones y procedimientos
int main()
{
    int i, j, Side;

    printf("Proporcione la longitud que debe tener un lado, por ejemplo, 4: \n");
    scanf("%d", &Side);

    for(i = 0; i < Side; i++)
    {
        for(j = 0; j < Side; j++)
        {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}