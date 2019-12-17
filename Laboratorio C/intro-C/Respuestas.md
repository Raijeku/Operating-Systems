2. El argv es donde se guarda cada uno de los argumentos que se utilizan en el main en forma arreglo de caracteres
El argc es la cantidad de parametros que contiene el arreglo argv

El programa se usa ingresando una linea de comandos que luego pasa a ser interpretada según dos strings clave: 'debug' y '-file'. Inicialmente, el programa cuenta cuántos argumentos fueron ingresados paar visualizar la cantidad. Luego, en el caso de encontrar el string 'debug' como argumento, se dice que el programa está en modo debug, mientras que si lee '-file' como argumento, pasa al siguiente string para buscar el nombre del archivo y al final muestra que el programa ha terminado. 

3. La función atoi convierte el parámetro en un entero, en el caso de empezar por un caracter. 
atol() - convierte un string en un long integer
atof() - convierte un string en un numero punto flotante (double)
itoa() - convierte un entero en una cadena de caracteres

ecvt(), gcvt() y fcvt() - convierten un numero de punto flotante a cadena de caracteres