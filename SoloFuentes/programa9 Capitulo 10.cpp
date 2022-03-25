  //1.- Librerias
  #include <iostream>
  #include <cstdlib>
  #include <ctime>
  using namespace std;

/**  
 * 2.- programa 9 capitulo 10
 * Simular 100 veces un juego entre Tomás y
 * Laura, teniendo ambos 20 cts. Se lanza una
 * moneda. Si cae águila, Tomás gana una moneda 
 * de Laura; si cae sol, Laura
 * gana una moneda de Tomás. En promedio ¿cuántas veces
 * habrá que arrojar la moneda antes de que To-
 * más (o Laura) pierda todas sus monedas?
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/

  int flip (void);

  int main()

 {

  int value, cruz = 0, cara = 0;

  srand (time (NULL));
  cout <<endl<<endl<<"Simulacion del lanzamiento de una moneda." << endl;
  for (int n =1; n<=100; ++n)
  {
    value = flip();
    if (0 == value)
     {
      cout <<"Cruz\n";
      ++cruz;
     }

     else
     {
      cout <<"Cara"<<endl;
      cara++;
     }
    }

  cout << endl<<"Numero de caras: " << cara << endl;
  cout << "Numero de cruces: "<<cruz<<endl;
 
  return 0;

  }

 
 int flip (void)

 {
 return rand() % 2;
 }