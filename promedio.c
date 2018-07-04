/*Programa de propositos educativos, encargado de recibir como entrada a traves del teclado, una serie de 
valores numericos, a los cuales se les debe calcular el valor promedio y mostrarlo en pantalla*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp
*/

//Comentario de una sola linea
/*Comentario de
varias lineas*/

/*#include es una directiva de preprocesador que indica al preprocesador de C que busque un archivo y coloque
el contenido de ese archivo en el lugar que la directiva include lo indique*/
/*se incluye la libreria necesaria para hacer uso de los dispositivos de entrada y salida:
teclado y monitor, conocido como archivo de encabezado de entrada salida estandar stdio.h.*/
#include <stdio.h>

//La funcion main es la principal de todo programa escrito en lenguaje C y es la primera funcion en ejecutarse
//todo programa en lenguaje C debe contener solo una funcion main
int main(){                                             //Inico del bloque principal del programa
	
	//Declaracion de variables usadas
	//Variables de tipo entero
	int   variable1, variable2, variable3, n;
	//Variables de tipo coma flotante
	float suma, promedio;
	
	//Sentencia que muestra en pantalla el mensaje indicado
	printf("\nPrograma de calculo de valor promedio.\n");
	
	/*Condiciones iniciales del programa
	pre: entrada = una expresion que describe todas las posibles entradas del problema.
	pre: entrada = un conjunto no vacio de valores numericos comprendidos dentro de un rango 
	de valores determinado.
	*/
	
	//1 Obtener los datos de entrada.
	//Se procede a recibir los datos de entrada para resalizar el calculo del promedio de los datos introducidos
	printf("\n");                                //Sentencia que muestra una linea en blanco
	printf("\nIntroduzca a continuacion los datos a ser usados para calcular el promedio.\n");
	//Sentencia que espera un valor desde el teclado para ser asignado a la variable indicada
	scanf("%d", &variable1);
	scanf("%d", &variable2);
	scanf("%d", &variable3);
	printf("\nLos valores introducidos son: %d, %d, %d\n", variable1, variable2, variable3);
	
	//2 Determinar el numero de elementos que componen el conjunto de datos de entrada.
	//se ingresan 3 argumentos
	n = 3;
	
	//3 Calcular la suma de todos los valores de los datos ingresados por el usuario.
	//Sentencia que le asigna a la varialbe suma el resultado de la operacion aritmetica suma de las variables
	//variable1, variable2 y variable3
	suma = variable1 + variable2 + variable3;
	
	//4 Calcular el valor promedio de la suma de los valores dividido entre el numero de valores ingresado.
	//Sentencia que le asigna a la varible promedio el resultado de la operacion aritmetica divicion entre 
	//las variables suma y n
	promedio = suma / n;
	
	//5 Mostrar el valor promedio de los datos ingresados.
	//%f indica que la variable promedio se muestra en pantalla en formato de coma flotante
	printf("\nEl valor promedio es: %f\n", promedio);
	
	/*Condiciones finales del programa
	pos: entrada = vacio y salida = una descripcion de todas las salidas que pueden darse para
	cada entrada.
	pos: entrada = vacio y salida = valor promedio de los datos ingresados como entrada.
	*/
	return 0;                                  //valor de retorno de la funcion main
}                                              //Final del bloque principal del programa
