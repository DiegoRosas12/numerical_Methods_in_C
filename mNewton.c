#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float a, b, xi, fxi, dfxi, er;
    printf("F(x) = x²-cos(x)-1\nF'(x) = 2x+sin(x)\n");
    printf("Ingrese el valor minimo del rango: ");
    scanf("%f",&a);
    printf("Ingrese el valor maximo del rango: ");
    scanf("%f",&b);
    if(b<a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    xi = (a + b) / 2;
    do {
        fxi = (fpow(xi,2)) - (cos(xi)) -1;
        dfxi = (2*xi) + sin(xi);
        xi = xi - (fxi / dfxi);
        i++;
    }while(i<20);

    getchar();
    getchar();
    return 0;
}