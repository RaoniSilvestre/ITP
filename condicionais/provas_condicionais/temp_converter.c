#include <stdio.h>

int main(){
    
    float val, celsius, faren, kelvin;
    char med;

    scanf("%f %c",&val,&med);
    if (med=='C')
    {
        celsius = val;
        faren = (val * 1.8) + 32;
        kelvin = val + 273.15;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", celsius,faren,kelvin);
    } else if (med=='F')
    {
        celsius = (val - 32)/1.8;
        faren = val;
        kelvin = celsius + 273.15;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", celsius,faren,kelvin);
    } else if (med=='K') {
        kelvin = val;
        celsius = val - 273.15;
        faren = (celsius * 1.8) + 32;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", celsius,faren,kelvin);
    }

    return 0;
}