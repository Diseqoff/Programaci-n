#include<iostream>
using namespace std;
int main()
{
    double a, b, c, d, e, f, Resultado = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;
    cout<<"Digite el valor de e: "; cin>>e;
    cout<<"Digite el valor de f: "; cin>>f;
    
    Resultado = (a + (b/c)) / (d + (e/f));

    cout.precision(3);
    cout<<"\nEl resultado es: "<<Resultado;
    

    return 0;
}