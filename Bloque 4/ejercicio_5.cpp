#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    int numero = 0, suma = 0;

    do
    {
        cout<<"Digite un numero: ";
        cin>>numero;

        if (numero > 0)
        {
            suma += numero;
        }
    }
    while ( ((numero < 20) || (numero > 30)) && ((numero != 0)));

    cout<<"\nLa sumatoria de los numeros digitados mayores a 0 es: "<<suma;


    getch ();
    return 0;
}
