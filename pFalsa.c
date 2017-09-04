#include <stdio.h>
#include <math.h>

float f(float x) {
    return (powf(x,3.0)) + (3*pow(x,2.0))+x+(log(pow(x,2)));
}

int main() {
    int i=0;
    float a, b, fa, fb, xm, xma, fxm, e=0;
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
    printf(" i|   a  |   b  | f(a) | f(b)  |  Xmi | f(Xmi)| Eabs |\n");
    xm = (a + b) / 2;
    do {
        fa = f(a);
        fb = f(b);
        fxm = f(xm);
        xm = xm;
        printf("%02i|%.4f|%.4f|%.4f|%.4f|%.4f|%.4f|%.4f|\n",i,a,b,fa,fb,xm,fxm,e);
        xma = xm;
        e = xm - xma;
        i++;
    }while(i<10);
    return 0;
}