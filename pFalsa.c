#include <stdio.h>
#include <math.h>

int main() {
    float a, b, fa, fb, xm, fxm, e;
    printf("Ingrese el valor minimo del rango: ");
    scanf("%f",&a);
    printf("Ingrese el valor maximo del rango: ");
    scanf("%f",&b);
    if(b<a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    printf("\nminimo: %.1f\tmaximo: %.1f\n",a,b);
    printf(" i| a | b | f(a) | f(b) | Xmi | f(Xmi) | Eabs\n");
    xm = (a + b) / 2;
    do {
        fa = (powf(xm))
        i++;
    }while(i<10);
    return 0;
}