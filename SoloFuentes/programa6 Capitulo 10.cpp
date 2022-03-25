//1.- Librerias

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
 /**  
 * 2.- programa 6 capitulo 10
 * La computadora trata de adivinar un número
 * que tiene usted en mente. Primero, ella da un
 * número y usted le dice si es demasiado alto,
 * demasiado bajo o correcto. En base a la información 
 * que se le proporcione, la computadora
 *  ensaya de nuevo. El proceso continúa hasta
 *  que la computadora acierta el número. 
 * Generar un programa que desarrole este juego
 * 
 * 3.- Autor y fecha
 * @Autor   CarlosMolinaR
 * @Date    25 Marzo 2022
 * **/

// 4.- Funciones y procedimientos

int main()
{
	int temp,incognita,minimoX=0,maximoX=0,op;
    cout<<"\n\tAdivinare tu numero"<<endl;
 
    srand(time(NULL));
    incognita=rand()%100;
 
    while(temp!=true)
    {
        cout<<"\n\tTu numero es "<<incognita<<endl;
        cout<<"\n\t1-Tu numero es menor a: "<<incognita<<"\n\t2-Tu numero es mayor a: "<<incognita<<"\n\t3-O el "<<incognita<<" es tu numero?"<<endl;
        cin>>op;
        switch(op)
        {
        	case 1:
        		minimoX=1+rand()%incognita;
        		break;
        	case 2:
        		maximoX=1+rand()%incognita+incognita;
        		break;
        	case 3:
        		temp=true;
        		break;
 
        }
        incognita=(minimoX+maximoX)/2;
        system("cls");
    }
    cout<<"\n\tAdivine tu numero!!!!"<<endl;
    incognita=0;minimoX=1;minimoX=100;
	return 0;
}