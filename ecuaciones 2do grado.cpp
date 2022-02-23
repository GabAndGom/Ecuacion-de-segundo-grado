//calculadora 2do grado
// calcularemos mediante la formula general para ecuaciones de segundo grado de la forma Ax^2+Bx+C=0
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    float A,B,C,aux1,res1=0,res2=0;
    float xreal,ximag;
    cout<<"Digite los valores de los coeficientes (A,B,C), siendo que Ax^2+Bx+C=0"<<endl;
    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    cout<<"C: ";
    cin>>C;
    aux1=(pow(B,2)-(4*A*C));
    if(A==0)
    {
        cout<<"la ecuacion no es de segundo grado ,la solucion es: "<<C/B;
    }
    else
    {
        if (aux1<0)
        {
        cout<<"la ecuacion no tiene solucion en los reales "<<endl;
        xreal=-B/(2*A);
        ximag=sqrt(-aux1)/(2*A);
        cout<<"Las soluciones imaginarias son: "<<endl;
        cout<<xreal<<"+"<<ximag<<"i "<<endl;
        cout<<xreal<<"-"<<ximag<<"i "<<endl;
        }
        else 
        {
            if (aux1==0)
            {
                cout<<"la solucion para la ecuacion es: "<<-B/(2*A)<<endl;
            }
            else 
            {
                res1=(-B-(sqrt(aux1)))/(2*A);
                res2=(-B+(sqrt(aux1)))/(2*A);
                if (res1==res2)
                {
                  cout<<"la solucion para la ecuacion es: "<<res1<<endl;
                }
                else 
                {
                    cout<<"las soluciones para la ecuacion son: "<<res1<<" y "<<res2<<endl;
                }
            }
        }
    }
    system("pause");

}
