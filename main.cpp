#include <iostream>
#include "DynamicArray.cpp"
#include<stdlib.h>
#include<ctime>
using namespace std;

int main() {

    DynamicArray p;
    cout << p.getSize() << endl; // imprime 0

    Person arr[8] ;
    int tam = sizeof(arr) / sizeof(arr[0]); // halla el tamaño del array

    DynamicArray q(arr, tam); // objeto q, y tiene parametros arr y el tamaño del array
    cout << q.getSize() << endl; //imprime el tamaño del array que es 4

    Person p1("Erick", 321654);
   // q.push_back(p1);

  //  cout << q.getSize() << endl;

    cout<<"---------------------------"<<endl;

    srand(time(NULL));
    int posicion = 1 + rand()% tam -1 ; // la posicion se dara a cabo por elementos aleatorios del 0 al tam -1

    cout<<"Llamada al Metodo insert:"<<endl;
    Person p2("Edson", 123456);
    q.insert(p2, posicion);
    cout << q.getSize() << endl;
   //cout << posicion<<endl;

    cout<<"---------------------------"<<endl;
    cout<<"Llamada al Metodo remove:"<<endl;
    q.remove(posicion);
    cout << q.getSize() << endl;

    cout<<"---------------------------"<<endl;
    cout<<"Segunda Llamada al Metodo remove:"<<endl;
    q.remove(posicion);
    cout << q.getSize() << endl;

    cout<<"Segunda Llamada al Metodo insert:"<<endl;
    q.insert(p2, posicion);
    cout << q.getSize() << endl;
    //cout << posicion<<endl;

    return 0;
}