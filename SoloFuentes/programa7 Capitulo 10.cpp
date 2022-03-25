//1.- Librerias
#include <stdio.h>  
#include <stdlib.h> 
#include <unistd.h> 

/**  
 * 2.- programa 7 capitulo 10
 * Correr un programa que pida a dos jugadores
 * que adivinen un número que la computadora
 * saque al azar entre 1 y 75. El programa dará 15
 * puntos al jugador que dé la respuesta más
 * próxima.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/

// 4.- Funciones y procedimientos
#define INTENTOS_MAXIMOS 5
#define INFERIOR 1 
#define SUPERIOR 75 
int aleatorio_en_rango(int minimo, int maximo);


int main() {
  
  srand(getpid());
  
  int secreto = aleatorio_en_rango(INFERIOR, SUPERIOR);
  
  int respuesta, intentos = 0;

  
  printf("He seleccionado un número al azar entre %d y %d, tu tarea es "
         "adivinarlo en máximo %d intentos\n",
         INFERIOR, SUPERIOR, INTENTOS_MAXIMOS);
	
  while (1) {
    intentos++;
    printf("Escribe el número que crees que elegí: ");
    scanf("%d", &respuesta);
    if (respuesta == secreto) {
      printf("Correcto. El número que seleccioné fue %d y lo adivinaste en %d "
             "intento(s)",
             secreto, intentos);
      break;
    } else if (respuesta < secreto) {
      printf(
          "Error, pero te doy una pista: el número que elegí es mayor que %d\n",
          respuesta);
    } else {
     
      printf(
          "Error, pero te doy una pista: el número que elegí es menor que %d\n",
          respuesta);
    }
	
    if (intentos >= INTENTOS_MAXIMOS) {
      printf("Perdiste. El número que elegí fue %d", secreto);
      break;
    }
  }
}


int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}