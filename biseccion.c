#include <stdio.h>
#include <math.h>

int main () {
    int i;
    float a, b, xm, fa, fb, fxm, fxma, sg, er=0;
    printf("F(x)=x⁴-cos(x)-1\n");
    printf("Ingrese el valor minimo del rango: ");
    scanf("%f",&a);
    printf("Ingrese el valor maximo del rango: ");
    scanf("%f",&b);
    if(b<a) {
        b = b + a;
        a = b - a;
        b = b - a;
    }
    printf("minimo: %f\tmaximo: %f\n",a,b);
    do {
    xm = (b + a) / 2;
    fa = ((a)^4) - (cos(a)) - 1;
    fb = ((b)^4) - (cos(b)) - 1;
    fxm = ((xm)^4) - (cos(xm)) - 1;
    sg = fa * fxm;
    i++;
    if (sg < 0){
        b = xm;
    }else{
        a = xm;
    }
    }while(fxm/=0||i<100);
    return 0;
}