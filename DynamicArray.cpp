#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    size = 0;
    arr = new Person[0];
}

DynamicArray::DynamicArray(const Person arr[], int size) {
    this->size = size;
    this->arr = new Person[size];

    for(int i = 0; i < size; i++)
        this->arr[i] = arr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o) {
    this->size = o.size;
    this->arr = new Person[o.size];

    for(int i = 0; i < size; i++)
        this->arr[i] = o.arr[i];
}

void DynamicArray::push_back(Person elem) {
    Person *tmp = new Person[size + 1];
    for(int i = 0; i < size; i++)
        tmp[i] = arr[i];
    tmp[size] = elem;
    delete []arr;
    size += 1;
    arr = tmp;
}

/*
Metodos insert y remove
*/
// Metodo insert

void DynamicArray::insert(Person elem, int pos){
    Person *tmp = new Person[size + 1]; // el tamaño del arreglo temporal sera el
    for(int i = 0; i<pos; i++){         // tamaño del anterior arreglo mas 1.
        tmp[i] = arr[i];
    }
    tmp[pos] = elem;
    for(int j = pos; j<size; j++){
        tmp[j+1] = arr[j];
    }
    delete []arr;
    size += 1;
    arr = tmp;
}

// Metodos remove
void DynamicArray::remove(int pos) {
    Person *tmp = new Person[size - 1];
    for(int i = 0; i<pos; i++){
        tmp[i] = arr[i];
    }
    for(int j = pos; j<size-1; j++){ //3
        tmp[j] = arr[j+1];
    }
    delete []arr;
    size -= 1;
    arr = tmp;

}

int DynamicArray::getSize() const {
    return size;
}

DynamicArray::~DynamicArray() {
    delete [] arr;

}