//Jose Julian Dicante Rivera

#include <iostream>
#include <string>

using namespace std;

class Empleado
{
    private:
        int ClaveEmpleado;
        float Sueldo;
        string Nombre;
        string Domicilio;
        string ReportaA;
    protected:
    public:
        Empleado(int clv, float s, string n, string d, string r): ClaveEmpleado(clv), Sueldo(s), Nombre(n), Domicilio(d), ReportaA(r){}
        void Imprimir()
        {
            cout<<"\n\nDatos del empleado:\n";
            cout<<"\nNombre: "<<Nombre;
            cout<<"\nDomicilio: "<<Domicilio;
            cout<<"\nSueldo: "<<Sueldo;
            cout<<"\nReporta a: "<<ReportaA<<endl;
            system("PAUSE");
        }

        void CambiaDomicilio (string NuevoDomicilio)
        {
            Domicilio = NuevoDomicilio;
            cout<<"\nDomicilio Cambiado"<<endl;
            system("PAUSE");
        }

        void CambiaReportaA (string NuevoReportaA)
        {
            ReportaA = NuevoReportaA;
            cout<<"\nReporta a Cambiado"<<endl;
            system("PAUSE");
        }

        void CambiaSueldo (float NuevoSueldo)
        {
            Sueldo = NuevoSueldo;
            cout<<"\nSueldo Cambiado"<<endl;
            system("PAUSE");
        }
};



int main()
{
    int opc;
    string aux;
    float aux2;

    Empleado JefePlanta(1234, 10000, "Juan Carlos", "Calle sol 321", "Julian");
    Empleado JefePersonal(4321, 15000, "Alex Cervantes", "Calle madarina 5676", "Julian");

    do
    {
        system("cls");
        cout<<"Elija una opccion: \n\n";
        cout<<" 1. Imprimir datos de un empleado\n";
        cout<<" 2. Cambiar domicilio\n";
        cout<<" 3. Cambiar reporta a\n";
        cout<<" 4. Cambiar actual sueldo\n";
        cout<<" 5. Salir\n : ";
        cin>>opc;

        switch (opc)
        {
            case 1:
                system("cls");
                cout<<"Imprimir datos de un empleado\n\n";
                cout<<"Ingrese la clave del empleado: ";
                cin>>opc;

                if (opc == 1234)
                {
                    JefePlanta.Imprimir();
                }
                if (opc == 4321)
                {
                    JefePersonal.Imprimir();
                }


            break;
            case 2:
                system("cls");
                cout<<"Cambiar domicilio de un empleado\n\n";
                cout<<"Ingrese la clave del empleado: ";
                cin>>opc;


                if (opc == 1234)
                {
                    cout<<"\nIngrese el nuevo domicilio:  ";
                    fflush(stdin);
                    getline(cin, aux);
                    JefePlanta.CambiaDomicilio(aux);
                }
                if (opc == 4321)
                {
                    cout<<"\nIngrese el nuevo domicilio:  ";
                    fflush(stdin);
                    getline(cin, aux);
                    JefePersonal.CambiaDomicilio(aux);
                }

            break;
            case 3:
                system("cls");
                cout<<"Cambiar reporta a de un empleado\n\n";
                cout<<"Ingrese la clave del empleado: ";
                cin>>opc;


                if (opc == 1234)
                {
                    cout<<"\nIngrese el nuevo nombre de quien reporta:  ";
                    fflush(stdin);
                    getline(cin, aux);
                    JefePlanta.CambiaReportaA(aux);
                }
                if (opc == 4321)
                {
                    cout<<"\nIngrese el nuevo nombre de quien reporta:  ";
                    fflush(stdin);
                    getline(cin, aux);
                    JefePersonal.CambiaReportaA(aux);
                }
            break;
            case 4:
                system("cls");
                cout<<"Cambiar actual sueldo de un empleado\n\n";
                cout<<"Ingrese la clave del empleado: ";
                cin>>opc;


                if (opc == 1234)
                {
                    cout<<"\nIngrese el nuevo sueldo:  ";
                    cin>>aux2;
                    JefePlanta.CambiaSueldo(aux2);
                }
                if (opc == 4321)
                {
                    cout<<"\nIngrese el nuevo sueldo:  ";
                    cin>>aux2;
                    JefePersonal.CambiaSueldo(aux2);
                }
            break;
        }
    } while (opc != 5);

    return 0;
}