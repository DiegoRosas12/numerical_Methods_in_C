/**
 * Copyright (C) 2018 Diego Eduardo Rosas González
 * 
 * This file is part of puntoFijo.
 * 
 * puntoFijo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * puntoFijo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with puntoFijo.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */


/*Universidad de Guanajuato
Division de Ingenierias Campus Irapuato Salamanca
Metodos Numericos
Diego Eduardo Rosas Gonzalez
*/
#include <stdio.h>
#include <math.h>

float f(float xi) {
    return (powf(xi,2.0) - (cos(xi)) -1);
}

float df(float xi) {
    return ((2*xi) + sin(xi));
}

int main() {
    int i=0;
    float a, b, xi, fxi, dfxi, xi1, xi1a, er=0;
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
    printf("\nminimo: %.1f\tmaximo: %.1f\n",a,b);
    printf(" i|  xi  | f(xi)|f'(xi)| xi+1 |  Er  |\n");   
    xi = (a + b) / 2;
    do {
        fxi = f(xi);
        dfxi = df(xi);
        xi1a = xi - (fxi / dfxi);
        printf("%02i|%.4f|%.4f|%.4f|%.4f|%.4f|\n",i,xi,fxi,dfxi,xi1a,er);
        i++;
        xi = xi1a;
        xi1 = xi - (f(xi) / df(xi));
        er = fabs(fabs(xi1a) - fabs(xi1));
    }while((er<-0.000001)||(er>0.000001));
    printf(" %01i|%.4f|%.4f|%.4f|%.4f|%.4f|\n",i,xi,fxi,dfxi,xi1a,er);
    printf("\nEl valor del punto medio es %.4f y el numero de iteraciones fue %d.\n",xi1,i);
    
    getchar();
    getchar();
    return 0;
}