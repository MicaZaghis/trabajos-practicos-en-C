//Ingresar n elementos en una lista enlazada y luego reportarlos.
//Los elementos que se ingresan se insertan al Final de la lista.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nodo
{
    int info;
    struct nodo *siguiente;
};
int main(void)
{
    int salir=1;
    struct nodo *inicio=NULL;
    struct nodo *aux;

    while(salir!=0)
    {
        aux=inicio;
        inicio=malloc(sizeof(struct nodo));
        printf("Ingrese un numero: ");
        scanf("%d",&inicio->info);
        salir=inicio->info;
        inicio->siguiente=aux;
    }
    struct nodo *p=inicio;
    while(p!=NULL)
    {
        printf("info %d\n",p->info);
        p=p->siguiente;
    }
}

