//Jose Julian Dicante Rivera

#include <iostream>
#include <string>

using namespace std;

class Materia
{
    private:
        int Clave;
        string Nombre;
        string ProfesorTit;
        string LibroTexto;
    protected:
    public:
        Materia(int clv,string n,string p,string l): Clave(clv), Nombre(n), ProfesorTit(p), LibroTexto(l){}

        void Imprimir()
        {
            cout<<"\n\nDatos de la materia:\n";
            cout<<"\nNombre: "<<Nombre;
            cout<<"\nClave: "<<Clave;
            cout<<"\nPrfesor: "<<ProfesorTit;
            cout<<"\nLibro de texto: "<<LibroTexto<<std::endl;
            system("PAUSE");
        }

        void CambiaClave (int NuevaClave)
        {
            Clave = NuevaClave;
             cout<<"\nClave Cambiada"<<std::endl;
            system("PAUSE");
        }

        void CambiaProfe (std::string NuevoProfe)
        {
            ProfesorTit = NuevoProfe;
             cout<<"\nProfesor Cambiado"<<std::endl;
            system("PAUSE");
        }
};



int main()
{
    int opc;
    string aux;

    Materia Programacion(1234, "Programacion", "Juan Benardo", "Programacion en C. 2008");
    Materia BaseDeDatos(4321, "Base de datos", "Ricardo Garcia", "Programacion para base de datos. 2012");

    do
    {
        system("cls");
        cout<<"Elija una opccion: \n\n";
        cout<<" 1. Imprimir datos de la materia Base de datos\n";
        cout<<" 2. Cambiar profesor de la materia de bases de datos\n";
        cout<<" 3. Cambiar Clave de la materia Programacion\n";
        cout<<" 4. Salir\n : ";
        cin>>opc;

        switch (opc)
        {
            case 1:
                system("cls");
                BaseDeDatos.Imprimir();
            break;
            case 2:
                system("cls");
                cout<<"Cambiar Profesor de la materia Bases de datos\n\n";
                cout<<"Ingrese el nombre del profesor: ";
                fflush(stdin);
                getline(cin, aux);
                BaseDeDatos.CambiaProfe(aux);
            break;
            case 3:
                system("cls");
                cout<<"Cambiar clave de la materia Programacion\n\n";
                cout<<"Ingrese la nueva clave: ";
                cin>>opc;
                Programacion.CambiaClave(opc);
            break;
        }
    } while (opc != 5);

    return 0;
}