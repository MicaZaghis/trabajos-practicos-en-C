//Que rellene una matriz de 3x3 y muestre su traspuesta
//(la traspuesta se consigue intercambiando filas por columnas y viceversa).

1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int mat[3][3];
7.	    int a=0;
8.	    for(int i=0;i<3;i++)
9.	    {
10.	        for(int j=0;j<3;j++)
11.	        {
12.	            printf("Ingrese numeros\n");
13.	            scanf("%d",&mat[i][j]);
14.	        }
15.	    }
16.	    {
17.	        printf("\n");
18.	    }
19.	    for (int i=0;i<3;i++)
20.	    {
21.	        for (int j=0;j<3;j++)
22.	        {
23.	            if(a>=3)
24.	            {
25.	                a=0;
26.	                printf("\n");
27.	            }
28.	            printf("%d ",mat[j][i]);
29.	            a++;
30.	        }
31.	    }
32.	    return 0;
33.	}

//Que lea una cadena y la muestre al revés.

3)	#include <stdio.h>
4)	#include <stdlib.h>
5)
6)	int main()
7)	{
8)	    char a[5]={"HOLA"};
9)	    for(int i=4;i>=0;i--)
10)	    {
11)	        if(a[i]!='\0')
12)	        {
13)	            printf("%c",a[i]);
14)	        }
15)	    }
16)	    return 0;
17)	}

//Que lea una cadena y diga cuantas vocales hay.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    char a[20];
7.	    int b=0;
8.	    printf("Ingrese una palabra\n");
9.	    scanf("%s",a);
10.	    for(int i=0;i<20;i++)
11.	    {
12.	        if(a[i]!='\0')
13.	        {
14.	           if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
15.	           {
16.	               b++;
17.	           }
18.	        }
19.	    }
20.	        printf("\n");
21.	        printf("La palabra contiene %d vocales",b);
22.
23.	        return 0;
24.	}
//Que lea una cadena y diga cuantas mayúsculas hay.

1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    char a[20];
7.	    int b=0;
8.	    printf("Ingrese una palabra\n");
9.	    scanf("%s",a);
10.
11.	    for(int i=0;i<20;i++)
12.	    {
13.	        if(a[i]!='\0')
14.	        {
15.	            if(a[i]>= 65 && a[i]<=90)
16.	            {
17.	                b++;
18.	            }
19.	        }
20.	    }
21.	    printf("\n");
22.	    printf("La palabra contiene %d mayusculas",b);
23.
24.	    return 0;
25.	}

//Que lea una cadena y la encripte sumando 3 al código ASCII de cada carácter. Mostrar por pantalla.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    char palabra[30];
7.
8.	    printf("Ingrese una palabra:\n");
9.	    scanf("%s",palabra);
10.
11.	    for(int i=0;i<30;i++)
12.	    {
13.	        if(palabra[i]!='\0')
14.	        {
15.	            palabra[i]=palabra[i]+3;
16.	        }
17.	    }
18.	    printf("La palabra ahora es %s\n",palabra);
19.
20.	    return 0;
21.	}

//Que rellene un array de dos dimensiones con números pares, lo pinte y
//después que pida una posición X,Y y mostrar el número correspondiente.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int numeros[2][2]={{2,4},{6,8}};
7.	    int x,y;
8.
9.	    for(int i=0;i<2;i++)
10.	    {
11.	        for(int j=0;j<2;j++)
12.	        {
13.	           printf("%d\t",numeros[i][j]);
14.	        }
15.	        printf("\n");
16.	    }
17.	    printf("Ingrese cordenada de X siendo 0 o 1: ");
18.	    scanf("%d",&x);
19.	    printf("Ingrese cordenada de Y siendo 0 o 1: ");
20.	    scanf("%d",&y);
21.
22.	    printf("La cordenada corresponde al numero: %d\n",numeros[x][y]);
23.	    return 0;
24.	}

//Que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int es_primo(int numero)
5.	{
6.	    int divisores=0;
7.	    for(int i=1;i<=numero;i++)
8.	    {
9.	        if(numero%i==0)
10.	        {
11.	        divisores ++;
12.	        }
13.	    }
14.	    if(divisores>2)
15.	    {
16.	        return 0;
17.	    }
18.	    else
19.	    {
20.	        return 1;
21.	    }
22.	}
23.
24.	int main()
25.	{
26.	    int primos[26];
27.	    int aux=0;
28.	    for(int i=1;i<=100;i++)
29.	    {
30.	        if(es_primo(i)==1)
31.	        {
32.	            primos[aux]=i;
33.	            aux ++;
34.	        }
35.	    }
36.	    for(int i=0;i<=25;i++)
37.	    {
38.	        printf("%d\n",primos[i]);
39.	    }
40.	    return 0;
41.	}

//Que lea 10 números por teclado, los almacene en un array y los ordene de forma ascendente.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int vec[10];
7.	    int aux;
8.
9.	    for(int i=0;i<=9;i++)
10.	    {
11.	        printf("Ingrese un numero ");
12.	        scanf("%d",&vec[i]);
13.	    }
14.	    for(int i=0;i<=9;i++)
15.	    {
16.	        for(int j=0;j<=9;j++)
17.	        {
18.	            if(vec[j]>vec[j+1])
19.	            {
20.	               int aux=vec[j];
21.	               vec[j]=vec[j+1];
22.	               vec[j+1]=aux;
23.	            }
24.	        }
25.	    }
26.	    for(int i=0;i<=9;i++)
27.	    {
28.	         printf("%d ",vec[i]);
29.	    }
30.	     return 0;}

