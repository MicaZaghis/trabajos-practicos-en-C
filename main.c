//Escribir un programa en C que lea n�meros enteros indefinidamente hasta que llegue el n�mero 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    do
{
  scanf("%d", &a);
}

	while (a!=0);
	printf("finalizo el programa");

 return 0;
}

//Leer tantos n�meros como se quiera hasta que llegue un cero. El resultado es la suma de todos los n�meros le�dos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int suma= 0;

	do
{
  scanf("%d", &a);
  suma=suma+a;
}

	while (a!=0);
	printf("suma=%d", suma);

 return 0;
}

//Crear un programa que escriba dos columnas de n�meros, en la primera se colocan los n�meros del 1 al 100,
//en la segunda los n�meros del 100 al 1.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100;
    int b=1;

do
{
	printf("%d \t %d\n" ,a,b);

	a --;
	b ++;
}
	while (a>=1);
}

//Crear un programa en C que lea un n�mero entero y positivo y que escriba tres columnas.
//La primera cuenta desde uno hasta el n�mero escrito contando de uno en uno;
//la segunda columna cuenta de dos en dos y la tercera de tres.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
	int a=1;
	int b=2;
	int c=3;

	printf("ingrese un numero: ");
	scanf("%d", &n);
	if(n>0)
	while(a<=n)

{
	printf("%d\n", &a);
	a++;
}
 printf("\n");
 while (b<=n)
{
	printf("%d\n",b);
	b=b+2;
}
	printf("\n");
	while (c<=n)
{
	printf("%d\n",c);
	c=c+3;
}
}

//Programa que lea una serie de n�meros (leer hasta que llegue el cero, por ejemplo) y que calcule su media aritm�tica.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int suma=0;
   int contador=0;

    while
{
	printf("\n ingrese un numero: ");
	scanf("%i",&i);
}
}


//Programa que lea un n�mero entero por teclado y que calcule su factorial.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
    b=1;
    c=1;

    printf("Ingrese un numero: \n");
    scanf("%d",&a);
do
{
    c=c*b;
    b++;
}
while(b<=a);
{
    printf("Su factorial es: %d\n",c);
}

return 0;
}
//Programa que lea una serie de n�meros por teclado e indique cu�l es el mayor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero,mayor=0;

do
{
    printf("Ingresa un numero:");
    scanf("%d",&numero);

if(numero>mayor)
{
    mayor=numero;
}
}
while(numero!=0);

printf("El mayor de los numeros es:%d",mayor);
}

/*Crear un programa que muestre un men� como este: 1) Salir 2) Sumatorio 3) Factorial
Tras mostrar el men�, el programa debe leer un n�mero del 1 al tres si se elige 1, el programa acaba.
Si se elige 2 se calcula el sumatorio del n�mero, si se elige 3 se calcula la factorial
(en ambos casos el programa pedir� escribir el n�mero sobre el que se calcula el sumatorio o la factorial).
Tras calcular el sumatorio o la factorial e indicar el resultado, el programa volver� a mostrar el men� y as� sucesivamente.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,total,fact,c,resultado,opciones;

  printf("1-Salir.\n");
  printf("2-Sumar.\n");
  printf("3-Factorial.\n");
  scanf("%d",&opciones);

switch(opciones)
{
    case 1: printf("Finalizo."); break;
    case 2: printf("Ingrese un valor: \n");
            scanf("%d",&a);
            printf("Ingrese otro valor: \n");
            scanf("%d",&b);
            total=a+b;
            printf("La suma de los dos valores es: %d",total,a+b);
            break;
    case 3:
        c=1;
        resultado=1;

        printf("Ingrese un numero: \n");
        scanf("%d",&fact);

    while(c<=fact)
    {
    resultado=resultado*c;
    c++;
}

}
return 0;
}
/*Crear un programa que lea un n�mero e indique su valor en la sucesi�n de Fibonacci (llamarle Fibonacci).
Esta sucesi�n calcula su valor de la siguiente manera. S�lo es v�lido para n�meros positivos,
si el n�mero es un uno, la sucesi�n vale 1 si es dos, la sucesi�n vale 2.
Para el resto la sucesi�n es la suma de la sucesi�n de los dos n�meros anteriores.
Es decir, para 7 el valor ser�a lo que valga la sucesi�n de 6 m�s la sucesi�n de cinco. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,f,b,posicion,resultado;
  f=0;
  b=1;
  posicion=0;
  printf("Ingrese un valor: \n");
  scanf("%d",&a);

while(posicion<=a);
  resultado=f+b;
  b=resultado;
  f=b;

  posicion ++;
  {
      printf("Se ubica en el numero: %d\n",resultado);
  }
}

