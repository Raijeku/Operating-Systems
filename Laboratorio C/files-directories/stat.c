#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
 
int main(int argc, char **argv)
{
    if(argc != 2)    
        return 1;
 
    struct stat fileStat;
    if(stat(argv[1],&fileStat) < 0)    
        return 1;
 
    printf("Información del directorio %s\n",argv[1]);
    printf("---------------------------\n");
    printf("Tamaño de Archivo: \t\t%d bytes\n",fileStat.st_size);
    printf("Cantidad de Referencias: \t%d\n",fileStat.st_nlink);
    printf("Número de bloque: \t\t%d\n",fileStat.st_ino); 
  
    return 0;

}