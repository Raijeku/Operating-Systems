# Files and Directories #

In this assignment we wil familiarize ourselves with the API described in the book chapter. To to so, you only have to write a few programs, mainly based in many UNIX utilities.

## Questions ##

1. **Stat**: Write your own version of the command ```stat```, which simply invokes the system call ```stat()``` in a file or directory. Print the size of the file, the assigned block number, reference (link) count, etc. What is the link count of a directory, how does the amount of entries in the directory change? Useful interfaces: ```stat()```, naturally.

2. **List Files**: Write a program that lists the files of a given directory. When it is called without arguments, the program should only print the names of the file. When it is invoked with the flag ```-l```, the program should print the information of each file such as owner, group, permissions and other information retrieved from the system call ```stat()```. The program should take an additional argument which is the target directory. For example, ```myls -l directory```. If no directory is given, the program should only use the current directory. Useful interfaces: ```stat()```, ```opendir()```, ```readdir()```, ```getcwd()```.

3. **Tail**: Write a program that prints a few lines of a file. The program should be efficient, especially in the way it gets closer to the end of the file, reads a block of data and then goes back until finding the solicited number of lines; up to that point, the program could print those lines from the beginning to the end of the file. To invoke the program, one should type: ```mytail -n file```, where ```n``` is the number of lines at the end of the file to be printed. Useful interfaces: ```stat()```, ```lseek()```, ```open()```, ```read()```, ```close()```.

4. **Recursive Search**: Write a program that prints the names of each file and directory in the filesystem tree, starting from a given point of the filesystem in the tree. For example, when it is executed without arguments, the program should start with the current directory and print its content, as well as with the contents of any of its subdirectores, etc. until the full tree, root in the CWD is printed. If only one argument is given (of the name of a directory), use this as root instead of the system. It refines its recursive search with more options for fun searches, similar to the powerful tool by command line ```find```. Useful interfaces: Solve it.


## Useful references ##

1. [Conceptos basicos claves resumidos](https://docs.google.com/document/d/1-336S7oKYwzSSSH-vzks8lGJ0R5VJoZu3PGBsz3vP2w/edit?usp=sharing)
2. [Aspectos basicos de C](https://github.com/repos-SO-UdeA/lab3)
3. [Manejo dinamico de memoria en C](https://github.com/repos-SO-UdeA/lab5)
4. [Manejo de archivos en C](https://github.com/repos-SO-UdeA/lab6)

En esta tarea, nos familiarizaremos con el API descrito en el capítulo del libro. Para hacer esto, usted solo debe escribir unos cuantos programas, la mayoria basada en varias utilidades UNIX.

## Questions ##

1. **Stat**: Escriba su propia versión del comando ```stat```, la cual simplemente invoca la llamada del sistema ```stat()``` en un archivo o directorio. Imprima el tamaño del archivo, el número de bloques asignado, reference (link) count, etc. Que es el link count de un directorio, como el numero de entradas en el directorio cambia? Interfaces Útiles: ```stat()```, naturalmente.

2. **List Files**: Escriba un programa que liste los archivos en un directorio dado. Cuando sea llamado sin argumentos, el programa deberá solo imprimir los nombres del archivo. Cuando se invoque con la flag ```-l```, el programa deberá imprimir la información de cada archivo tal como, owner, group, permissions y otra información obtenida de la llamada de sistema ```stat()```. El programa deberá tomar un argumento adicional el cual es el directorio a leer, por ejemplo, ```myls -l directory```.  Si ningún directorio es dado, el programa solo deberá usar el directorio de trabajo actual. Interfaces Útiles: ```stat()```, ```opendir()```, ```readdir()```, ```getcwd()```.

3. **Tail**: Escriba un programa que imprima una cuantas lineas de un archivo. El programa deberá ser eficiente, la forma como busca acercarse al final del archivo, leer un bloque de datos y luego retroceder hasta encontrar el número de líneas solicitado; hasta este punto, este podria imprimir esas lineas desde el principio al final del archivo. Para invocar el programa, uno deberia digitar: ```mytail -n file```, donde ```n``` es el número de lineas al final del archivo a imprimir. Interfaces Útiles: ```stat()```, ```lseek()```, ```open()```, ```read()```, ```close()```.

4. **Recursive Search**: Escriba un programa que imprima los nombres de cada archivo y directorio del arbol del sistema de archivos (file system tree), empezando en un punto dado del sistema de archivos en el arbol. Por ejemplo, cuando ejecute sin argumentos, el programa deberá empezar con el directorio de trabajo actual e imprimir su contenido, asi como con los contenidos de cualquier subdirectorio en este, etc., hasta que el arbol entero, root en el CWD sea impreso. Si se da un unico argumento (de un nombre de un directorio), use este como root en vez de el del sistema. Refine su busqueda recursiva con mas opciones de busqueda divertidas, similar a la poderosa herramienta por linea de comandos ```find```. Interfaces Útiles: Resolverlo.


## Referencias de utilidad ##

1. [Conceptos basicos claves resumidos](https://docs.google.com/document/d/1-336S7oKYwzSSSH-vzks8lGJ0R5VJoZu3PGBsz3vP2w/edit?usp=sharing)
2. [Aspectos basicos de C](https://github.com/repos-SO-UdeA/lab3)
3. [Manejo dinamico de memoria en C](https://github.com/repos-SO-UdeA/lab5)
4. [Manejo de archivos en C](https://github.com/repos-SO-UdeA/lab6)

