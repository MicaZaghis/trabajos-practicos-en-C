//Ingrese dos valores por teclado, y busque cual es el mayor.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int primero;
        int segundo;

        printf("Ingrese el primer valor: \n");
        scanf("%d",&primero);

        printf("Ingrese el segundo valor: \n");
        scanf("%d",&segundo);

            if(primero>segundo)
       {
        printf("El primer valor es mayor que el segundo");
       }
       else
       {
           printf("El segundo valor es mayor que el primero");
       }
        return 0;
    }
//Ingrese dos valores por teclado. Busque el mayor, el menor o si son iguales.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int primero;
        int segundo;

            printf("Ingrese el primer valor: \n");
            scanf("%d",&primero);

            printf("Ingrese el segundo valor: \n");
            scanf("%d",&segundo);

         if(primero>segundo)
        {
            printf("El primer valor es el mayor\n");
        }
         else
        {
         if (primero == segundo)
        {
            printf("Son iguales los valores ingresados\n");
        }
        else
        {
            printf("El segundo valor es el mayor\n");
        }
        }
            getchar();
            return 0;
    }
//Ingrese dos valores, realice la operaci�n suma para estos dos datos ingresados y el resultado mu�strelo por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int numero1;
        int numero2;


            printf("Ingrese el primer numero: \n");
            scanf("%d",&numero1);

        printf("Ingrese el segundo numero: \n");
        scanf("%d",&numero2);

        printf("La suma de los dos numeros es: %d", numero1+numero2);
            return 0;
    }
//Ingrese un valor y div�dalo por 2, al resultado mu�strelo por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int numero;


            printf("Ingrese un numero: \n");
            scanf("%d",&numero);

            printf("El numero divido por 2 es: %d", numero/2);
            return 0;
    }
//Ingrese un car�cter y mu�strelo por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        char a;
        printf("escriba un caracter:  \n");
        a=getchar();

        printf("el caracter ingresado es: %c",a);

        return 0;
    }
//Otra forma de ingresar un car�cter y mostrarlo por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        char a;
        printf("escriba un caracter: \n");
        scanf("%c",&a);

        printf ("el caracter ingresado es %c",a);
        return 0;
    }
//Ingrese los siguientes datos: A�o de nacimiento y A�o actual, muestre por pantalla la edad.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int anio_nacimiento;
        int anio_actual;
        int edad;

        printf("Ingrese anio de nacimiento: \n");
        scanf("%d",&anio_nacimiento);

        printf("Ingrese anio actual: \n");
        scanf("%d",&anio_actual);

        edad=anio_actual-anio_nacimiento;
        printf("Su edad actual es: %d",anio_actual-anio_nacimiento);

        return 0;
    }
//Introduzca el radio y muestre por pantalla el �rea.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       float a;
       float pi;
       pi=3,14;
       printf("ingrese el valor del radio: ");
       scandf("%f",&a);

       printf("el valor del area es: %f",pi*a*a);
       return 0;
    }

//Otra forma de realizar operaciones.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       int primero;
       int segundo;
        printf("Ingrese primer valor: ");
        scanf("%d",&primero);
        printf("Ingrese segundo valor: ");
        scanf("%d",&segundo);
        printf("la multiplicacion de los dos valores es: %d\n",primero*segundo);
    }

//Introduzca un clave de acceso.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
      int clave_acceso;

      printf("Ingrese una clave de acceso de 5 digitos: \n");
      scanf("%d",&clave_acceso);

      if(clave_acceso>9999 && clave_acceso<100000)
      {
          printf("Acceso permitido");
      }
      else
      {
          printf("Clave Incorrecta");
      }
       return 0;
    }
//Que pida un n�mero y diga si es par o impar.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       int a;
       printf("ingrese un valor: \n");
       scanf("%d",&a);

    if(a%2==0)
    {
        printf("El numero es par.\n");
    }
    else
    {
        printf("el numero es impar");
    }
        return 0;
    }
//Que pida un n�mero y diga si es positivo o negativo.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       int numero;
       printf("ingrese un valor: ");
       scanf("%d",numero);
        if(el numero>=0)
    {
        printf("el numero es positivo");
    }
    else
    {
        printf("el numero es negativo");
    }
        return 0;
    }
//Que s�lo permita introducir los caracteres S y N.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
     char a;

      printf("Ingrese un caracter: \n");
      scanf("%c",&a);

      if(a=='s' || a=='n')
       {
        printf("caracter permitido");
       }
       else
       {
           printf("caracter incorrecto");
       }

       return 0;
    }
