#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int espera = fork();

    if (espera == 0){
        printf("Hijo: hola soy el hijo\n");
        printf("HIJO: bye\n");
        printf("Valor del wait en el hijo = %d\n", wait(NULL));
    }
    else
    {

        int noespera = fork();
        if(noespera == 0){

            printf("Mi padre no me espero :(\n");
            printf("tengo id %d\n", getpid());
        }
        else{
            printf("PADRE: hola soy el padre\n");
            waitpid(getpid(), NULL, 0);
            printf("Anuncio: El hijo con código %d ha terminado\n", getpid());
            printf("PADRE: bye\n");
        }
    }
    return 0;
} 