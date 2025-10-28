#include <iostream>

using namespace std;

class Persona
{
protected:
    string nombre;
    int edad;

public:
    Persona(string _nombre, int _edad)
    {
        nombre = _nombre;
        edad = _edad;
    }

    string getNombre()
    {
        return nombre;
    }

    int getEdad()
    {
        return edad;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }

    // métodos extra
    void presentarse()
    {
        cout << "mi nombre es " << nombre << " y tengo " << edad << " anios" << endl;
    }
};

class Profesor : public Persona
{
private:
    int clase;
    string materia;

public:
    Profesor(string nombre, int edad, int clase, string materia) : Persona(nombre, edad)
    {
        this->clase = clase;
        this->materia = materia;
    };
    int getClase()
    {
        return clase;
    }
    string getMateria()
    {
        return materia;
    }

    void testObjeto4()
    {
        cout << "clase Nº " << clase << " materia : " << materia << " anios" << endl;
    }
};

int main()
{
    // crear objeto
    Persona p1("Aliberth", 21);
    Persona p2 = Persona("Carlos", 30);
    Persona p3 = Persona("Keysy", 25);
    Profesor p4 = Profesor("Henjiskan", 33, 5, "matematica");

    Persona arrayPersona[] = {p1, p2, p3, p4};

    for (int i = 0; i < 4; i++)
    {
        cout << "\n";
        arrayPersona[i].presentarse();
        ///        arrayPersona[i].
    }
    cout << "\n";

    return 0;
}