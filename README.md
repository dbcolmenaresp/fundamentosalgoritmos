# fundamentosalgoritmos

Proyecto donde se analizan los fundamentos del desarrollo de algirítmos y su implementación en lenguaje C.
Proyecto de fines educativos.

Un problema algoritmico es aquel que es susceptible de ser resuelto con la ayuda de un computador, ya que requiere la ejecucion de una serie de pasos bien definidos que llevan a la obtencion de un resultado a partir de una serie de datos de entrada ingresados por el usuario de dicho programa, bien sea este ultimo un ser humano que ingresa datos a traves del teclado, otro programa o un sistema externo al mismo.

Un algoritmo debe determinar las acciones que se deben ejecutar y el orden en el cual deben ser ejecutadas para resolver un problema con el uso de una computadora.

Ejemplo:

Algoritmo de los pasos que se deben realizar para ir a trabajar:

1. Levantarse de la cama.
2. Quitarse la pijama.
3. Tomar una ducha.
4. Vestirse.
5. Tomar el desayuno.
6. Diritirse al trabajo.

Debemos poner de relieve algunas premisas de este algoritmo:

Primeramente el nivel de detalle puede ser diferente segun la interpretacion de quien lo construye y segun el uso que se le hara al algoritmo. Por ejemplo, el paso 4 que corresponde a la accion de vestirse puede ser expresada en pasos mas detallados, segun el requerimiento, puede necesitar ser descompuesto en los detalles siguientes:

Colocarse la ropa interior.
Colocarse el pantalon.
Colocarse la camisa.
Colocarse los calcetines.
Colocarse los zapatos.

Otro factor a tener en consideracion es el hecho de que las acciones deben ser realizadas en el orden indicado, ya que obviar algun paso o ejecutarlo en un orden diferente al indicado no garantiza la correcta ejecucion de la accion planteada.

La descripcion de un problema en lenguaje algoritmico debe cumplir con algunas suposiciones necesarias para una adecuada resolucion del problema que se pretende resolver por medio del uso de una computadora:

* El numero de datos de entrada para ser procesados por el algoritmo pueden ser indeterminados
  pero debe ser un numero finito de datos.
* Para poder usar los datos para la realizacion de las operaciones, primero deben obtenerse 
  para su uso.
* Un algoritmo debe ejecutarse en un numero finito de pasos para considerarse como tal.
* Los pasos que conforman la descripcion del proceso deben realizarse en el orden especifico 
  en el que fueron especificados.
* Los pasos que conforman la descripcion del proceso deben pertenecer a acciones 
  correspondientes al repertorio de las realizables por la computadora.

Para fijar un ejemplo de lo que es un problema algoritmico y como se resuelve con el uso de la computadora, vamos a resolver el sencillo calculo del valor medio de un grupo de datos ingresados por el usuario.

Siguiendo el concepto basico de considerar un algoritmo como el ingreso de unas entradas, un proceso y la obtencion de unas salidas, vamos a realizar este analisis comenzando por desglozar el problema planteado siguiendo este principio.

Entrada: esta formada por los datos sobre los que se va a operar para calcular el 
valor promedio de los mismos.

Proceso: realizar la lectura de los datos ingresados por el usuario y ejecutar el calculo
exigido para obtener el valor promedio.

Salida: el valor promedio resultado del proceso ejecutado sobre los datos previamente 
ingresados por el usuario.

Un algoritmo esta conformado por un estado previo, en el cual se encuentra al momento
de iniciar su operacion, y un estado final, en el cual se encuentra luego de haber
usado las entradas facilitadas y realizado el proceso requerido con estos datos.

El estado previo se puede definir de la siguiente forma:

Pre: entrada = una expresion que describe todas las posibles entradas del problema.

Pos: entrada = vacio y salida = una descripcion de todas las salidas que pueden darse para
cada entrada.

En el caso que nos ocupa, el calculo del valor promedio de una serie de datos ingresados
por el usuario, los estados del algoritmo pueden ser descritos de la siguiente manera:

Pre: entrada = un conjunto no vacio de valores numericos comprendidos dentro de un rango 
de valores determinado.

Pos: entrada = vacio y salida = valor promedio de los datos ingresados como entrada.

-----------------------------------------------------------------------------------------
Representación del problema en lenguaje algoritmico.
-----------------------------------------------------------------------------------------

Una vez determinados el estado inicial y final del algoritmo, lo que representa la entrada
y la salida del mismo, procedemos a describir el proceso que debe ser ejecutado para
a partir de las entradas definidas, obtener el resultado final esperado, proceso durante 
el cual el usuario pierde el control sobre el algoritmo que se esta ejecutando y todo el 
proceso es completamente automatico. El proceso que debe ser llevado a cabo para obtener
el valor promedio de una serie de datos de entrada se describe a continuacion:

