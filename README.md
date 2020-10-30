## **MÉTODO DE BURBUJA**


------------


------------

***Programa de consola utilizando el Método de Ordenamiento de Burbuja.***

------------

El siguiente programa fue realizado en el lenguaje de programación C++, asimismo el compilador utilizado fue Dev C++, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para comprobar que efectivamente el programa funciona correctamente.

¿En qué consiste el método de burbuja?

> La técnica es conocida como ordenamiento burbuja o método de hundimiento, ya que los valores más pequeños “flotan” gradualmente hacia arriba, hacia el encabezado del arreglo, como burbujas de aire hacia la superficie del agua, mientras que los valores más grandes se hunden en el fondo del arreglo. La técnica es para realizar varias pasadas a través del arreglo. En cada pasada, se comparan pares sucesivos de elementos. Si el par está en orden ascendente (o si los valores son idénticos), dejamos los valores como están. Si el par se encuentra en orden decreciente, sus valores se intercambian en el arreglo.


------------


------------

El código comienza con la importación de las librerías fundamentales para la realización del programa. Dichas librerías podemos verlo en la siguiente captura:

![imagen](https://user-images.githubusercontent.com/71055467/97707776-66088280-1a7d-11eb-84e2-992f6791e7e5.png)

La siguiente parte del código se trata de la **función main**, esta función es fundamental para hacer un programa en **C++**, en esta ocasión la mayor parte del código fuente se encuentra dentro de la función, por ello solo mostraremos las siguientes líneas.

Lo primero que encontramos dentro de la función main es la declaración de un paquete útil para poder escribir libremente en el lenguaje español, asimismo en las siguientes líneas se declaran las variables necesarias.

![imagen](https://user-images.githubusercontent.com/71055467/97708291-2726fc80-1a7e-11eb-8d65-71c8a70d31ff.png)

Ahora, el siguiente código se encarga de pedir al usuario cinco números, uno por uno y cada número se va almacenando en las variables  declaradad anteriormente.

![imagen](https://user-images.githubusercontent.com/71055467/97708412-635a5d00-1a7e-11eb-9e1b-3d73e7e3e864.png)

Una vez ingresado los datos, se procede a pedir al usuario que elija una opción para interactuar con los números ingresados. También se  crea un array de cinco elementos.

![imagen](https://user-images.githubusercontent.com/71055467/97708673-c77d2100-1a7e-11eb-9d83-4c99a49e2244.png)

A continuación, se presenta la sentencia switch con sus respectivos casos. En el primer caso simplemente el programa se encarga de sumar los datos ingresados e imprime el resultado.
En el caso 2 es en donde se hace uso del método aqui tratado, ya que es donde se encarga de ordenar los elementos del array, haciendo uso de los ciclos for y de la condición if, una vez ordenados los elementos simplemente se vuelve a recorrer para imprimirlos en pantalla.
En el caso 3 también se hace uso del método de hundimiento para poder encontrar el elemento con el valor más grande. y de igual manera se imprime dicho resultado.
Asimismo, se encuentra otras sentencias en donde pide al usuario si desea salir o volver al menú principal para realizar alguna otra operación con los datos. 

![imagen](https://user-images.githubusercontent.com/71055467/97709564-2c854680-1a80-11eb-840f-e9e7917b109b.png)
![imagen](https://user-images.githubusercontent.com/71055467/97709601-37d87200-1a80-11eb-9367-ca9ceeda29b7.png)

------------


------------


Ya que se ha dado una explicación de del código pasamos a la ejecución de  programa, con sus respectivas screenshots.

Lo primero que hace el programa es pedirnos 5 datos, de la siguiente forma:

![imagen](https://user-images.githubusercontent.com/71055467/97709937-b6cdaa80-1a80-11eb-9e15-8789719a427d.png)

Ahora nos muestra el menú del que hemos hablado anteriormente:

![imagen](https://user-images.githubusercontent.com/71055467/97710041-d664d300-1a80-11eb-9779-56aa4a4f73bf.png)

Como seleccionamos la opción 1, nos imprimirá la suma de los números ingresados:

![imagen](https://user-images.githubusercontent.com/71055467/97710137-f85e5580-1a80-11eb-884d-a71d5a2220c0.png)

Ahora nos pide que elijamos una de las dos opciones que nos da; deseamos salir o volver al menú principal.

![imagen](https://user-images.githubusercontent.com/71055467/97710263-26dc3080-1a81-11eb-88da-2b0bed3fda80.png)

Como seleccionamos la opción 2 volveremos al menú y ahora seleccionamos la opción 2 para que nos ordene los números y los imprime, esto lo podemos ver a continuación:

![imagen](https://user-images.githubusercontent.com/71055467/97710504-71f64380-1a81-11eb-8015-f3bd53b50d27.png)

Ahora, de nuevo nos pide si deseamos volver o salir del programa, elegimos la opción 2, para seleccionar la última opción del menú principal.

![imagen](https://user-images.githubusercontent.com/71055467/97710675-aec23a80-1a81-11eb-9e62-19203e070b8f.png)

![imagen](https://user-images.githubusercontent.com/71055467/97710732-c00b4700-1a81-11eb-81fd-d18710d18206.png)

Como seleccionamos la opción 3, lo que nos muestra en consola es el número mayor de los que hemos introducido y con esto vemos que el método de burbuja funciona correctamente.

Ahora simplemente seleccionamos la opción 1 para salir y la ejecución del programa finaliza, como se ve en las capturas siguientes:

![imagen](https://user-images.githubusercontent.com/71055467/97710981-16788580-1a82-11eb-8e01-fbc7d23ac32d.png)

![imagen](https://user-images.githubusercontent.com/71055467/97711010-22fcde00-1a82-11eb-99a0-60366e9b687c.png)


------------


------------


En conclusión, al programar el código en el compilador, hemos aprendido diversas cosas, como por ejemplo que existen no solo un método sino diversos métodos de ordenamiento que funcionan de manera diferente cada uno de ellos, asimismo sabemos que estos mismos métodos se dividen en dos partes, podemos encontrar a los de ordenamiento internos y los e ordenamiento externos. Asimismo, el método de burbuja es uno de los métodos más cómunes y sencillos de realizar, pero que  sin embargo, su funcionamiento es algo complejo de entender para una persona con pocos conocimientos de programación.
