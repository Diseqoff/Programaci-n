#include<iostream>
using namespace std;
int main()
{
    double a, b, c, d, Resultado = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;

    Resultado = a + (b/(c-d));
    
    cout.precision(3);
    cout<<"\nEl resultado es:"<<Resultado<<endl;
    

    return 0;
}