//Que pida tres n�meros y detecte si se han introducido en orden creciente.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
     int a;
     int b;
     int c;
    printf("Ingrese un valor: \n");
    scanf("%d",&a);
    printf("Ingrese un segundo valor: \n");
    scanf("%d",&b);
    printf("Ingrese un tercer valor; \n");
    scanf("%d",&c);

    if (a<=b && b<=c)
        {printf("los valores estan en orden creciente\n");
    }
    else {
        if (a>=b && b>=c) {printf("los valores estan en orden decreciente\n");
    }}
    return 0;
    }

//Que pida 3 n�meros y los muestre en pantalla de menor a mayor.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int a,b,c;
        printf("Introduzca numero 1: ");
        scanf("%d",&a);
        printf("Introduzca numero 2: ");
        scanf("%d",&b);
        printf("Introduzca numero 3: ");
        scanf("%d",&c);

        if (a<=b && a<=c)
        {
            printf("Los numeros estan de menor a mayor");
        }
        else
        {
            printf("Orden Incorrecto.");
        }
        return 0;
    }

//Que pida tres n�meros e indicar si el tercero es igual a la suma del primero y el segundo.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int numero1,numero2,numero3;

    printf("ingrese primer numero: ");
    scanf("%d",&numero1);

    printf("ingrese segundo numero: ");
    scanf("%d",&numero2);

    printf("ingrese tercer numero: ");
    scanf("%d",&numero3);

    if(numero3== numero1 + numero2)
    {
        printf("el tercer numero es el resultado de la suma del numero1 y numero2");
    }
    }

//Que muestre un men� que contemple las opciones �Archivo�, �Buscar� y �Salir�,
//en caso de que no se introduzca una opci�n correcta se notificar� por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
    int a;

    printf("1-buscar\n2-archivo\n3-salir\n");
    scanf("%d",&a);
    switch(a){
    case 1:printf("buscando\n");
    break;
    case 2:printf("no hay archivos\n");
    break;
    case 3:printf("hasta luego\n");
    break;
    default:printf("opcion no valida\n");
    }
        return 0;
    }

//Que lea un importe bruto y calcule su importe neto, si es mayor de 15.000
//se le aplicar� un 16% de impuestos, en caso contrario se le aplicar� un 10%.
    #include <stdio.h>
    #include <stdlib.h>

     int main()
    {
     int importe;
     printf("ingrese un importe: \n");
     scanf("%d",&importe);

           if(importe>15000)

    {
           printf("el importe neto es: %d\n",importe+importe*16/100);
    }
           else if(importe<15000&&importe>0)

    {
           printf("el importe neto es: %d\n",importe+importe*10/100);
    }

        else
    {
        printf("importe invalido\n");
    }
    system ("PAUSE");
    return 0;
    }

/*Que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 40.000 euros anuales,
el programa debe realizar los c�lculos en funci�n de los siguientes criterios:
A) Si lleva m�s de 10 a�os en la empresa se le aplica un aumento del 10%.
B) Si lleva menos de 10 a�os, pero m�s que 5 se le aplica un aumento del 7%.
C) Si lleva menos de 5 a�os, pero m�s que 3 se le aplica un aumento del 5%.
D)Si lleva menos de 3 a�os se le aplica un aumento del 3%. */

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int anos;
        printf("Coloque la cantidad de a�os en la empresa:\n",anos);
        scanf("%d",&anos);

        if (10<anos)
            {
            printf("Sueldo correspondiente anual:%d",40000+40000*10/100);
       } else
        {

        }
        if  (anos<10 && 5<=anos)
            {
            printf("Sueldo correspondiente anual:%d",40000+40000*7/100);
        }else {
        }

         if (anos<5 && 3<=anos){
        printf("Sueldo correspondiente anual:%d",40000+40000*5/100);

        } else {

        }

         if (anos<3){
             printf("Sueldo correspondiente anual:%d",40000+40000*3/100);

        } else
    {

    }
    {
        return 0;
    }

