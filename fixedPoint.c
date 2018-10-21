#import <stdio.h>
#import <math.h>

int main() {
    int i, opc;
    float pm, min, max;
    printf("F(x): x⁴-1-4x=0\n1: Ingresar el punto medio\n2: Ingresar el rango\n");
    scanf("%i", &opc);
    if (opc) {
        printf("Ingresa el valor del punto medio: ");
        scanf("%f", &pm);
    }else{
        printf("Ingresa el valor minimo");
        scanf("%f", &min);
        printf("Ingresa el valor maximo");
        scanf("%f", &max);
        if(max<min) {
            max = max + min;
            min = max - min;
            max = max - min;
        }
    }


}