//Que lea 5 números por teclado, los copie a otro array multiplicados por 2
//y los muestre todos ordenados usando un tercer array.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int vec1[5];
7.	    int vec2[5];
8.	    int vec3[10];
9.	    int aux;
10.
11.	    for(int i=0;i<=4;i++)
12.	    {
13.	        printf("Ingrese un numero: ");
14.	        scanf("%d",&vec1[i]);
15.	    }
16.	    for(int i=0;i<=4;i++)
17.	    {
18.	        int aux=vec1[i]*2;
19.	        vec2[i]=aux;
20.	    }
21.	    for(int i=0;i<=4;i++)
22.	    {
23.	       vec3[i]=vec1[i];
24.	    }
25.	    for(int i=0;i<=4;i++)
26.	    {
27.	        vec3[5+i]=vec2[i];
28.	    }
29.	        for(int i=0;i<=4;i++)
30.	    {
31.	        for(int j=0;j<=4;j++)
32.	        {
33.	            if(vec3[j]>vec3[j+1])
34.	            {
35.	                aux=vec3[j];
36.	                vec3[j]=vec3[j+1];
37.	                vec3[j+1]=aux;
38.	            }
39.	        }
40.	    }
41.	    for(int i=0;i<=9;i++)
42.	    {
43.	        printf("%d ",vec3[i]);
44.	    }
45.	    return 0;
46.	}

// Que mediante un array almacene números tanto positivos como negativos y los muestre ordenados.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int vec[6];
7.	    int aux;
8.
9.	    for(int i=0;i<=5;i++)
10.	    {
11.	        printf("Ingrese numeros negativos y positivos: ");
12.	        scanf("%d",&vec[i]);
13.	    }
14.	    for(int i=0;i<=5;i++)
15.	    {
16.	        for(int j=0;j<=5;j++)
17.	        {
18.	            if(vec[j]>vec[j+1])
19.	            {
20.	                aux=vec[j];
21.	                vec[j]=vec[j+1];
22.	                vec[j+1]=aux;
23.	            }
24.	        }
25.	    }
26.	    for(int i=0;i<=5;i++)
27.	    {
28.	        printf("%d ",vec[i]);
29.	    }
30.	    return 0;
31.	}

//IMPRIME 1  0  3.
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int a,b,c,*p1,*p2;
7.
8.	    p1=&a;
9.	    *p1=1;
10.	    p2=&b;
11.	    *p2=2;
12.	    p1=p2;
13.	    *p1=0;
14.	    p2=&c;
15.	    *p2=3;
16.
17.	    printf("%d %d %d\n",a,b,c);
18.
19.	    return 0;
20.	}

//IMPRIME  0  80  77  77  85  5  6  6  395
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int arr[10]={77,5,395,65,3,55,78,85,21,9}, *p =&arr;
7.
8.	    printf(" %d\n",arr[(*p+7)]);
9.	    printf(" %d\n",*arr+3);
10.	    printf(" %d\n",*p);
11.	    printf(" %d\n",*p++);
12.	    printf(" %d\n",*(arr+7));
13.	    printf(" %d\n",(*p)++);
14.	    printf(" %d\n",*p);
15.	    printf(" %d\n",*p++);
16.	    printf(" %d\n",*p);
17.
18.	    return 0;
19.	}

// IMPRIME 1,2,9,7,11
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int *punt,i;
7.	    int x[5]={1,2,3,4,5};
8.	    punt=x+4;
9.	    *(punt-2)=9;
10.	    punt--;
11.	    *(punt)=7;
12.	    punt[1]=11;
13.	    for(i=0;i<5;i++)
14.	        printf("%d,",*(x+i));
15.
16.	    return 0;
17.	}

// IMPRIME 5  12  17
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	void suma_dos(int *x,int *y,int *z);
5.	int main ()
6.	{
7.	    int x,y,z;
8.	    x=3;
9.	    y=10;
10.	    z=15;
11.	    suma_dos(&x,&y,&z);
12.	    printf("%d %d %d\n",x,y,z);
13.
14.	    return 0;
15.	}
16.	void suma_dos(int *x,int *y,int *z)
17.	{
18.	    *x=*x+2;
19.	    *y=*y+2;
20.	    *z=*z+2;
21.	}
15) IMPRIME 1,9,7,11,5
1.	#include <stdio.h>
2.	#include <stdlib.h>
3.
4.	int main()
5.	{
6.	    int *punt,i;
7.	    int x[5]={1,2,3,4,5};
8.	    punt=&x[0]+3;
9.	    *(punt-2)=9;
10.	    punt--;
11.	    *(punt)=7;
12.	    punt[1]=11;
13.	    punt=x;
14.	    for(i=0;i<5;i++)
15.	        printf("%d,",punt[i]);
16.	    return 0;
17.	}

//IMPRIME 84.000000g
1.	#include<stdio.h>
2.	#include<stdlib.h>
3.
4.	void datos(int*x,float*y,char*c);
5.	int main()
6.	{
7.	    int x=9;
8.	    float y=44.6;
9.	    char c='a';
10.	    datos(&x,&y,&c);
11.	    printf("%d%f%c",x,y,c);
12.	    return 0;
13.	}
14.	void datos(int*x,float*y,char*c)
15.	{
16.	    *x=8;
17.	    *y=4,2;
18.	    *c='g';
19.	}