//Escribir un programa en C que lea tres n�meros e indique el tipo de tri�ngulo que forman (is�sceles, equil�tero, escaleno).
//Comprobar que los n�meros realmente formen un tri�ngulo, sino emitir el error.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int a,b,c;
        printf("Ingrese lado A: \n"); scanf("%d",&a);
        printf("Ingrese lado B: \n"); scanf("%d",&b);
        printf("Ingrese lado C: \n"); scanf("%d",&c);

    if(a==b && b!=c)
    {
        printf("Es un triangulo isosceles");
    }
        if(a==b && b==c)
      {
          printf("Es un triangulo equilatero");
      }

    if(a!=b && b!=c)
    {
        printf("Es un triangulo escaleno");
    }
    else
    {
        printf("No es un triangulo");
    }
          return 0;
    }

//Que pase de Kg a otra unidad de medida de masa, mostrar en pantalla un men� con las opciones posibles.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int peso;

        printf("Introduzca peso en kilogramos");
         scanf("%d",&peso);

         printf("opciones:\n");
         printf("1 - Hectogramos\n");
         printf("2 - Decagramos\n");
         printf("3 - Gramos\n");
         printf("4 - Decigramos\n");
         printf("5 - Centigramos\n");
         printf("6 - Miligramos\n");

         scanf("%d",&opciones);

         switch(opcion)
         {
                case 1:
                     printf("El peso es:%d\n",peso*10);
                     break;
                case 2:
                     printf("El peso es:%d\n",peso*100);
                     break;
                case 3:
                     printf("El peso es:%d\n",peso*1000);
                     break;
                case 4:
                     printf("El peso es:%d\n",peso*10000);
                     break;
                case 5:
                     printf("El peso es:%d\n",peso*100000);
                     break;
                case 6:
                     printf("El peso es:%d\n",peso*1000000);
                     break;
                default:
                printf("Opci�n no v�lida.");
                break;
     }

    system("PAUSE");
    return 0;
    }

//Que pida un n�mero del 1 al 7 y diga el d�a de la semana correspondiente.
    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
                int i;
                printf("Introduzca n�mero del 1 al 7:");
        scanf("%d",&i);

        switch(i){
                  case 1:
                       printf ("Lunes\n");
                       break;
                  case 2:
                       printf ("Martes\n");
                       break;
                  case 3:
                       printf ("Mi�rcoles\n");
                       break;
                  case 4:
                       printf ("Jueves\n");
                       break;
                  case 5:
                       printf ("Viernes\n");
                       break;
                  case 6:
                       printf ("S�bado\n");
                       break;
                  case 7:
                       printf ("Domingo\n");
                       break;
                  default:
                       printf ("Opci�n no v�lida\n");
                       break;
        }

        system("PAUSE");
        return 0;
    }

// Que pida una letra y detecte si es una vocal.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
                char c;

                printf("Introduzca un car�cter:");
        scanf("%c",&c);

        switch (c)
        {
               case 'a':
                    printf ("Es vocal\n");
                    break;
               case 'e':
                    printf ("Es vocal\n");
                    break;
               case 'i':
                    printf ("Es vocal\n");
                    break;
               case 'o':
                    printf ("Es vocal\n");
                    break;
               case 'u':
                    printf ("Es vocal\n");
                    break;
               default:
                    printf ("No es vocal\n");
                    break;
        }

        system("PAUSE");
        return 0;
    }

//Que pida un n�mero del 1 al 12 y diga el nombre del mes correspondiente.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
                int i;
                printf("Introduzca n�mero del 1 al 12:");
        scanf("%d",&i);

        switch(i){
                  case 1:
                       printf ("Enero\n");
                       break;
                  case 2:
                       printf ("Febrero\n");
                       break;
                  case 3:
                       printf ("Marzo\n");
                       break;
                  case 4:
                       printf ("Abril\n");
                       break;
                  case 5:
                       printf ("Mayo\n");
                       break;
                  case 6:
                       printf ("Junio\n");
                       break;
                  case 7:
                       printf ("Julio\n");
                       break;
                  case 8:
                       printf ("Agosto\n");
                       break;
                  case 9:
                       printf ("Septiembre\n");
                       break;
                  case 10:
                       printf ("Octubre\n");
                       break;
                  case 11:
                       printf ("Noviembre\n");
                       break;
                  case 12:
                       printf ("Diciembre\n");
                       break;
                  default:
                       printf ("Opci�n no v�lida\n");
                       break;
        }

        system("PAUSE");
        return 0;
    }
