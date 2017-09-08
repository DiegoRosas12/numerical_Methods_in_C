#include <stdio.h>

float f(float x){
    return (powf(x,20.0)-1);
}

int main() {
    int i=1;
    float xmenos, xi, fmenos, fxi, xi1, e;
    printf("Introduzca el valor de X0: ");
    scanf("%f",&xi1);
    printf("Introduzca el valor de X1: ");
    scanf("%f",&xi);
    printf("i|Xi-1|Xi|f(Xi-1)|f(Xi)|Xi+1|Er|\n");
    do{
        fmenos = f();
        fxi = f(xi);
        printf("%i|%f|%f|%f|%f|%f|%f|\n",i,xmenos,xi,fmenos,fxi,xi1,e);
    }while(i<10);

    return 0;
}