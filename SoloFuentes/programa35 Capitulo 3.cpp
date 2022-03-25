//1-Librerias
#include <iostream>
#include <math.h>
/**  
 * 2.- programa 35 capitulo 3
 * La fórmula de Herón puede usarse para encontrar
 * el área de cualquier triángulo, dadas las medidas
 * de los tres lados.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/
using namespace std;
//4- Funciones y procedimientos

int main(){
    cout << "encuentre el area de cualquier triangulo con la formula de heron cuyos lados sean A=6, B=8 y C=10:\n";

    float A=6, B=8, C=10, area, s;

    s = (A + B + C) / 2;
        area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << " El area del triangulo es : " << area << endl;
        cout << endl;

        return 0;
}