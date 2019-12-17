#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
 
int main(int argc, char **argv)
{

    DIR *d;
    struct dirent *dir;

    if(argc > 3)    
        return 1;
 
    struct stat fileStat;
    /*if(argc>1){
        if(stat(argv[argc-1],&fileStat) < 0)    
            return 1;
    }*/
    if(strcmp(argv[1],"-l")==0){
        if(argc==2){
            d = opendir(".");
            if (d)
            {
                while ((dir = readdir(d)) != NULL)
                {
                    if(stat(dir->d_name,&fileStat) < 0)    
                        return 1;
                    printf("Información del directorio %s \tTamaño de Archivo: %d bytes \tCantidad de Referencias: %d \tNúmero de bloque: %d \n", dir->d_name, fileStat.st_size, fileStat.st_nlink, fileStat.st_ino);
                }
                closedir(d);
            }
        } else if(argc==3){
            d = opendir(argv[2]);
            if (d)
            {
                while ((dir = readdir(d)) != NULL)
                {
                    if(stat(dir->d_name,&fileStat) < 0)    
                        return 1;
                    printf("Información del directorio %s \tTamaño de Archivo: %d bytes \tCantidad de Referencias: %d \tNúmero de bloque: %d \n", dir->d_name, fileStat.st_size, fileStat.st_nlink, fileStat.st_ino);
                }
                closedir(d);
            }
        }
    } else{
        printf("othersup");
        if(argc==1){
            d = opendir(".");
            if (d)
            {
                while ((dir = readdir(d)) != NULL)
                {
                    printf("%s\n", dir->d_name);
                }
                closedir(d);
            }
        } else if(argc==2){
            d = opendir(argv[1]);
            if (d)
            {
                while ((dir = readdir(d)) != NULL)
                {
                    printf("%s\n", dir->d_name);
                }
                closedir(d);
            }
        }
    }
    /*printf("Información del directorio %s\n",argv[argc-1]);
    printf("---------------------------\n");
    printf("Tamaño de Archivo: \t\t%d bytes\n",fileStat.st_size);
    printf("Cantidad de Referencias: \t%d\n",fileStat.st_nlink);
    printf("Número de bloque: \t\t%d\n",fileStat.st_ino); */
  
    return 0;

}