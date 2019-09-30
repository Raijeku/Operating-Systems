#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
 
 
int main(int argc, char **argv)
{

    int d;
    struct dirent *dir;
    int numLines=0;
    int deletedLines=0;
    int lineas;
    

    if(argc != 3)    
        return 1;
 
    //struct stat fileStat;
    //printf("%c",argv[1][0]);
    if(argv[1][0]=='-'){
        int len=sizeof(argv[1]) / sizeof(char);
        char number[len-1];
        char *pos;
        int faltan;

        for(int i=1;i<len;i++){
            number[i-1]=argv[1][i];
            
        }
        int n=atoi(number);
        if(n!=0){
            struct stat fileStat;
            if(stat(argv[2],&fileStat) < 0)    
                return 1;
            char buffer[fileStat.st_size];
            d = open(argv[2],O_RDONLY);
            if (d>=0)
            {
                read(d, buffer, fileStat.st_size);
                for (int i=0; i<sizeof(buffer);i++){
                    if(buffer[i]=='\n'){
                        numLines+=1;
                    }
                }
                numLines+=1;
                lineas = numLines-n;
                if(lineas > 0){
                    for (int i=0; i<sizeof(buffer);i++){
                        if(buffer[i]=='\n' && lineas>0){
                            lineas--;
                            pos = &buffer[i];
                        }
                        
                    }
                } else {
                    pos = &buffer;
                }
                
                printf("%s\n",pos);

            } else {
                return 1;
            }
        }
        
    } else {
        return 1;
    }

    return 0;

}