/*Que gestione los datos de stock de una tienda de comestibles, la información a recoger será:
nombre del producto, precio, cantidad en stock. La tienda dispone de 10 productos distintos.
El programa debe ser capaz de:
1. Dar de alta un producto nuevo.
2. Buscar un producto por su nombre.
3. Modificar el stock y precio de un producto dado. */
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	#include <string.h>
4.	struct tienda_comestibles
5.	{
6.	    char producto[10];
7.	    float precio;
8.	    int cantidad;
9.	};
10.	int main ()
11.	{
12.	    struct tienda_comestibles super[10];
13.	    int t,opcion,num;
14.	    char modi[30];
15.	    char produc[30];
16.
17.	        printf("\n");
18.	        printf("\t\t\t***SUPER CHINO***\n");
19.	        printf("INGRESE SUS PRODUCTOS\n");
20.
21.	        for(t=0;t<10;t++)
22.	    {
23.	        printf("\n");
24.	        printf("Producto[%d]: ",t+1);
25.	        fflush(stdin);
26.	        scanf("%s",super[t].producto);
27.	        printf("Precio[%d]: ",t+1);
28.	        fflush(stdin);
29.	        scanf("%f",&super[t].precio);
30.	        printf("Cantidad[%d]: ",t+1);
31.	        fflush(stdin);
32.	        scanf("%d",&super[t].cantidad);
33.	    }
34.	        printf("\n");
35.	        printf("MENU DE OPCIONES\n");
36.	        printf("1-Dar de alta un nuevo producto\n");
37.	        printf("2-Buscar un producto por su nombre\n");
38.	        printf("3-Modificar el stock y precio de un producto dado\n");
39.	        fflush(stdin);
40.	        scanf("%d",&opcion);
41.
42.	        switch(opcion)
43.	        {
44.	            case 1:
45.	          printf("Ingrese el producto a modificar:");
46.	                scanf("%s",modi);
47.	                for(t=0;t<10;t++){
48.	                if(strcmp(modi,super[t].producto)==0){
49.
50.	                printf("Producto[%d]: ",t+1);
51.	                fflush(stdin);
52.	                scanf("%s",super[t].producto);
53.	                printf("Precio[%d]: ",t+1);
54.	                fflush(stdin);
55.	                scanf("%f",&super[t].precio);
56.	                printf("Cantidad[%d]: ",t+1);
57.	                fflush(stdin);
58.	                scanf("%d",&super[t].cantidad);
59.	                }
60.	                }
61.	                break;
62.	            case 2:
63.	                printf("Ingrese nombre: ");
64.	                fflush(stdin);
65.	                scanf("%s",produc);
66.	                for(t=0;t<10;t++){
67.	             if(strcmp(produc,super[t].producto)==0){
68.	                printf("%s\n%.2f\n%d\n",super[t].producto,super[t].precio,super[t].cantidad);
69.	                }
70.	                }
71.	                break;
72.	            case 3:
73.	           printf("Ingrese un numero del 1 al 10: ");
74.	                scanf("%d",&num);
75.	                printf("Ingrese el precio: ");
76.	                scanf("%f",&super[num].precio);
77.	                printf("Ingrese la cantidad: ");
78.	                scanf("%d",&super[num].cantidad);
79.	                break;
80.	             default: printf("Opcion Incorrecta.\n");
81.	        }
82.	            for (int i=0; i<10; i++)
83.	                {
84.	            printf("%s \n", super[i].producto);
85.	            printf("%.2f \n", super[i].precio);
86.	            printf("%d \n", super[i].cantidad);
87.	                }
88.	    return 0;
89.	}
/*Que gestiona las notas de una clase de 20 alumnos de los cuales sabemos el nombre y la nota. El programa debe ser capaz de:
1. Buscar un alumno.
2. Modificar su nota.
3. Realizar la media de todas las notas.
4. Realizar la media de las notas menores de 5.
5. Mostrar el alumno que mejores notas ha sacado. */
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	#include <string.h>
4.	struct escuela
5.	{
6.	    char nombre[15];
7.	    float nota;
8.	};
9.	int main()
10.	{
11.	    struct escuela alumno[20];
12.	    int i,r,opcion,mejor=0;
13.	    float mediamen;
14.	    char alum[10],mayornota;
15.	    float media;
16.
17.	    for( i=0;i<20;i++){
18.	        printf("[%d]Nombre:",i+1);
19.	        fflush(stdin);
20.	        gets(alumno[i].nombre);
21.	        printf("[%d]Nota:",i+1);
22.	        fflush(stdin);
23.	        scanf("%f",&alumno[i].nota);
24.	    }
25.	    printf("\n");
26.	    printf("MENU\n");
27.	    printf("1-Buscar alumno\n");
28.	    printf("2-Modificar nota\n");
29.	    printf("3-Realizar la media de todas las notas\n");
30.	    printf("4-Realizar la media de las notas menores de 5\n");
31.	    printf("5-Mostrar alumno que mejores notas ha sacado\n");
32.	    scanf("%d",&opcion);
33.
34.	    switch(opcion)
35.	    {
36.	    case 1:
37.	        printf("Ingrese el nombre de alumno que quiere encontrar: ");
38.	        fflush(stdin);
39.	        gets(alum);
40.	        for(i=0;i<20;i++){
41.	        if(strcmp(alum,alumno[i].nombre)==0)
42.	        {
43.	            printf("%s\n%.2f\n",alumno[i].nombre,alumno[i].nota);
44.	        }
45.	        }
46.	        break;
47.	    case 2:
48.	        printf("Ingrese el numero de alumno del 1 al 20: ");
49.	                scanf("%d",&r);
50.	                printf("Ingrese la nota nueva: ");
51.	                scanf("%f",&alumno[r].nota);
52.	        break;
53.	    case 3:
54.	          for(i=0;i<20;i++){
55.	             media+=alumno[i].nota;
56.	        }
57.	        printf("%.2f",(media/2));
58.	    case 4:
59.	        for(i=0;i<20;i++){
60.	            if(alumno[i].nota<=5){
61.	                mediamen+=alumno[i].nota;
62.	            }
63.	        }
64.	        printf("%.2f",(mediamen/2));
65.	        break;
66.	    case 5:
67.	        for(i=0;i<20;i++){
68.	        if(alumno[i].nota>mejor){
69.	        mejor=alumno[i].nota;
70.	        mayornota=i;
71.	        }
72.	        }
73.	        printf("%s",alumno[mayornota].nombre);
74.	        break;
75.	        default: printf("Opcion Incorrecta\n");
76.	    }
77.
78.	    return 0;
79.	    }
//Mostrar el alumno que peores notas ha sacado. Hasta que la cantidad de números introducidos sea igual a n. (Recursividad).
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	#include <string.h>
4.	struct escuela
5.	{
6.	    char nombre[15];
7.	    float nota;
8.	};
9.	    struct escuela alumno[20];
10.	    void menornot();
11.
12.	int main()
13.	{
14.	    int i,r,opcion,mejor=0;
15.	    float mediamen;
16.	    char alum[10],mayornota;
17.	    float media;
18.
19.	    for( i=0;i<20;i++){
20.	        printf("[%d]Nombre:",i+1);
21.	        fflush(stdin);
22.	        gets(alumno[i].nombre);
23.	        printf("[%d]Nota:",i+1);
24.	        fflush(stdin);
25.	        scanf("%f",&alumno[i].nota);
26.	    }
27.	    printf("\n");
28.	    printf("MENU\n");
29.	    printf("1-Buscar alumno\n2-Modificar nota\n");
30.	    printf("3-Realizar la media de todas las notas\n");
31.	    printf("4-Realizar la media de las notas menores de 5\n");
32.	    printf("5-Mostrar alumno que mejores notas ha sacado\n");
33.	    printf("6-Mostrar alumno con menor nota\n");
34.	    scanf("%d",&opcion);
35.
36.	    switch(opcion)
37.	    {
38.	    case 1:
39.	        printf("Ingrese el nombre de alumno que quiere encontrar: ");
40.	        fflush(stdin);
41.	        gets(alum);
42.	        for(i=0;i<20;i++){
43.	        if(strcmp(alum,alumno[i].nombre)==0){
44.	        printf("%s\n%.2f\n",alumno[i].nombre,alumno[i].nota);
45.	        }
46.	        }
47.	        break;
48.	    case 2:
49.	        printf("ingrese el numero de alumno del 1 al 20: ");
50.	                scanf("%d",&r);
51.	                printf("ingrese la nota nueva:");
52.	                scanf("%f",&alumno[r].nota);
53.	        break;
54.	    case 3:
55.	          for(i=0;i<20;i++){
56.	             media+=alumno[i].nota;
57.	        }
58.	        printf("%.2f",(media/2));
59.	    case 4:
60.	        for(i=0;i<20;i++){
61.	            if(alumno[i].nota<=5){
62.	                mediamen+=alumno[i].nota;
63.	            }
64.	        }
65.	        printf("%.2f",(mediamen/2));
66.	        break;
67.	    case 5:
68.	        for(i=0;i<20;i++){
69.	        if(alumno[i].nota>mejor){
70.	        mejor=alumno[i].nota;
71.	        mayornota=i;
72.	        }
73.	        }
74.	        printf("%s",alumno[mayornota].nombre);
75.	        break;
76.
77.	    case 6:
78.	        menornot();
79.	        break;
80.	    }
81.	    return 0;
82.
83.	}
84.
85.	void menornot()
86.	    {
87.	        int men;
88.	        float menor=9999;
89.	        for(int i=0;i<20;i++){
90.	        if(alumno[i].nota<menor){
91.	        menor=alumno[i].nota;
92.	        men=i;
93.	        }
94.	        }
95.	        printf("%s\n",alumno[men].nombre);
96.	        printf("%.1f",alumno[men].nota);
97.	}

