//Escribe un programa en C que declare e inicialice un vector que contenga 5 elementos cualquiera
//(char, string, int o float), luego devuelva el valor almacenado en el tercer espacio del vector.
#include <stdio.h>
#include <stdlib.h>

void vec ()
{
    int vector [5];
    vector [0]=1;
    vector [1]=2;
    vector [2]=3;
    vector [3]=4;
    vector [4]=5;

printf("El numero localizado en la posicion tres es %d",vector[3]);
	    }
int main()
{
    vec();

return 0;
}

/*“Empezamos a recorrer arreglos con un bucle de control”.
Escriba un programa en C en el que declare e inicialice un vector que contenga los números naturales.
Luego se requiere que se imprima en pantalla el contenido de dicho arreglo. */

#include <stdio.h>
#include <stdlib.h>

void vec ()
{
    int vector [10]={0,1,2,3,4,5,6,7,8,9};

    for(int i=0;i<=9;i++)
	{
	    printf("%d\n",vector[i]);
	}
}
int main()
{
    vec();
	return 0;
}

//Crear un vector con un valor de 5 espacios, luego asignarle los valores: 9, 5, 7, 41, 22.
//Y por último ingresar un número en pantalla e identifique qué posición ocupa y mostrar su valor.
#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    int i;
    int vec [5]={9,5,7,41,22};
    printf("Ingrese un numero del 0 al 4: \n");
    scanf("%d",&i);

    printf("%d",vec[i]);
}

int main()
{
    vector();
    return 0;
}

//Crear un vector de 10 espacios y asignarle el valor de cada posición.
//Por ejemplo: si la posición es 4, el valor de su posición será 4. Que el valor comience desde 0.

#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    int x;
    int vec [10]={0,1,2,3,4,5,6,7,8,9};

    printf("Ingrese un numero de posicion: \n");
    scanf("%d",&x);

    printf("%d",vec[x]);
}

int main()
{
    vector();
    return 0;
}

//Escriba un programa en C que pida 5 valores y los almacene en un vector,
//luego vuelva a pedir 5 valores más y sobrescriba dichos valores en el vector.

#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    int vec [5]={};
    for(int i=0;i<=4;i++)
    {
        printf("Ingrese valor numero %d: \n",i+1);
        scanf("%d",&vec[i]);
    }
	   for(int i=0;i<=4;i++)
	    {
	        printf("El valor en la posicion numero %d es %d\n",i+1,vec[i]);
	    }
	    for(int i=0;i<=4;i++)
	    {
	        printf("Ingrese otra vez el valor numero %d: \n",i+1);
	        scanf("%d",&vec [i]);
        for(int i=0;i<=4;i++)
	    {
	        printf("El valor en la posicion numero %d es %d\n",i+1,vec[i]);
	    }
}
int main()
{
    vector();
	return 0;
}

//Escriba un programa en C que, usando el arreglo del problema anterior,
//devuelva la tabla de multiplicación del 1 al 9.
#include <stdio.h>
#include <stdlib.h>

void vector()
{
    int vec[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=1;i<=9;i++)
	{
	  for(int a=1;a<=9;a++)
	    {
	    printf("%d\t",i*vec[a]);
	    }

    printf("\n");
    }
}
int main()
{
    vector();
    return(0);
}

/*Crear 3 vectores, en el primero sus valores son: 5, 10, 2, 3.
En el segundo vector sus valores son: 3, 6, 9, 1.
Realizar: Con la primera posición del primer y segundo vector sumar,
segunda posición restar, tercera posición multiplicar y, cuarta posición dividir.
Luego guardar los resultados en el tercer vector y mostrarlos por pantalla. */

#include <stdio.h>
#include <stdlib.h>

