//Ejercicio 1. Escribir una función que sume dos números. Implemente un programa que la utilice.

#include <stdio.h>
#include <stdlib.h>
int funcionsuma (int N1, int N2 ,int suma){

printf ("N1: \n");
    scanf ("%d",&N1);
    printf ("N2: \n");
    scanf ("%d",&N2);
    suma= N1 + N2 ;

    printf ("Resultado : %d",suma);
    return N1+N2;
}

int main () {
	int N1, N2 , suma;

printf(": \n", funcionsuma (N1 , N2 , suma));



system("pause");
return 0;


}
