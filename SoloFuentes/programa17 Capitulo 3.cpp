//1-Librerias

#include<stdio.h>

/**  
 * 2.- programa 17 capitulo 3
 * Introducir las longitudes de los lados de untriángulo. 
 * Determinar si el triángulo es isósceles, equilatero 
 * o escaleno.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/

// 4.- Funciones y procedimientos

int main(void){
int a, b, c;
printf("\n Ingrese primer num ");
scanf("%d",&a);
setbuf ( stdin, NULL );
printf("\n Ingrese segundo num ");
scanf("%d",&b);
setbuf ( stdin, NULL );
printf("\n Ingrese tercer num ");
scanf("%d",&c);
setbuf ( stdin, NULL );
if(a==b&&a==c)
{
printf("\n El triangulo es equilatero");
}
else if(a==b||a==c||b==c)
{
printf("\n El triangulo es isosceles");
}
else if(a!=b&&a!=b&&b!=c)
{
printf("\n El triangulo es escaleno");
}
setbuf ( stdin, NULL );
getchar();

}