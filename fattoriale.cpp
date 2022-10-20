//Tollot Cristiano 3CSA
#include<iostream>

//Definisco una variabile unsigned int così l'utente non può inserire valori <  0
typedef unsigned int uint;

#define NUMERO 5

uint fattoriale(uint numero){
    uint fattoriale = 1;
    for (; numero > 0; numero--){
        fattoriale *= numero;
    }
    return fattoriale;
}

uint fattoriale_ricorsivo(uint numero){
    if (numero == 0) return 1;
    else return numero*fattoriale_ricorsivo(numero-1);
}

int main(){
    std::cout << fattoriale(NUMERO)<<std::endl;

    std::cout << fattoriale_ricorsivo(NUMERO)<<std::endl;
}
