#include <stdio.h>
#include <unistd.h>


int main (void){
  int x=100;
  int s = fork();
  if(s==0){
      printf("Hola soy el hijo y x vale %d \n", x);
      x +=200;
      printf("Hola soy el hijo y ahora x vale %d", x);
  }
  else{
      printf("Hola soy el padre y x vale %d\n", x);
      x+=100;
      printf("Hola soy el padre y ahora x vale %d\n", x);
  }

}