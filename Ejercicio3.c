#include <stdio.h>
#include <unistd.h>


int main (void){
    int x=1;
  if(fork()==0){
      printf("Hello\n");
  }
  else{
      sleep(1);
      printf("goodbye\n");
  }
}