void vec ()
{
    int vec1 [4]={5,10,2,3};
    int vec2 [4]={3,6,9,1};
    int vec3 [4]={};

    vec3[0]=vec1[0]+vec2[0];
    vec3[1]=vec1[1]-vec2[1];
    vec3[2]=vec1[2]*vec2[2];
    vec2[3]=vec1[3]/vec2[3];

    printf("%d ",vec3[0]);
    printf("%d ",vec3[1]);
    printf("%d ",vec3[2]);
    printf("%d ",vec3[3]);
}
int main()
{
    vec();
    return 0;
}

//Realizar un programa que pida la temperatura desde las 00hs hasta las 23hs y,
//luego mostrar los valores de cada hora.
#include <stdio.h>
#include <stdlib.h>

void vec ()
{
	    int i,j;
	    int vec[23]={};

	    for(i=0;i<=23;i++)
	    {
	   printf("Que temperatura hizo a las %d horas? ",i);
	   scanf("%d",&vec[i]);
	    }
	    for(j=0;j<=23;j++)
	    {
	   printf("A las %d hicieron %d grados\n",j,vec[j]);

        }
}
int main()
{
    vec();

    return 0;
}
//Diseñe un programa que lea un valor y, luego asignar cada valor para un vector de 5 posiciones,
//luego determine si la tercera posición es positiva, si la primera posición es negativa y si la última posición es cero.
#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    int numeros[5]={};
    for(int i=0;i<=5;i++)
        {
            printf("Ingrese un numero: \n",i);
            scanf("%d",&numeros[i]);
        }
        if(numeros[0]<0)
	      {
            printf("La primer posicion es negativa\n");
	      }
	      if(numeros[2]>0)
	      {
	         printf("La tercera posicion es positiva\n");
	      }
	      if(numeros[5]==0)
	      {
	          printf("La ultima posicion es cero\n");
	      }
}
int main()
{
    vector();
    return 0;
}

//Programa que halle la cantidad de números pares e impares en un vector de 8 posiciones.
#include <stdio.h>
#include <stdlib.h>

void vec()
{
    int par=0, impar=0;
    int vec[8]={ };

    for (int i=0;i<8;i++)
{
    printf("Ingrese el valor en la posicion %d: ",i+1);
    scanf("%d",&vec[i]);
}
    for(int i=0;i<8;i++)
        if(vec[i]%2==0)
    {
        par ++;
    }
    printf("%d es par\n",par);
    printf("%d es impar\n",8-par);
}

int main()
{
  vec();
 return 0;
}

//Realizar un programa que guarde números del 1 al 100 y presente en orden descendente.
#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    int a;
    int vec[100]={};

    for (a=1;a<=100;a++)
{
    vec[a]=a;
}
    for (a=100;a>=1;a--)
    {
        printf("%d\n",vec[a]);
    }
}
int main()
{
    vector();
    return 0;
}

//En una granja hay 7 animales: Perro, Oveja, Caballo, Vaca, Lobo, Gallina y Gato.
//Mostrar los animales en pantalla excepto el Lobo e indicar qué posición ocupan.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vec()
{
    int i;
    char animales[7][10]={"perro","oveja","caballo","vaca","lobo","gallina","gato"};
    for (i=0;i<=7;i++)
    {
        if(strcmp(animales+i,"lobo")!=0)
            {
                printf("%s\n",animales+i);
	        }
    }
}
int main()
{
    vec();
    return 0;
}

/*En una tienda se encuentran tres cajas de 9 espacios, en la primera se encuentran los números: 1, 1, 1, 2, 2, 3, 1 ,4.
En la segunda y tercera caja sus valores son de 0. Ordenar de menor a mayor los números de la primera caja
en la segunda caja y, en la tercera caja contar cuántas veces se repiten los números de la primera caja. */

#include <stdio.h>
#include <stdlib.h>

