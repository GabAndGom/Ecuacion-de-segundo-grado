//calculadora 2do grado
// calcularemos mediante la formula general para ecuaciones de segundo grado de la forma Ax^2+Bx+C=0
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float A,B,C,aux1,res1=0,res2=0;
    cout<<"Digite los valores de los coeficientes (A,B,C), siendo que Ax^2+Bx+C=0"<<endl;
    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    cout<<"C: ";
    cin>>C;
    aux1=(pow(B,2)-4*A*C);
    if (aux1<0)
    {
        cout<<"la ecuacion no tiene solucion en los reales ";
    }
    if (A==0)
    {
        cout<<"la ecuacion no es de segundo grado";
    }
    else
    {
        res1=(-B-(sqrt(aux1)))/(2*A);
        res2=(-B+(sqrt(aux1)))/(2*A);
        if (res1==res2)
        {
            cout<<"la solucion para la ecuacion es: "<<res1<<endl;
        }
        if ((aux1<0)||(A==0))
        {
            cout<<".";
        }
        if (res1!=res2) 
        {
            cout<<"las soluciones para la ecuacion son: "<<res1<<" y "<<res2<<endl;
        }
        
    }

}
