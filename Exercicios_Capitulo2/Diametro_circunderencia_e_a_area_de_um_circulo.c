#include <stdio.h>

int main(void){
    float raio;
    float pi = 3.14159;

    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    // Formula do área de um círculo pi*r^2 = a
    printf("A area do circulo e: %f\n", pi * (raio * raio));

    // Formula do diâmetro de um círculo 2*r = d
    printf("O diametro de um circulo e: %f\n", 2 * raio);

    // Formula da circuferência de um círculo 2*pi*r
    printf("A circuferencia de um circulo e: %f\n", 2 * pi * raio);

    return 0;
}