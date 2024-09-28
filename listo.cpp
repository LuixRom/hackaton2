#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

//Esta es la función a derivar
double f(double x) {
    return -4*x+cos(x)+2;
}

//Usamos el concepto más básico para hallar la derivada que es el de limite, h es un valor muy pequeño que lo hemos asigado
double dF(double (*f)(double), double x0) {
    double h=0.000000001;
    return (f(x0+h)-f(x0))/h;
}

//Ahora vamos a usar el metodo de Newton-Raphson para encontrar la raiz real de "-4x + cos(x) + 2 = 0"
double nR(double (*f)(double), double (*dF)(double (*f)(double), double), double x0) {
    return x0-f(x0)/dF(f,x0);
}

int main() {
    //Al no conocer el valor de exacta de la función le damos un valor neutro
    double x0=0.0;
    double raiz = nR(f, dF, x0);
    cout << "La raiz encontrada es: " << raiz << endl;
    return 0;
}
