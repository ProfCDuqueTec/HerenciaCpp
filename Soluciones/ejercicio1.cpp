cpp
  #include <iostream>
using namespace std;

// Completa aquí las clases:
class Animal {
public:
    string nombre;
    // Constructor
    Animal(string _nombre) {
        nombre = _nombre;
    }
    void comer() {
        cout << "El Animal " << nombre << "está comiendo..."<< std::endl;
    }
};

class Perro : public Animal {
public:
    // Constructor que llama al constructor de Animal
    Perro(string nombre) : Animal(nombre) {}
    
    void ladrar() {
        cout << "Guau Guau";
    }
};

int main() {
    Perro miPerro("Firulais");
    miPerro.comer();
    miPerro.ladrar();
    return 0;
