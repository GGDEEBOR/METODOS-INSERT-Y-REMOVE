#ifndef __EMPLEADO_H__
#define __EMPLEADO_H__

#include <string>

class Person { // clase persona
private:// datos miembro
    std::string name; // atributo nombre
    int id; // atributo identificador
public:// funciones miembro
    Person(std::string n = "", int i = 0) : name(n), id(i) {} // constructor

    std::string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    void setName(std::string n) {
        name = n;
    }
    void setId(int id) {
        this->id = id;
    }
};

#endif