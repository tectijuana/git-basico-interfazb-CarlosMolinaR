//1.- Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>   

/**  
 * 2.- programa 2 capitulo 10
 * Sacar al azar cinco cartas de una baraja de 52
 * e imprimir la colección y color de cada carta.
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/


// 4.- Funciones y procedimientos
#define PALOS    4
#define NUMEROS 10
#define CARTAS  (NUMEROS*PALOS)

typedef enum Palo {
    Oros,
    Copas,
    Espadas,
    Bastos
} Palo;

typedef struct Carta {
    int palo;
    int  numero;
} Carta;

typedef Carta Baraja[CARTAS];


void inicializarBaraja (Baraja baraja)
{
    int i,j;

    for (i=0; i<PALOS; i++) {
        for (j=0; j<NUMEROS; j++) {
            baraja[NUMEROS*i+j].palo   = i;
            baraja[NUMEROS*i+j].numero = j;
        }
    }
}


void intercambiar (Carta *c1, Carta *c2)
{
    Carta aux;

    aux = *c1;
    *c1 = *c2;
    *c2 = aux;
}


void barajar (Baraja baraja)
{
  int cambios;
  int i,c1,c2;


  srand(time(NULL));


  cambios = 20 + (rand() % 1000);


  for (i=0; i<cambios; i++) {

      c1 = rand() % CARTAS;
      c2 = rand() % CARTAS;

      intercambiar( &(baraja[c1]), &(baraja[c2]) );
  }

}


void mostrarCarta (Carta carta)
{
    char palo[10];
    char numero[10];

    // Palo

    switch (carta.palo) {

      case Oros:
           strcpy (palo,"oros");
           break;

      case Copas:
           strcpy (palo,"copas");
           break;

      case Espadas:
           strcpy (palo,"espadas");
           break;

      case Bastos:
           strcpy (palo,"bastos");
           break;
    }

    // Número

    if (carta.numero<7) {

       sprintf (numero, "%d", carta.numero+1);

    } else if ( carta.numero == 7 ) {

        strcpy(numero,"Sota");

    } else if ( carta.numero == 8 ) {

        strcpy(numero,"Caballo");

    } else { 

        strcpy(numero,"Rey");
    }

    

    printf("%s de %s\n", numero, palo);
}




void mostrarBaraja (Baraja baraja)
{
    int i;

    for (i=0; i<CARTAS; i++)
        mostrarCarta(baraja[i]);
}



int preguntar (char *mensaje)
{
    char c;

    do {
        printf("%s (s/n)\n",mensaje);
        c = getch();

    } while ((c!='s') && (c!='S') && (c!='n') && (c!='N'));

    if ((c=='s') || (c=='S'))
        return 1;
    else
        return 0;
}


void mensaje (char *mensaje)
{
    printf("%s\n",mensaje);
}


float puntos (Carta carta)
{
    if (carta.numero<7)
        return carta.numero + 1;
    else
        return 0.5;
}



int pide_otra_carta (float mis_puntos, float tus_puntos)
{
  return (tus_puntos<=7.5) && ( (mis_puntos<tus_puntos) || (mis_puntos<5) );
}



int gana_jugador (float puntos_jugador, float puntos_ordenador)
{
    return (puntos_jugador<=7.5) && ((puntos_jugador>puntos_ordenador) || (puntos_ordenador>7.5));
}



float dar_carta (Baraja baraja, int *carta_actual, char *jugador)
{
    float valor = puntos ( baraja[*carta_actual] );

    printf("Carta para %s: ", jugador);
    mostrarCarta(baraja[*carta_actual]);
    (*carta_actual)++;

    return valor;
}



void juego (Baraja baraja)
{
    int   carta_actual;
    float puntos_jugador, puntos_ordenador;  
    int   jugador_sigue, ordenador_sigue;    

    carta_actual = 0;
    puntos_jugador = 0;
    puntos_ordenador = 0;

    jugador_sigue = 1;
    ordenador_sigue = 1;

    do {

        

        if (jugador_sigue) {

            


            if (preguntar("¿Quiere una carta?")) {

                puntos_jugador += dar_carta(baraja, &carta_actual, "el jugador");

                if (puntos_jugador>7.5) {
                    mensaje("Te has pasado !!!");
                    jugador_sigue = 0;
                }

            } else {
                jugador_sigue = 0;
            }

        }


        if (ordenador_sigue) {

            

            if ( pide_otra_carta(puntos_ordenador, puntos_jugador) ) {

                puntos_ordenador += dar_carta(baraja, &carta_actual, "el ordenador");

                if (puntos_ordenador>7.5) {
                    mensaje("El ordenador se ha pasado");
                    ordenador_sigue = 0;
                }

            } else {

                mensaje("El ordenador se planta");
                ordenador_sigue = 0;
            }
        }

        printf("- Jugador: %.1f puntos\n", puntos_jugador);
        printf("- Ordenador: %.1f puntos\n", puntos_ordenador);

    } while (jugador_sigue || ordenador_sigue);


    if ( gana_jugador(puntos_jugador,puntos_ordenador) )
        mensaje("\nEnhorabuena, ha ganado la partida !!!\n");
    else
        mensaje("\nOtra vez será...\n");

}
int main (void)
{
    Baraja baraja;

    inicializarBaraja(baraja);
    
    do {

        barajar(baraja);
        
        juego(baraja);

    } while ( preguntar("¿Desea jugar otra partida?") );
    
    return 0;
}