int vector()
{
    int filas[9]={1,1,1,2,2,3,1,4,4};
    int vec1[sizeof(filas)]={0,0,0,0,0,0,0,0,0};
    int vec2[sizeof(filas)]={0,0,0,0,0,0,0,0,0};

    for(int i=0;i<(sizeof(filas)/sizeof(int));i++)
    {
        if(filas[i]!=vec1[filas[i]-1])
            {
                vec1[filas[i]-1]=filas[i];
	            vec2[filas[i]-1]++;
	        }
    else
        {
            vec2[filas[i]-1]++;
            filas[i]=0;
        }
    }
    for(int i=0;i<(sizeof(filas)/sizeof(int));i++)
	    {
	     printf("%d\t%d\t%d\n",filas[i],vec1[i],vec2[i]);
	    }
}
int main ()
{
    vector ();
    return 0;
}

//Relacionamos una variable con los elementos de un arreglo. Escriba un programa en C
//que se ingrese un valor en metros cúbicos y nos devuelva su equivalencia en Km3, Hm3, Da3, dm3, cm3 y mm3.
#include <stdio.h>
#include <stdlib.h>

void vector ()
{
    float numero;
    float vec[7]={};

    printf("Ingrese valor en metros cubicos:\n");
    scanf("%f",&numero);

    vec[3]=numero;
    for(int i=0;i<7;i++)
	{
    switch(i)
{
        case 0:vec[i]=numero*1000;
	        printf("El valor en kilometros cubicos es: %f\n",vec[i]);
	        break;

	    case 1:vec[i]=numero*100;
	        printf("El valor en hectometros cubicos es: %f\n",vec[i]);
	        break;

        case 2:vec[i]=numero*10;
	        printf("El valor en decametros cubicos es: %f\n",vec[i]);
	        break;

	    case 3:vec[i]=numero;
	        printf("El valor puesto en metros cubicos fue: %f\n",vec[i]);
	        break;

	    case 4:vec[i]=numero/10;
	        printf("El valor en decimetros cubicos es: %f\n",vec[i]);
	        break;

	    case 5:vec[i]=numero/100;
	        printf("El valor en centimetros cubicos es: %f\n",vec[i]);
	        break;

	    case 6:vec[i]=numero/1000;
	        printf("El valor en milimitros cubicos es: %f\n",vec[i]);
	        break;
}
	}
}
int main ()
{
    vector();
    return 0;
}

/*Se busca relacionar cada elemento con su posición y la forma de extraer elementos de un vector.
Escriba un programa en C que pida al usuario que ingrese la cantidad de números (no nula, no negativa)
que va a ingresar, luego ingrese los números y finalmente muestre en pantalla los elementos ingresados,
el orden en que fueron ingresados y su media aritmética. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void promedio()
{
    int cantidad=0, a, i, j, promedio;
    int vec1 [cantidad];
    int suma=0;

    printf("Ingrese la cantidad de numeros: ");
    scanf ("%d",&cantidad);

    printf ("Ingrese los numeros:\n");
	 for (i=0;i<cantidad;i++)
	{
	    scanf("%d",&vec1 [i]);
	}

	    printf ("su lista de numeros es:\n");
	for (a=0;a<cantidad;a++)
	{
	    printf ("%d ",vec1 [a]);
	}
	    printf ("\n");

	for (j=0;j<cantidad;j++)
	{
	    suma=suma+vec1[j];
	}
	    printf("el promedio es:\n");
	    printf("%d", suma/cantidad);
	}
int main()
{
    promedio();
	return 0;
}
/*Strings como arrays de chars. Escriba un programa en C que pida una palabra (string) y la muestre en vertical.
Ejemplo: Ingrese una palabra: casa
c
a
s
a
*/
#include <stdio.h>
#include <stdlib.h>

void vector()
{
    int i;
    char a[5]={' ',' ',' ',' ',' '};

    printf("Ingrese una palabra: \n");

    for(i=0;i<5;i++)
	    {
	        scanf("%c",&a[i]);
	    }
	    for(i=0;i<5;i++)
	    {
	        printf("%c\n",a[i]);
	    }
	}
int main()
{
    vector();
    return 0;
}
