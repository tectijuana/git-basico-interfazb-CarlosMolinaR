//Librerias
#include <iostream>

using namespace std;
/**  
 * 2.- programa 18 capitulo 3
 * Introducir las longitudes de los catetos de un
 * triángulo rectángulo y calcular el perimetro.
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/
//4- Funciones y operaciones 

int main(){
    float B,A,H,Res;

    cout << "ingresa la base: ";
    cin >> B;

    cout << "ingresa la altura: ";
    cin >> A;

    cout << "ingresa la hipotenusa: ";
    cin >> H;

    Res = (B + A + H);

    cout << "el perimero del triangulo es: " <<Res <<endl;

    return 0;
}