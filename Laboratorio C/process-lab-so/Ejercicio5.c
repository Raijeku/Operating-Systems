#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
int main() 
{ 
    if (fork()== 0){
        printf("Hijo: hola soy el hijo\n");
        printf("HIJO: bye\n");
        printf("Valor del wait en el hijo = %d\n", wait(NULL));
    }
    else
    { 
        printf("PADRE: hola soy el padre\n"); 
        int idh = wait(NULL); 
        printf("Anuncio: El hijo con código %d ha terminado\n", idh);
        printf("PADRE: bye\n"); 
    }
    return 0; 
} 