//Calcular el salario de un trabajador, dependiendo del nivel de antig�edad.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int sueldo;
        int antiguedad;

        printf("Ingrese Sueldo: \n");
        scanf("%d",&sueldo);

        printf("Ingrese Antiguedad: \n");
        scanf("%d",&antiguedad);

    if (antiguedad>=10)
    {
        printf("cobrara: %d",sueldo+sueldo*10/100);
    }
    else
        if (antiguedad<10&&antiguedad>5)
    {
        printf("cobrara: \n%d",sueldo+sueldo*7/100);
    }
    else
        if (antiguedad<5&&antiguedad>3)
    {
        printf("cobrara: \n%d",sueldo+sueldo*5/100);
    }
    else
        if (antiguedad<3&&antiguedad>0)
    {
        printf("cobrara: \n%d",sueldo+sueldo*3/100);
    }
       else
        printf("dato equivocado \n");

        return 0;
    }

//Ingrese dos n�meros enteros y que luego permita seleccionar si se sumar�n, restar�n dividir�n o multiplicar�n
//y muestre el resultado por pantalla.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int numero1;
        int numero2;
        int opcion;
        int suma, resta, multiplicacion, division;

        printf("Ingrese primer numero entero: \n");
        scanf("%d",&numero1);

        printf("Ingrese el segundo numero entero: \n");
        scanf("%d",&numero2);

        printf("seleccione opcion:\n 1-Sumar\n 2-Restar\n 3-Multiplicar\n 4-Dividir\n ");
        scanf("%d",&opcion);

        switch(opcion)
       {
            case 1:
                suma = numero1 + numero2;
                printf("%d", suma);
            break;

            case 2:
                resta = numero1 - numero2;
                printf ("%d", resta);
            break;

            case 3:
                multiplicacion = numero1 * numero2;
                 printf("%d", multiplicacion);
            break;
            case 4:
                division = numero1/numero2;
                printf ("%d", division);
                break;

            default:
                printf("opcion incorrecta\n");
                break;
        }

       return 0;
    }

//Escriba un mensaje e ingrese las veces que desea repetirlo y mu�strelo por pantalla.
    #include <stdio.h>
    #include <stdio.h>

    int main()
    {
    int veces;

        printf("Numero de veces que desea repetir el mensaje: \n");
        scanf("%d",&veces);

    for(int i=1;i<=veces;i++)
    {
        printf("Hola Mundo!\n");
    }
    return 0;
    }

//Escribir un programa que escriba todos los m�ltiplos de 3 del n�mero 1 al 3000.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {

    for(int i=0;i<=3000;i+=3)
    {
    printf("%d\t",i);
    }
    return 0;
    }

//Ingrese dos valores uno que se utilice como inicial y el segundo para ser utilizado como final,
//Realice un programa donde muestre los valores del intervalo.
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int a;
    int b;

    int inicial;
    printf("ingrese un primer valor: \n");
    scanf("%d",&a);

    printf("ingrese un segundo valor: \n");
    scanf("%d",&b);

    for(inicial=a;inicial<b;inicial++)
    {printf("%d \n",inicial);
    }
    }

//Escribir un programa C que lea exactamente 8 n�meros y luego escriba la suma de todos ellos.

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int num1,num2,num3,num4,num5,num6,num7,num8;

        printf("Ingrese primer numero: \n");
        scanf("%d",&num1);
        printf("Ingrese segundo numero: \n");
        scanf("%d",&num2);
        printf("Ingrese tercer numero: \n");
        scanf("%d",&num3);
        printf("Ingrese cuarto numero: \n");
        scanf("%d",&num4);
        printf("Ingrese quinto numero: \n");
        scanf("%d",&num5);
        printf("Ingrese sexto numero: \n");
        scanf("%d",&num6);
        printf("Ingrese septimo numero: \n");
        scanf("%d",&num7);
        printf("Ingrese octavo numero: \n");
        scanf("%d",&num8);

        printf("la suma de todos los numeros es: %d",num1+num2+num3+num4+num5+num6+num7+num8);
    }

//Crear el programa asteriscos en el que se introduce un n�mero entero y se crea una pir�mide de asteriscos.
//Por ejemplo, si se introduce el 6, el resultado ser�a:
#include <stdio.h>
#include <stdlib.h>

    int main()
    {
    int a,b,c;
    printf("ingrese un numero: ");
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=c-a;b++)
        printf(" ");
        for(b=a;b<=2*a-1;b++)
        printf("*");

        printf("\n");
    }
    return 0;
    }

