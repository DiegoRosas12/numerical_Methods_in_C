#include <stdio.h>
#include <math.h>

int main () {
    int i;
    float a, b, xm, fa, fb;
    printf("F(x)=x⁴-cos(x)-1\n");
    printf("Ingrese el valor minimo del rango: ");
    scanf("%i",&a);
    printf("Ingrese el valor maximo del rango: ");
    scanf("%i",&b);
    if(b<a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    printf("minimo: %f\tmaximo%f\n",a,b);
    xm = (b + a) / 2;

    return 0;
}