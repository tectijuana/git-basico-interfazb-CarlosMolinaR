//1.- Librerias
#include <iostream>
#include <ctime>
#include <cstdlib>
/**  
 * 2.- programa 1 capitulo 10
 * Escribir un programa que simule el lanzamiento de dos dados.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/


// 4.- Funciones y procedimientos
int input (int cant)
{
  if (cant == 1)
    {
      std::cout << "Presione \"ENTER\" para lanzar el dado 1";
    }
  else
    {
      std::cout << "Presione \"ENTER\" para lanzar el dado 2";
    }
  std::cin.ignore ();
}


int tirardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  std::cout << "Obtuvo " << ran << std::endl;
  return ran;
}


int dado (int pdado, int sdado)
{
  std::cout << "Ha obtenido un " << pdado + sdado << " con la suma de los 2 dados" << std::endl;
  return pdado + sdado;
}



int main ()
{
  int total, primerdado, segundodado;

  input (1);
  primerdado = tirardado ();
  input (2);
  segundodado = tirardado ();
  total = dado(primerdado, segundodado);
  return 0;
}