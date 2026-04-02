#include <stdio.h>

void ReversoDelNumero(int *p) {

    //funcion que se obtiene el reverso de un numero que resive por "parametro"
    int numero = *p;
    int reverso = 0;
    while (numero > 0) {
        reverso = (reverso * 10) + (numero % 10);
        numero = numero / 10;
    }
    *p = reverso;
}

void DividirEnDos(int *p) {
    *p = *p / 2;
}

void SumaDeDigitos(int *p) {

    //Funcion que acumula una suma digito a digito del numero y posterior esa cantidad la suma al numero. 
    int numero = *p;
    int sumaDigitos = 0;
    while (numero > 0) {
        sumaDigitos = sumaDigitos + (numero % 10);
        numero = numero / 10;
    }
    *p = *p + sumaDigitos;
}

void procesar_enigma(int *valor_referencia) {
    ReversoDelNumero(valor_referencia);
    DividirEnDos(valor_referencia);
    SumaDeDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    //el numero original se obtiene el reverso, se lo divide en dos y se le suma la suma de sus digitos al numero obtenido de la division de la segunda funcion
    
    return 0;
}