1. Obtener los datos de entrada.
2. Determinar el numero de elementos que componen el conjunto de datos de entrada.
3. Calcular la suma de todos los valores de los datos ingresados por el usuario.
4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores 
ingresado.
5. Mostrar el valor promedio de los datos ingresados.

Una vez establecidos los pasos que deben ser ejecutados para lograr el resultado deseado,
se procede a describir de manera detallada cada paso con al finalidad de alcarar el proceso
que debe ser realizado en cada paso para su posterior codificacion.

1. Obtener los datos de entrada: en este paso se deben determinar previamente aspectos tales
como el numero minimo y maximo de datos que se va a ingresar, el rango dentro del cual 
dichos valores deben estar, el tipo de dato que se va a ingresar, el medio a traves del cual 
se van a ingresar al programa, digitadosdirectamente por el usuario, a traves de un archivo 
con valores, como resultado de otra funcion del mismo programa, etc. En el caso que nos ocupa 
como se definio un conjunto no vacio de datos, esto significa que debe existir por lo menos 
un dato de entrada para realizar el calculo correspondiente. Se asume para efectos del 
programa que se va a desarrollar, que los datos se ingresan a traves del teclado.

2. Determinar el numero de elementos que componen el conjunto de datos de entrada: se debe
hacer un conteo del numero de datos que se ingresan al programa.

3. Calcular la suma de todos los valores de los datos ingresados por el usuario: se procede
a sumar los valores de los datos ingresados por el usuario.

4. Calcular el valor promedio de la suma de los valores dividido entre el numero de valores 
ingresado: se procede a realizar la division entre la suma de los valores de los datos
ingresados por el usuario y el numero de datos ingresados, el valor obtenido corresponde 
al valor promedio.

5. Mostrar el valor promedio de los datos ingresados: se debe determinar si se muestra el 
valor obtenido o se pasa como un valor a otra funcion u otro dispositivo que lo requiera,
en el caso que nos ocupa, se muestra el valor en la pantalla del computador.

Una vez definidos la entrada, el proceso y la salida obtenida del algoritmo diseñado, 
se procede a realizar su construccion en un lenguaje de programacion que permita 
ejecutarlo para comprobar su resultado y proceder a realizar este mismo proceso de
manera automatica.

-----------------------------------------------------------------------------------------
Lenguaje C.
-----------------------------------------------------------------------------------------

El lenguaje C fue desarrollado en los laboratorios AT&T por Dennis Ritchie y es el lenguaje 
de pogramacion de alto nivel de proposito general más popular.

Evolucion del lenguaje C:

BCPL: desarrollado en 1969 por Martin Richard como un lenguaje para escribir software de sisteas operativos y compiladores.
B: Ken Thompson uso muchas caracteristicas de CPL y uso B para crear una temprana version del sistema operativo UNIX en los laboratorios Bel en 197n en una computadora DEC PDP-7.
BCPL y B eran lenguajes de programacion sin tipado, la labor de elegir entre los tipos de datos era responsabilidad del programador.
C: C fuen creado a partir de B por Dennis Ritchie en los laboratorios Bel y fue originalmente implementado en una computadora DEC PDP-11 en 1972, inicialmente usado para implementar el sistema operativo UNIX, usa muchos conceptos de BCPL y B con la adicion del tipado de datos y otras caracteristicas.
C++: es una extension de C creada por Bjarne Stroustup a principios de 1980 en los laboratorios Bell. Entre las caracteristicas agregadas a C++ la mas importante es que provee las posibilidades de programacion orientada a objetos.

El lenguaje C se caracteriza por ser un lenguaje de alto nivel, de proposito general, compilado, con fuerte tipado:

Lenguaje de proposito general lo cual significa que con este lenguaje de programacion se 
puede desarrollar programas para resolver problemas de una muy amplia gama de propositos.
Lenguaje de alto nivel las sentencias que conforman el lenguaje se expresan en un lenguaje 
que se entiende facilmente, parecido al lenguaje inglés con reglas estrictas de sintaxis, lo
que aporta legibilidad y facilidad de mantenimiento a los programas desarrollados en este 
lenguaje.
Lenguaje compilado el codigo fuente conformado por una serie de sentencias en lenguaje de 
alto nivel es traducido a traves del proceso de compilacion en un archivo en lenguaje de 
maquina en codigo binario que entiende y ejecuta el computador.
Lenguaje con tipado de datos el lenguaje proporciona la verificacion del tipo de datos con el que
realiza las operaciones.