//Calcula el producto de dos números de forma recursiva. Los números a multiplicar se leen por teclado. (Recursividad).
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	int multi(int a,int b)
4.	{
5.	    if(b==1){
6.	    return a;
7.	    }
8.	    if(b>0){
9.	    return a+multi(a,b-1);//ejemplo: 4+4*3==4*4=16(mismo resultado)
10.	    }
11.	    else{
12.	    return -a+multi(a,b+1);//ejemplo: -4*(-5)-4==-4*-4=16(mismo resultado)
13.	    }
14.	    return 0;
15.	}
16.	int main()
17.	{
18.
19.	 int a,b;
20.	 printf("MULTIPLICACION\n");
21.	 printf("ingrese primer numero:\n");
22.	 scanf("%d",&a);
23.	 printf("ingrese segundo numero:\n");
24.	 scanf("%d",&b);
25.	 printf("Resultado: %d",multi(a,b));
26.
27.	return 0;
28.	}

//Función de Ackerman. (Recursividad).
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	#include <string.h>
4.	int ackermann(int m,int n)
5.	{
6.	    if(m==0){
7.	        return n+1;
8.	    }
9.	    if(m!=0&&n==0){
10.	        return ackermann(m-1,1);
11.	    }
12.	    if(m!=0&&n!=0){
13.	        return ackermann(m-1,ackermann(m,n-1));
14.	    }
15.	    return 0;
16.	}
17.
18.	int main()
19.	{
20.	    int m,n;
21.	    int resultado;
22.	    printf("ACKERMANN\n");
23.	    printf("Ingrese valor de m: \n");
24.	    scanf("%d",&m);
25.	    printf("Ingrese valor de n: \n");
26.	    scanf("%d",&n);
27.	    resultado=ackermann(m,n);
28.	    printf("El resultado es: %d",resultado);
29.
30.	}


