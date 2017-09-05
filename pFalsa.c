/*
Universidad de Guanajuato
Division de Ingenierias Campus Irapuato Salamanca
Metodos Numericos
Diego Eduardo Rosas Gonzalez
4/sep/17
*/
#include <stdio.h>
#include <math.h>

float f(float x) {
    return (powf(x,3.0)) + (3*pow(x,2.0))+x+(log(pow(x,2)));
}

int main() {
    int i=0;
    float a, b, fa, fb, xm, xma, fxm, e=0, aux;
    printf("Ingrese el valor minimo del rango: ");
    scanf("%f",&a);
    printf("Ingrese el valor maximo del rango: ");
    scanf("%f",&b);
    if(b>a) {
        aux = a;
        a = b;
        b = aux;
    }
    printf("\nminimo: %.1f\tmaximo: %.1f\n",a,b);
    printf(" i|   a   |   b   | f(a)  | f(b)  |  Xmi  | f(Xmi)| Eabs |\n");
    fb = f(b);
    do {
        fa = f(a);
        xma = a - ((fa*(b-a)) / (fb - fa));
        fxm = f(xma);
        printf("%02i|% .4f|% .4f|% .4f|% .4f|% .4f|% .4f|%.4f|\n",i,a,b,fa,fb,xm,fxm,e);
        a = xma;
        xm = a - ((f(a)*(b-a)) / (fb - f(a)));
        e = xma - xm;
        i++;
    }while((e<-0.000001)||(e>0.000001));
    printf("\nEl valor del punto medio es %.4f y el numero de iteraciones fue %i\n",xma,i);
    return 0;
}