//Programa convertidor de unidades "Centimetros a Pulgadas"

#include <iostream>

int main(int argc, char *argv[]){

    float cm,pulg;                 //Float muestra un tipo de numero con valores 0.00
    std::cout << "\n Escriba la cantidad de Centimetros: ";
    std::cin >> cm;
    pulg = cm / 2.54;

    std::cout << "\n El resultado en púlgadas es: " << pulg << "\n";
    return 0; 
}