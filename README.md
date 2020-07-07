# Fundamentos de algoritmos

Proyecto de fines educativos.

Proyecto donde se analizan los fundamentos del desarrollo de algirítmos y su implementación en lenguaje C.

# Algoritmos
---

  Nuestra vida, ya sea que trabajemos con computadoras o no, esta llena de algoritmos, una receta de cocina, por ejemplo, es un algoritmo, suponiendo que se pienza en el acto de cocinar como un proceso, con un conjunto de ingredientes como los elementos de entrada, una serie de pasos de cocción y preparación como los pasos a realizar y un plato realizado como el resultado final de la aplicación de dicho proceso.

   Un [algoritmo](https://es.wikipedia.org/wiki/Algoritmo) es un conjunto finito, ordenado y no ambiguo de reglas y operaciones con el fin de resolver un problema, cumplir un objetivo o realizar una acividad determinada.
   
[![Algoritmos](https://img.youtube.com/vi/L2CtMfqkS-c/0.jpg)](https://www.youtube.com/watch?v=L2CtMfqkS-c)

   Un algoritmo debe determinar las acciones que se deben ejecutar y el orden en el cual deben ser ejecutadas para resolver un problema con el uso de una computadora.

   La ejecucion de un algoritmo implica la entrada, el almacenamiento, el tratamiento y la salida de ciertos datos que deben ser procesados para lograr el fin para el cual se diseña el algoritmo en cuestion.
   
   El conocimiento de los fundamentos de la construcción de algoritmos constituye la base para quienes pretenden construir programas y sistemas que cumplan con los más básicas atributos de calidad: robustez, confiabilidad, eficiencia, economía.
Para que se cumpla con el principio de robustez, un algoritmo debe comportarse de acuerdo con las especificaciones en todas las circunstancias posibles.

Ejemplo:

Algoritmo de los pasos que se deben realizar para ir a trabajar:

```
1. Levantarse de la cama.
2. Quitarse la pijama.
3. Dirigirse al baño.
4. Tomar una ducha.
5. Vestirse.
6. Tomar el desayuno.
7. Diritirse al trabajo.
```

Debemos poner de relieve algunas premisas de este algoritmo:

   Primeramente el nivel de detalle puede ser diferente segun la interpretacion de quien lo construye y segun el uso que se le hara al algoritmo. Por ejemplo, el paso 4 que corresponde a la accion de vestirse puede ser expresada en pasos mas detallados, segun el requerimiento, puede necesitar ser descompuesto en los detalles siguientes:

```
5.1 Colocarse la ropa interior.
5.2 Colocarse el pantalon.
5.3 Colocarse la camisa.
5.4 Colocarse los calcetines.
5.5 Colocarse los zapatos.
```
   
   Otro factor a tener en consideracion es el hecho de que las acciones deben ser realizadas en el orden indicado, ya que obviar algun paso o ejecutarlo en un orden diferente al indicado no garantiza la correcta ejecucion de la accion planteada.

   Todo algoritmo es considerado inicialmente como un proceso secuencial, en virtud de que las acciones que los conforman se ejecutan unas a continuacion de otras y nunca se ejecutan de manera simultanea.

## Caracteristicas de los algoritmos

   La descripcion de un problema en lenguaje algoritmico debe cumplir con algunas suposiciones necesarias para una adecuada resolucion del problema que se pretende resolver por medio del uso de una computadora:

- El numero de datos de entrada para ser procesados por el algoritmo pueden ser indeterminados pero debe ser un numero finito de datos.
- Para poder usar los datos para la realizacion de las operaciones, primero deben obtenerse para su uso.
- Un algoritmo debe ejecutarse en un numero finito de pasos para considerarse como tal.
- Los pasos que conforman la descripcion del proceso deben realizarse en el orden especifico en el que fueron especificados.
- Los pasos que conforman la descripcion del proceso deben pertenecer a acciones correspondientes al repertorio de las realizables por la computadora.

   Para representar el diseño de un algoritmo sencillo, se utiliza un lenguaje con sintaxis limitada llamado [pseudocódigo](https://es.wikipedia.org/wiki/Pseudoc%C3%B3digo), el cual se utiliza con la finalidad de traducir la descripcion del problema a un lenguaje intermedio entre el castellano y el [lenguaje de programación](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n) que se va a utilizar para resolver el problema en cuestión, esto con la finalidad de facilitar el diseño del programa.
   
   Para diseñar algoritmos en pseudocodigo que pueda ser traducido con mayor facilidad a un lenguaje de programacion luego, o simplemente para usar el pseudocodigo para resolver los problemas algoritmicos a los que nos enfrentamos, se puede usar una plataforma muy versatil que permite realizar esta labor, [PSeint](https://es.wikipedia.org/wiki/Pseudoc%C3%B3digo), cuyo proyecto donde se puede descargar el programa se encuentra en el siguiente enlace:
http://pseint.sourceforge.net/

   Para fijar un ejemplo de lo que es un problema algoritmico y como se resuelve con el uso de la computadora, vamos a resolver el sencillo calculo del valor medio de un grupo de datos ingresados por el usuario.

   Siguiendo el concepto basico de considerar un algoritmo como el ingreso de unas entradas, un proceso y la obtencion de unas salidas, vamos a realizar este analisis comenzando por desglozar el problema planteado siguiendo este principio.

- *Entrada:* esta formada por los datos sobre los que se va a operar para calcular el valor promedio de los mismos.

- *Proceso:* realizar la lectura de los datos ingresados por el usuario y ejecutar el calculo exigido para obtener el valor promedio.

- *Salida:* el valor promedio resultado del proceso ejecutado sobre los datos previamente ingresados por el usuario.

   Un algoritmo esta conformado por un estado previo, en el cual se encuentra al momento de iniciar su operacion, y un estado final, en el cual se encuentra luego de haber usado las entradas facilitadas y realizado el proceso requerido con estos datos.

El estado previo se puede definir de la siguiente forma:

- Pre: entrada = una expresion que describe todas las posibles entradas del problema.

- Pos: entrada = vacio y salida = una descripcion de todas las salidas que pueden darse para
cada entrada.

   En el caso que nos ocupa, el calculo del valor promedio de una serie de datos ingresados por el usuario, los estados del algoritmo pueden ser descritos de la siguiente manera:

Pre: entrada = un conjunto no vacio de valores numericos comprendidos dentro de un rango 
de valores determinado.

Pos: entrada = vacio y salida = valor promedio de los datos ingresados como entrada.

## Tipos de datos

El tipo de dato define el conjunto de valores que puede tomar una variable, junto con el conjunto de operaciones que se pueden realizar sobre dicha variable. Por ejemplo, el tipo entero simple define un conjunto de valores enteros comprendidos en un determinado intervalo, para los que estan definidas las operaciones de suma, resta, multiplicación y división (entre otras).

Para determinar de forma clara y precisa el conjunto de valores que se ingresan, procesan y muestran durante la ejecucion de un algoritmo, se debe tener muy claro los tipos de datos que existen para su representacion. Los tipos de datos basicos son el entero, el valor real, el lógico, el caracter y la cadena de caracteres.

- El tipo de dato entero son números que solo toman valores enteros, aquellos que no permiten parte decimal, como 1, 2 o 3

- El tipo de dato real son números que contienen una parte decimal, como 10.25 o 3.141594

- El tipo de dato lógico es aquel que solo puede tomar dos posibles valores, o verdadero o falso.

- El tipo de dato caracter es aquel que esta conformado por un solo caracter como 'a' o 'z'.

- El tipo de dato cadena de caracteres es aquel conformado por una serie de caracteres, como "nombre" o "Hola mundo".

## Variables

Una variable se puede comparar con un pizarron donde se escribe un valor, este puede leerse tantas veces como sea necesario, se puede borrar el valor actual y sobreescribirlo con un nuevo valor, con la observacion de que esta sobreescritura implica la perdida del valor anterior.

Para almacenar un valor determinado en una variable, se debe tener en consideracion que dicho valor debe ser del tipo de dato del que se definio dicha variable, esta accion se realiza con la operacion de asignacion, que se representa con el simbolo igual (=).

## Sentencia de asignacion

El operador de asignación es el operador mas básico y frecuentemente usado en los programas.
Consiste en almacenar el valor indicado a la derecha de una sentencia en la variable indicada a la izquierda de dicha sentencia.

El valor almacenado en una variable permanece guardado sin modificaciones hasta que dicho valor se cambia a través de una sentencia con el operador de asignación o hasta que finaliza el programa.

El valor almacenado en una variable a través de un operador de asignación puede provenir de uno de los siguientes casos:

-	Un valor simple que se corresponda con el tipo de variable en la cual se v a almacenar.

```
entero a; // Se declara una variable de tipo entero
a = 10; // Se le asigna a la variable a el valor de 10
```

-	El valor contendido en otra variable del mismo tipo

```
entero b = 15; // Se declara e inicializa una variable de tipo entero con el valor 15
a = b; // Se asigna a la variable a el valor contenido en la variable b
```

-	El valor de retorno de una función

```
entero suma(int a, int b){
    return a + b; // Se retorna el valor de la suma de los argumentos recibidos por la función
}
entero main(){
    entero x = 5;
    entero y = 15;
    entero z;
    z = suma(x, y);
    retornar 0;
}
```

-	El resultado de una expresión que puede contener valores simples, variables y funciones
entero w;

```
w = 10 * suma(x, y) + b; // Se asigna a la variable entera w el resultado de la expresión indicada
```

# Representación del problema en lenguaje algoritmico

   Un problema algorítmico es aquel que es susceptible de ser resuelto con la ayuda de un computador, ya que requiere la ejecución de una serie de pasos bien definidos que llevan a la obtencion de un resultado a partir de una serie de datos de entrada ingresados por el usuario de dicho programa, bien sea este ultimo un ser humano que ingresa datos a traves del teclado, otro programa o un sistema externo al mismo.

   Las computadoras poseen solo un repertorio limitado de instrucciones elementales que es capaz de comprender y obedecer, las cuales se ejecutan con gran rapidez y confiabilidad.

   Una vez determinados el estado inicial y final del algoritmo, lo que representa la entrada y la salida del mismo, procedemos a describir en *lenguaje natural* el proceso que debe ser ejecutado para a partir de las entradas definidas, obtener el resultado final esperado, proceso durante el cual el usuario pierde el control sobre el algoritmo que se esta ejecutando y todo el proceso es completamente automatico. El proceso que debe ser llevado a cabo para obtener el valor promedio de una serie de datos de entrada se describe a continuacion:

```
   1. Obtener los datos de entrada.  
   2. Determinar el numero de elementos que componen el conjunto de datos de entrada.  
   3. Calcular la suma de todos los valores de los datos ingresados por el usuario.  
   4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores ingresado.  
   5. Mostrar el valor promedio de los datos ingresados.  
```

   Una vez establecidos los pasos que deben ser ejecutados para lograr el resultado deseado, se procede a describir de manera detallada cada paso con al finalidad de alcarar el proceso que debe ser realizado en cada paso para su posterior codificacion.

1. Obtener los datos de entrada: en este paso se deben determinar previamente aspectos tales como el numero minimo y maximo de datos que se va a ingresar, el rango dentro del cual dichos valores deben estar, el tipo de dato que se va a ingresar, el medio a traves del cual se van a ingresar al programa, digitados directamente por el usuario, a través de un archivo con valores, como resultado de otra función del mismo programa, etc. En el caso que nos ocupa como se definio un conjunto no vacio de datos, esto significa que debe existir por lo menos un dato de entrada para realizar el calculo correspondiente. Se asume para efectos del programa que se va a desarrollar, que los datos se ingresan a través del teclado.

Mostrar en pantalla el mensaje de ingresar datos para el calculo  

```
Ingresar dato 1  
Ingresar dato 2  
Ingresar dato 3
```

2. Determinar el numero de elementos que componen el conjunto de datos de entrada: se debe hacer un conteo del numero de datos que se ingresan al programa.

```
Numero de datos = 3
```

3. Calcular la suma de todos los valores de los datos ingresados por el usuario: se procede a sumar los valores de los datos ingresados por el usuario.

```
Suma = dato 1 + dato 2 + dato 3
```

4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores ingresado: se procede a realizar la division entre la suma de los valores de los datos ingresados por el usuario y el numero de datos ingresados, el valor obtenido corresponde al valor promedio.

```
Promedio = Suma / Numero de datos
```

5. Mostrar el valor promedio de los datos ingresados: se debe determinar si se muestra el valor obtenido o se pasa como un valor a otra funcion u otro dispositivo que lo requiera, en el caso que nos ocupa, se muestra el valor en la pantalla del computador.

```
Mostrar en pantalla el valor Promedio
```

   Una vez definidos la entrada, el proceso y la salida obtenida del algoritmo diseñado, se procede a realizar su construccion en un lenguaje de pseudocodigo con la finalidad de facilitar su traducción a un lenguaje de programación específico, que permita ejecutarlo para comprobar su resultado y proceder a realizar este mismo proceso de manera automática.

# Creación de un programa en [Pseudocódigo](https://es.wikipedia.org/wiki/Pseudoc%C3%B3digo) con [PSeInt](https://es.wikipedia.org/wiki/PSeInt)

La finalidad del uso del Pseudocódico es traducir un algoritmo en lenguaje natural a un lenguaje formal que falicite su conversión a un lenguaje de programación específico. Para la creacion de programas en pseudocodigo, para entender los principios de la programacion, se puede usar la aplicacion [PSeInt](http://pseint.sourceforge.net/). PSeInt es una herramienta para asistir a un estudiante en sus primeros pasos en programación. Mediante un simple e intuitivo pseudolenguaje en español (complementado con un editor de diagramas de flujo), le permite centrar su atención en los conceptos fundamentales de la algoritmia computacional, minimizando las dificultades propias de un lenguaje y proporcionando un entorno de trabajo con numerosas ayudas y recursos didácticos.

[![PSeInt](https://img.youtube.com/vi/RObTkiOjXpg/0.jpg)](https://www.youtube.com/watch?v=RObTkiOjXpg)

Para facilitar la conversion del algoritmo planteado, como se habia indicado con anterioridad, se expresa el mismo en lenguaje de pseudocodigo, lo que hace al algoritmo comprensible y manejable, brindando ademas la posibilidad de probar el mismo con PSeInt.

1. Obtener los datos de entrada.


2. Determinar el numero de elementos que componen el conjunto de datos de entrada.


3. Calcular la suma de todos los valores de los datos ingresados por el usuario.


4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores ingresado.


5. Mostrar el valor promedio de los datos ingresados.


# Lenguaje de programación C

   [El lenguaje de programación](https://es.wikipedia.org/wiki/Lenguaje_de_programaci%C3%B3n) [C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)) fue desarrollado en los laboratorios AT&T por [Dennis Ritchie](https://es.wikipedia.org/wiki/Dennis_Ritchie "Biografia de Dennis Ritchie"), quien en colaboracion con [Ken Thompson](https://es.wikipedia.org/wiki/Ken_Thompson "Biografia de Ken Thompson") creo el [sistema operativo](https://es.wikipedia.org/wiki/Sistema_operativo) [UNIX](https://es.wikipedia.org/wiki/Unix). C es el lenguaje de pogramacion de alto nivel de proposito general más popular.

## Evolucion del lenguaje de programación C

El desarrollo del [lenguaje de programación C](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)) inicio con el [lenguaje BCPL](https://es.wikipedia.org/wiki/BCPL_(lenguaje_de_programaci%C3%B3n)), desarrollado por [Martin Richards](https://es.wikipedia.org/wiki/Martin_Richards), luego el [lenguaje B](https://es.wikipedia.org/wiki/B_(lenguaje_de_programaci%C3%B3n)) creado por [Ken Thompson](https://es.wikipedia.org/wiki/Ken_Thompson) en 1970, el lenguaje C fue desarrollado por [Dennis Ritchie](https://es.wikipedia.org/wiki/Dennis_Ritchie) en 1971.

## Caracteristicas el lenguaje C

El lenguaje C se caracteriza por ser un lenguaje de alto nivel, de proposito general, compilado, con fuerte tipado:

- Reducido tamaño con un numero pequeño de palabras clave, lo cual reduce considerablemente la curva de aprendizaje.  
- El tamaño reducido del lenguaje es compensado por las bibliotecas estándar que implementan gran cntidad de funciones especializadas.  
- El lenguaje de programación C tiene un muy reducido conjunto de instrucciones, las cuales se complementan con el uso de bibliotecas de funciones estándar, math.h, lib.h, stdio.h entre otras.  
- Se recomienda cuando se requiere una función específica en un programa, antes de desarrollar dicha función, por completo, verificar en la biblioteca estándar del compilador que este utilizando si dicha función existe y utilizarla, esto ahorra tiempo de desarrollo y depuración de los programas.  
- Contiene instrucciones de bajo nivel dirigidas a bits, lo cual le da versatilidad al lenguaje.  
- La existencia de gran cantidad de compiladores para una gran variedad de plataformas hardware permite su fácil portabilidad.  
- Se genera código ejecutable de gran eficiencia.  

Para el desarrollo del programa se ha elegido el lenguaje de programacion C basicamente por las siguientes razones:

- Moderno, 
- Fácil de aprender, debido a que dispone de un reducido conjunto de sentencias que permite su fácil memorización y aprendizaje.
- Sintaxis similar a lenguajes actuales, tales como PHP, JavaScript, Java y otros, lo cual permite aprovechar el aprendizaje del lenguaje C para aprender la sintaxis de otros lenguajes de programación.
- Programas eficientes

Para un analisis mas exaustivo de las razones para aprender y usar el lenguaje de programacion C, se debe revisar el siguiente articulo
https://cacharrerosdelaweb.com/2017/07/programadores-empezar-por-c.html

   Con la intensión de mantener la portabilidad entre diferentes plataformas, un grupo de fabricantes solicitaron en 1983 al Instituto Estadounidende se Estandares nacionales [ANSI](https://es.wikipedia.org/wiki/Instituto_Nacional_Estadounidense_de_Est%C3%A1ndares), la creacion de un estandar del lenguaje C. Ante esta solicitud se formó el Comite Técnico X3J11, cuyo resultado fue la aprobación en el año 1989 del [estándar ANSI del lenguaje C](https://es.wikipedia.org/wiki/ANSI_C), este estándar reune un grupo de funciones de uso comun de C.

   Existen numerosas herramientas disponibles para la compilacion de los programas fuente escritos en lenguaje C en diferentes plataformas, entre los cuales se pueden mencionar los siguientes:

- DevC++ compilador libre para compilar codigo fuente en lenguaje C para Windows.  
http://orwelldevcpp.blogspot.com/

- CodeBlocks compilador disponible en diferentes plataformas para compilar codigo fuente en 
lenguaje C.  
http://www.codeblocks.org/

- Eclipse para desarrollo C/C++ entorno de desarrollo que ademas de compilar los programas
escritos en lenguaje C, dispone de numerosas caracteristicas adicionales.  
https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/photonr

   El lenguaje C no cuenta con sentencias directas de entrada y salida de datos, por ello se debe usar las funciones contenidas en la libreria estandar correspondiente que permite enviar y recibir datos a traves de los perifericos. Esta libreria se invoca en el programa a traves de la siguente sentencia:

`#include <stdio.h>;`

Esta libreria brinda las funciones necesarias para mostrar informacion y recibirla a traves de los canales de entrada y salida, por defecto el monitor y el teclado.

Para una referencia mas amplia sobre las librerias disponibles en el lenguaje C para ser usadas y aprovechadas en los programas que desarrollamos, se debe consultar el siguiente enlace:
https://es.wikipedia.org/wiki/Biblioteca_est%C3%A1ndar_de_C

La funcion printf() imprime en la unidad de salida, el monitor, el texto y las constantes y variables que se indiquen a traves de la misma. El formato general de esta funcion es la mostrada a continuacion:

`int printf("cadena de control", tipoargumento1, tipoargumento2, ...);`

la funcion printf() tiene un valor de retorno de tipo int que representa el numero de caracteres escritos en la llamada.

Se imprime la cadena indicada en "cadena de control", ademas de una serie de argumentos cuyo formato se indica de la siguiente manera:

%d, %i		decimal entero  
%u		      entero sin signo  
%c		      caracter  
%f		      notacion decimal de punto flotante  
%p		      puntero  
%o		      octal sin signo  
%x, %X		hexadecimal sin signo  
%s		      cadena de caracteres  
%e, %g		notacion cientifica de punto flotante  

La funcion scanf() se usa para leer datos de la entrada estandar, el teclado por defecto, la forma general de esta funcion es la siguiente:

`int scanf("%x1%x2", &argumento1, &argumento2, ...);`

La funcion scanf() devuelve como valor de retorno el numero de conversiones de formato realizadas con exito.

# Codificacion del algoritmo en lenguaje C

Para realizar la construccion del programa a partir del algoritmo diseñado se procede a traducir las instrucciones en lenguaje de pseudocodigo a lenguaje con la sintaxis de C.

Pre: entrada = un conjunto no vacio de valores numericos comprendidos dentro de un rango 
de valores determinado.

1. Obtener los datos de entrada.

```c
//Se procede a recibir los datos de entrada para resalizar el calculo del promedio de los datos introducidos  
    printf("\n");                                //Sentencia que muestra una linea en blanco  
//Sentencia que muestra un mensaje en la pantalla  
    printf("\nIntroduzca a continuacion los datos a ser usados para calcular el promedio.\n");  
//Sentencia que espera un valor desde el teclado para ser asignado a la variable indicada  
    scanf("%d", &variable1);  
    scanf("%d", &variable2);  
    scanf("%d", &variable3);  
    printf("\nLos valores introducidos son: %d, %d, %d\n", variable1, variable2, variable3);  
```

2. Determinar el número de elementos que componen el conjunto de datos de entrada.

```c
//se ingresan 3 argumentos  
    n = 3;  
```

3. Calcular la suma de todos los valores de los datos ingresados por el usuario.

```c
//Sentencia que le asigna a la varialbe suma el resultado de la operacion aritmetica suma de las variables  
//variable1, variable2 y variable3  
    suma = variable1 + variable2 + variable3;  
```

4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores ingresado.

```c
//Sentencia que le asigna a la varible promedio el resultado de la operacion aritmetica divicion entre  
//las variables suma y n  
    promedio = suma / n;  
```

5. Mostrar el valor promedio de los datos ingresados.

```c
//%f indica que la variable promedio se muestra en pantalla en formato de coma flotante  
    printf("\nEl valor promedio es: %f\n", promedio);  
```

Pos: entrada = vacio y salida = valor promedio de los datos ingresados como entrada.

# Actividad

Como se observa en el algoritmo desarrollado, solo se permite el ingreso de tres números para realizar el calculo del valor promedio, como podria modificarse el algoritmo presentado de forma tal que permita recibir un número indeterminado de valores de entrada por teclado para realizar el calculo del valor promedio.

# Referencias:

Introducción a la algorítmica. Disponible en:  
<https://openlibra.com/es/book/introduccion-a-la-algoritmica>

B. A. Trajtenbrot. Algoritmos y resolucion automatica de problemas. Editorial MIR. Disponible en:
<http://www.librosmaravillosos.com/losalgoritmosylaresolucion/index.html>

Tecnicas de diseño de algoritmos. Disponible en:  
<https://openlibra.com/es/book/tecnicas-de-diseno-de-algoritmos>

Historia de los algoritmos y los lenguajes de programación (audio). Disponible en:  
https://www.ivoox.com/417196

Algoritmos. Lista de videos. Disponible en:  
https://www.youtube.com/playlist?list=PLCZKC1YTwC0mOa4g5QyCNS52-N6VMTmsJ

Fundamentos de programacion Luis Joyanes Aguilar  
<https://www.freelibros.org/programacion/fundamentos-de-programacion-4ta-edicion-luis-joyanes-aguilar>

Pere Brunet. Nosotros y los algoritmos. El Mundo. Disponible en:
<http://www.elmundo.es/economia/2017/02/27/58b404f846163fc7208b45cd.html>

Manual de PSeInt  
<https://drive.google.com/open?id=1lrJgRBGpUM4L5MbCb9MgNEtHqrze_VBd>

Lista de reproducción de videos PSeInt  
<https://www.youtube.com/playlist?list=PLiplYDjUMtth8RvrndUPDVOMD20I4O2Wd>

Fundamentos de programacion en C  
<https://openlibra.com/es/book/fundamentos-de-programacion-en-c>

Aprenda lenguaje ANCI C como si estuviera en primero. Javier Garcia de Jalón de la Fuente y otros. Escuela Superior de Ingenieros Industriales. Universidad de Navarra. Disponible en:  
<https://openlibra.com/es/book/aprenda-el-lenguaje-ansi-c-como-si-estuviera-en-primero>