Para el desarrollo del programa se ha elegido el lenguaje de programacion C basicamente
por las siguientes razones:

De facil aprendizaje por ser un lenguaje formado por pocas palabras clave y pocos comandos
que recordar, que aunado a la facilidad de comprension por ser un lenguaje de alto nivel, 
permite comprender la programacion en el lenguaje C con relativa facilidad.
Potencia y versatilidad se pueden hacer muchas cosas con este lenguaje.
Eficiencia los programas escritos en el lenguaje de programación C se traducen a lenguaje de
maquina para la plataforma en la cual se compila, lo cual contribuye a la obtencion de 
programas mas eficientes.
Portabilidad multiplataforma los programas hechos en este lenguaje pueden ser ejecutados en
diferentes plataformas para las cuales exista un compilador que convierta adecuadamente el 
codigo fuente en el lenguaje de maquina correspondiente.
Es la base de otros lenguajes la mayoria de lenguajes modernos derivan a partir de 
este, lo cual supone la ventaja de poder aplicar los conocimientos adquiridos en la 
programacion en C, en la programacion con otros lenguajes similares mas modernos y 
utilizados que se basan en la sintaxis del lenguaje C. Algunos de los lenguajes cuya 
sintaxis deriva del lenguaje C son:

* C++ es una version ampliada del lenguaje C que agrega la posibilidad de usar 
caracteristicas de la programacion orientada a objetos, usado para desarrollar aplicaciones 
de escritorio y videojuegos de diferentes plataformas.
* Java, javascript, PHP usados principalmente para el desarrollo de aplicaciones web.
* Objetive-C usado para desarrollar aplicaciones en la plataforma iOS.
C* # usado para desarrollar aplicaciones de Windows Phone y juegos de XBOX 360.
* Perl es un conocido lenguaje usado para el diseño web en sus inicios, actualmente muy usado 
en labores de administracion de sistemas.

Con la intensión de mantener la portabilidad entre diferentes plataformas, un grupo de 
fabricantes solicitaron en 1983 al Instituto Estadounidende se Estandares nacionales ANSI, 
la creacion de un estandar del lenguaje C. Ante esta solicitud se formó el Comite Técnico 
X3J11, cuyo resultado fue la aprobación en el año 1989 del estándar ANSI del lenguaje C, 
este estándar reune un grupo de funciones de uso comun de C.

Existen numerosas herramientas disponibles para la compilacion de los programas fuente 
escritos en lenguaje C en diferentes plataformas, entre los cuales se pueden mencionar
los siguientes:

DevC++ compilador libre para compilar codigo fuente en lenguaje C para Windows.
CodeBlocks compilador disponible en diferentes plataformas para compilar codigo fuente en 
lenguaje C.
http://orwelldevcpp.blogspot.com/

Eclipse para desarrollo C/C++ entorno de desarrollo que ademas de compilar los programas
escritos en lenguaje C, dispone de numerosas caracteristicas adicionales.
https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/photonr

El lenguaje C no cuenta con sentencias directas de entrada y salida de datos, por ello se 
debe usar las funciones contenidas en la libreria estandar correspondiente que permite 
enviar y recibir datos a traves de los perifericos. Esta libreria se invoca en el programa 
a traves de la siguente sentencia:

#include <stdio.h>;

Esta libreria brinda las funciones necesarias para mostrar informacion y recibirla a traves 
de los canales de entrada y salida, por defecto el monitor y el teclado.

La funcion printf() imprime en la unidad de salida, el monitor, el texto y las constantes y 
variables que se indiquen a traves de la misma. El formato general de esta funcion es la 
mostrada a continuacion:

int printf("cadena de control", tipoargumento1, tipoargumento2, ...);

la funcion printf() tiene un valor de retorno de tipo int que representa el numero de 
caracteres escritos en la llamada.

Se imprime la cadena indicada en "cadena de control", ademas de una serie de argumentos cuyo
formato se indica de la siguiente manera:

%d, %i		decimal entero
%u		entero sin signo
%c		caracter
%f		notacion decimal de punto flotante
%p		puntero
%o		octal sin signo
%x, %X		hexadecimal sin signo
%s		cadena de caracteres
%e, %g		notacion cientifica de punto flotante

La funcion scanf() se usa para leer datos de la entrada estandar, el teclado por defecto, la
forma general de esta funcion es la siguiente:

int scanf("%x1%x2", &argumento1, &argumento2, ...);

La funcion scanf() devuelve como valor de retorno el numero de conversiones de formato 
realizadas con exito.

