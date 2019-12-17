# Memory Api

1. Cuando se intenta desreferenciar un puntero entero luego de asignarle la dirección NULL, se presenta un Segmentation Fault al intentar acceder a una sección de memoria a la que no tiene acceso el proceso actual. En este caso, se intenta acceder a la dirección de memoria de pointer para asignarle el valor de 5 pero como no tiene una dirección de memoria real, no debería poder acceder a NULL. Ver Figura 0

2. Para este caso, gdb mostró más información acerca del error en el que se incurrió en el algoritmo, especificando que su señal de error es un Segmentation fault, además de mostrar el registro en el que se encuentra la instrucción actual. Ver Figura 1

3. Cuando corre el comando, se revisa si ha habido un memory leak utilizando valgrind. Luego de tal hecho, se puede interpretar el resultado obtenido como las direcciones de memoria en las que se encuentra el error de memoria, así como el tamaño del acceso incorrecto e información detallada sobre el Heap posterior a él. Ver Figura 2

4. Cuando el programa se ejecuta, reserva la cantidad de bytes establecidos como argumento del malloc para la variable a la que es asignada. La convención normal de un programa elaborado en C es que se libera la memoria reservada al final de su ejecución. Gdb no es muy útil para encontrar este tipo de problema, ya que se enfoca en errores del código que impiden el funcionamiento normal del proceso, mientras que Valgrind se enfoca precisamente en observar la cantidad de memoria ocupada y liberada al final. Ver Figura 3

5. 

6. 

7. 

8. 