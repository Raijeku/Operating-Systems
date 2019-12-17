#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main(int argc, char *argv[]){
    int memoria = atoi(argv[1])*1000000;
    int tiempo = atoi(argv[2]);

    printf("El tiempo es %d\n", tiempo);
    printf("La memoria es %d\n", memoria);

    int tamano = memoria/sizeof(int);
    int *posicionInicial = malloc(memoria);
    int *posicion = posicionInicial;
    int contador=0;
    int temporizador=0;
    int tiempoInicial=clock();
    printf("El arreglo tiene un tamano de: %d\n",tamano);
    while(temporizador<tiempo){
        if(contador>=tamano){
            contador=0;
            posicion=posicionInicial;
        }
        temporizador=clock()-tiempoInicial;
        *posicion=contador;
        ++contador;
        posicion=posicion + 1;
        printf("pid es %d",getpid());
        printf("El arreglo en la posicion %d tiene direccion de memoria %d\n",contador,posicion);
    } 
}