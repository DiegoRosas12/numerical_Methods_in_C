/*
Universidad de Guanjuato
Division de Ingenierias Capus Irapuato Salamanca
Diego Eduardo Rosas Gonzalez
07/sep/17
*/
#include <stdio.h>
#include <math.h>

float f(float x){
    return (powf(x,20.0)-1);
}

int main() {
    int i=1;
    float xmenos, xi, fmenos, fxi, xmas, er=0, xmas2;
    printf("Introduzca el valor de X0: ");
    scanf("%f",&xmenos); 
    printf("Introduzca el valor de X1: ");
    scanf("%f",&xi);
    printf("Xo = %.4f\tXi = %.4f\n",xmenos,xi);
    printf("i |  Xi-1 |   Xi  |f(Xi-1)| f(Xi) | Xi+1  |   Er   |\n");
    do{
        fmenos = f(xmenos);
        fxi = f(xi);
        xmas = (xi) - ((fxi*(xi-xmenos)) / (fxi-fmenos));
        printf("%02i|% .4f|% .4f|% .4f|% .4f|% .4f|% 02.4f%%|\n",i,xmenos,xi,fmenos,fxi,xmas,er);
        xmenos = xi;
        xi = xmas;
        xmas2 = (xi) - ((fxi*(xi-xmenos)) / (fxi-fmenos));
        er = fabs(((xmas2-xmas) / xmas) * 100);
        i++;
    }while((er<-0.000001)||(er>0.000001));
    printf("El valor de Xi+1 es: %.4f y el numero de iteraciones fue %i.\n",xmas,i);
    return 0;
}