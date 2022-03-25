//1.- Librerias

#include <iostream>
 using namespace::std;
 #include <cstdlib>
 #include <ctime>

/**  
 * 2.- programa 3 capitulo 10
 *Distribuir y analizar una mano de póquer.
 * 
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 *
 **/

// 4.- Funciones y procedimientos
 const int manos = 2; 
 const int Numero_Palos = 4;
 const int Cartas_de_Palo = 13;

 const int n = Cartas_de_Palo + 1;

 void Barajar( int[][n], int[], int[] );
 void Repartir( int[][n] );
 int Analizar( int[][n], int[], int[] );
 int Corrida( int[]);
 int Flor_Imperial( int[]);
 int Desempate1( int[], int[]);
 int Desempate2( int[], int[]);
 int Desempate3( int[], int[]);
 int Desempate4( int[], int[]);
 int Desempate5( int[], int[]);
 int Desempate6( int[], int[]);
 int Desempate7( int[], int[]);
 int Desempate8( int[], int[]);
 int Desempate9( int[], int[]);



 int main()
 { 
 int centinela = 0;


 
 int contador_de_manos = 1;
 int valor = 0;
 int Valores_Manos[ manos + 1 ] = { 0};
 
 int mano1[Numero_Palos + 1] = {0};
 int mano2[Numero_Palos + 1] = {0};

 cout << "\nEl numero de manos a repartir es: " << manos << endl;

 srand(time(0));

 while ( contador_de_manos <= manos )
 { 
 int cartas[Numero_Palos + 1][n] = { {0, 0} };
 int xF[53] = {0};
 int xN[53] = { 0 };



 Barajar( cartas, xF, xN );
 cout << "\nEsta es la mano del jugador " << contador_de_manos <<" : ";
 cout << endl;
 Repartir( cartas );
 

 if ( 1 == contador_de_manos )
 {
 for (int cont = 1; cont <= 5; cont++)
 mano1[cont] = xN[cont];
 }

 else
 {
 for (int conta = 1; conta <= 5; conta++)
 mano2[conta] = xN[conta];
 }
 valor = Analizar( cartas, xF, xN );
 Valores_Manos[ contador_de_manos ] = valor;

 contador_de_manos++;

 } 

 int mayor;
 int ganador;

 
 if ( Valores_Manos[1] == Valores_Manos[2] )
 { 

 switch (Valores_Manos[1])

 {

 
 case 1:
 {
 ganador = Desempate1( mano1, mano2);
 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;

 
 case 2:
 {
 ganador = Desempate2(mano1, mano2);

 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;


 
 case 3:

 {
 ganador = Desempate3(mano1, mano2);

 centinela = 1;
 

 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;


 
 case 4:

 {
 ganador = Desempate4(mano1, mano2);
 centinela = 1;
 

 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;


 case 5:
 

 {
 ganador = Desempate5(mano1, mano2);


 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;


 case 6:
 {
 ganador = Desempate1(mano1, mano2);


 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }
 break;


 case 7:
 {
 ganador = Desempate7(mano1, mano2);
 centinela = 1;

 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 }

 break;


 case 8: 
 { 
 ganador = Desempate8(mano1, mano2);


 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }
 } 

 break;


 case 9: 

 { 
 ganador = Desempate9( mano1, mano2);

 if ( 1 == ganador )
 cout <<"\nLa mano del jugador 1 es mejor que la del jugador 2." <<endl;
 else
 {
 if ( 2 == ganador)
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1." <<endl;
 else
 if ( 0 == ganador)
 cout << "\nLas manos tienen cartas del mismo numero. " <<endl;
 }

 } 

 break;

 case 10:

 { 

 cout << "\nHAY DOS FLORES IMPERIALES!" <<endl << endl;

 } 
 default:
 break;


 } 
 } 
 


 else
 {
 if ( Valores_Manos[1] > Valores_Manos[2] )
 cout << "\nLa mano del jugador 1 es mejor que la del jugador 2."<<endl;
 else
 cout <<"\nLa mano del jugador 2 es mejor que la del jugador 1."<< endl;
 } 


 
 return 0;
 } 


 void Barajar(int Mazo[][14], int xFiguras[], int xNumeros[] )

 { 

 int contador;
 int tipo_carta;
 int numero_carta;

 for ( contador = 1; contador <= 52; contador++ )
 { 
 do{ 
 tipo_carta = 1 + rand() % 4; 
 numero_carta = 1 + rand() % 13; 
 
 } while( 0 != Mazo[tipo_carta][numero_carta] ); 


 if ( 0 == Mazo[tipo_carta][numero_carta] )
 
 { 
 Mazo[tipo_carta][numero_carta] = contador;
 xFiguras[contador] = tipo_carta;
 xNumeros[contador] = numero_carta;
 } 
 } 
 return;
 } 

 void Repartir( int barajadas[][14] )

 { 
 const char *Numero[14] = { "error", "As", "Dos", "Tres", "Cuatro", "Cinco",
 "seis", "siete", "ocho", "Nueve", "Diez",
 "Sota", "Reina", "Rey"};

 const char *Palos[5] = { "error", "Corazones", "Treboles", "Espadas",
 "Diamantes"};

 


 for ( int r = 1; r <= 5; r++ )
 

 { 
 for ( int y = 1; y <= 4; y++ )
 {
 for ( int z = 1; z <= 13; z++ )
 { 
 if ( r == barajadas[y][z])
 cout << Numero[z] << " de " << Palos[y] << endl;

 } 
 }
 }
 } 



 


 int Analizar( int xcartas[][14], int Fig[], int Num[] )

 { 

 int temp = Fig[1];
 int iguales = 1;
 int corrida = 0;
 int valor = 1; 

 

 int temp2[14] = {0 };
 for ( int s = 1; s <= 5; s++ )
 {
 temp2[Num[s]]++;

 } 


 int contador_pares = 0;
 int contador_tercia = 0;
 int contador_poquer = 0;

 for ( int w = 1; w <= 14; w++ )
 { 
 if ( 2 == temp2[w] )
 contador_pares++;

 if ( 3 == temp2[w] )
 contador_tercia = 1;

 if ( 4 == temp2[w] )
 {
 contador_poquer = 1;
 }

 } 

 if ( 0 != contador_pares )
 {
 cout <<"\nUsted tiene " << (1 == contador_pares? " 1 par " :
 " dos pares") << endl;
 if ( 1 == contador_pares)
 valor = 2;
 else
 valor = 3;
 }

 if ( 1 == contador_tercia )
 { 
 cout <<(0 != contador_pares? "y 1 tercia ( Un full). " :
 "\nUsted tiene una tercia. ");
 if ( 1 == contador_pares )
 valor = 7;
 else
 valor = 4;
 } 

 if ( 1 == contador_poquer )
 {
 cout <<"\nUsted tiene un poquer. " << endl;
 valor = 8;
 }

 for ( int i = 2; i <= 5; i ++ )
 { 
 if ( Fig[ i ] != temp )
 { 
 iguales = -1;
 } 
 } 
 if ( 1 == iguales )
 { 

 corrida = Corrida( Num );
 
 int flor; 
 if ( 0 == corrida )
 { 
 flor = Flor_Imperial(Num);
 if ( 0 == flor )
 { 
 cout <<"\n\nUsted tiene un flux!" << endl;
 valor = 6;
 }
 else
 { 
 cout <<"\n\nUSTED TIENE UNA FLOR IMPERIAL!" << endl << endl;
 valor = 10;
 } 
 } 

 else
 {
 cout << "\nUsted tiene una escalera de color!" << endl;
 valor = 9;
 }

 } 


 else
 { 
 int escalera;
 escalera = Corrida( Num);

 if ( 1 == escalera )
 { 
 cout << "\nUsted tiene una escalera. " << endl;
 valor = 5;
 }
 } 

 cout << "\nEl valor de su mano es: " << valor << endl;
 return valor;
 }

 int Corrida( int X[])

 { 

 int temporal;
 for ( int l = 1; l < 5; l++)
 {
 for ( int d = 1; d < 5; d++ )

 { 
 if ( X[d + 1] < X[d] )
 {
 temporal = X[d];
 X[d] = X[d + 1];
 X[d + 1] = temporal;
 } 
 } 
 }

 int ordenados = 0;

 for ( int t = 1; t < 5; t++ )
 {
 if ( X[t + 1] == X[t] + 1 )
 { 
 ordenados++;
 } 
 } 

 
 if ( 4 != ordenados )

 return 0;

 else

 return 1;
 }

 int Flor_Imperial( int Y[] )
 { 
 int tempor;
 for ( int f = 1; f < 5; f++)
 { 
 for ( int d = 1; d < 5; d++ )

 { 
 if ( Y[d + 1] < Y[d] )
 {
 tempor = Y[d];
 Y[d] = Y[d + 1];
 Y[d + 1] = tempor;
 } 
 } 
 } 

 int variable = 10;
 int cambio = 0;

 if ( 1 != Y[1] )
 return 0;

 else
 { 

 for ( int z = 2; z <= 5; z++ )
 { 
 if ( Y[z] != variable )
 {
 cambio = 1;
 }
 variable++;
 } 
 } 

 if ( 0 != cambio )
 return 0;
 else
 return 1;
 } 


 int Desempate1( int Mano1[], int Mano2[])

 {


 int hold;
 int temporal;
 for ( int x = 1; x < 5; x++)

 {

 for (int j = 1; j < 5; j++ )
 if ( Mano1[j] > Mano1[j + 1])
 {
 hold = Mano1[j];
 Mano1[j] = Mano1[j + 1];
 Mano1[j + 1] = hold;
 }

 for (int t = 1; t < 5; t++ )
 if ( Mano2[t] > Mano2[t + 1])
 {
 temporal = Mano2[t];
 Mano2[t] = Mano2[t + 1];
 Mano2[t + 1] = temporal;
 }
 }

 for (int d = 1; d <= 5; d++ )
 cout << Mano1[d] << " " << Mano2[d] <<endl;

 int no_as = 1;

 if( 1 == Mano1[1])
 {
 if( 1 != Mano2[1])
 return 1;
 else
 no_as = 1;
 }



 if( 1 == Mano2[1])
 {
 if( 1 != Mano1[1])
 return 2;
 else
 no_as = 1;
 }


 if ( 1 == no_as )
 {
 for ( int h = 5; h >= 1; h--)
 {
 if ( Mano1[h] > Mano2[h])
 {
 cout <<"\nRetorna 1" << endl;
 return 1;
 }
 else
 {
 if ( Mano1[h] < Mano2[h] )
 {
 cout << "\nRetorna 2." << endl;
 return 2;
 }
 }

 }

 cout << "\nRetorna 0." << endl;
 return 0;
 }

 } 

 int Desempate2( int Mano1[], int Mano2[])
 {

 int par1 = 0;
 int par2 = 0;

 for ( int r = 1; r <= 4; r++ )
 for ( int s = r + 1; s <= 5; s++)
 {
 if (Mano1[r] == Mano1[s])
 par1 = Mano1[s];


 if (Mano2[r] == Mano2[s])
 par2 = Mano2[s];

 }

 if ( par1 > par2 )
 {
 if ( 1 == par2)
 return 2;
 else
 return 1;
 }
 else
 {
 if ( par1 < par2 )
 {
 if ( 1 == par1 )
 return 1;
 else
 return 2;
 }
 else
 return Desempate1(Mano1, Mano2);
 }


 }

 int Desempate3( int Mano1[], int Mano2[])

 {


 int par1 = 0;
 int par2 = 0;
 for ( int i = 1; i <= 4; i++)
 {
 for ( int y = i + 1; y <= 5; y++)

 {
 if ( (Mano1[i] == Mano1[y]) && (0 == par1) )
 {
 par1 = Mano1[i];
 }

 if ( (0 != par1) && (Mano1[i] == Mano1[y] && (Mano1[y] != par1)) )
 {
 par2 = Mano1[i];
 }

 } 
 }

 int mayor1 = 0;
 int mayor1a = 0;

 if ( par1 > par2)
 { 
 mayor1 = par1;
 mayor1a = par2;
 }

 else 
 {
 mayor1 = par2;
 mayor1a = par1;
 }


 int par1m2 = 0;
 int par2m2 = 0;

 for ( int i = 1; i <= 4; i++)
 { 
 for ( int y = i + 1; y <= 5; y++)

 { 
 if ( Mano2[i] == Mano2[y] && 0 == par1m2 )
 { 
 par1m2 = Mano2[i];
 }

 if ( (0 != par1m2) && ((Mano2[i] == Mano2[y]) && (Mano2[y] != par1m2)) )
 { 
 par2m2 = Mano2[i];
 } 
 } 
 } 


 int mayor2 = 0;
 int mayor2a = 0;

 if ( par1m2 > par2m2)
 { 
 mayor2 = par1m2;
 mayor2a = par2m2;
 } 

 else 
 {
 mayor2 = par2m2;
 mayor2a = par1m2;
 }


 if ( (1 == mayor1a) || (1 == mayor2a) )
 {
 cout <<"\nReconoce que hay un par de ases. " <<endl;

 if ( (1 == mayor1a) && (1 != mayor2a) )
 return 1;
 }
 else
 { 
 if ( (1 != mayor1a) && (1 == mayor2a) )
 return 2;
 }



 if ( mayor1 > mayor2 )

 return 1;

 else
 { 
 if ( mayor2 > mayor1 )
 return 2;

 else 
 { 
 if ( mayor1a > mayor2a)
 return 1;
 else
 {
 if ( mayor2a > mayor1a )
 return 2;
 }
 } 
 return Desempate1(Mano1, Mano2);
 }
 }

 int Desempate4( int Mano1[], int Mano2[])

 {
 

 int par1 = 0;
 int par2 = 0;

 for ( int i = 1; i <= 4; i++)
 {
 for ( int y = i + 1; y <= 5; y++)

 { 
 if ( Mano1[i] == Mano1[y] )
 {
 par1 = Mano1[i];
 }

 if ( Mano2[i] == Mano2[y] )
 { 
 par2 = Mano2[i];
 } 


 if (par1 > par2)
 return 1;
 else
 return 2;
 } 
 } 
 return 1;

 }


 int Desempate5( int Mano1[], int Mano2[])

 {
 return Desempate1( Mano1, Mano2);
 }

 int Desempate6( int Mano1[], int Mano2[])
 { 

 return Desempate1(Mano1, Mano2);

 }

 int Desempate7( int Mano1[], int Mano2[])
 {
 int parmano1 = 0; 
 int parmano2 = 0;
 int terciamano1= 0;
 int terciamano2 = 0;

 int hold;
 int temporal;
 for ( int x = 1; x < 5; x++)

 {

 for (int j = 1; j < 5; j++ )
 if ( Mano1[j] > Mano1[j + 1])
 {
 hold = Mano1[j];
 Mano1[j] = Mano1[j + 1];
 Mano1[j + 1] = hold;
 }

 for (int t = 1; t < 5; t++ )
 if ( Mano2[t] > Mano2[t + 1])
 {
 temporal = Mano2[t];
 Mano2[t] = Mano2[t + 1];
 Mano2[t + 1] = temporal;
 }
 }

 
 if ( Mano1[1] == Mano1[3] )
 { 
 terciamano1 = Mano1[1];
 parmano1 = Mano1[4]; 
 } 

 else
 { 
 
 terciamano1 = Mano1[4];
 parmano1 = Mano1[1];

 } 



 if ( Mano2[1] == Mano2[3] )
 { 
 terciamano2 = Mano2[1];
 parmano2 = Mano2[4]; 
 } 

 else
 { 

 terciamano2 = Mano2[4];
 parmano2 = Mano2[1];
 } 

 if ( 1 == terciamano1 )
 { 
 if ( 1 != terciamano2 )
 {
 return 1;
 }
 } 


 if ( 1 == terciamano2 )
 { 
 if ( 1 != terciamano1 )
 {
 return 2;
 }
 } 


 if ( terciamano1 > terciamano2 )
 return 1;
 if ( terciamano2 > terciamano1 )
 return 2;


 } 


 int Desempate8( int Mano1[], int Mano2[])
 {

 return Desempate1(Mano1, Mano2);

 } 


 int Desempate9( int Mano1[], int Mano2[])
 {
 return Desempate1( Mano1, Mano2 );
 }