#include<iostream>
#include<conio.h>//esta libreria la agrego debido a que la ventana de ejecucion se me cierra si no utilizo la funcion getch() ;
using namespace std;
//Este problema al pedirnos el multipli mas pequeño esta claro que debemos utilizar el algoritmo de euclides ,pero para realizar el algoritmo de euclides aplicado al minimo comun multiplo primero debemos calcular el maximo comun divisor
void mostrarLista(int lista[],const int longitud){
    cout<<"{ ";
    for(int i=0;i<longitud;i++){
        cout<<lista[i]<<" ";
    }
    cout<<"}"<<endl;
}
void insercion(int lista[],const int longitud){
    int valorActual,posicion;
    for(int i=1;i<longitud;i++){//vamos desde el el termino numero dos esto para poder comparar el termino anterior

        valorActual=lista[i];//definimos una variable la cual sera el elemento  en si que se empieza a comparar
        posicion=i;//esta variable posicion es necesaria para buscar el elemento anterior a la variable valor actual
        while (lista[posicion-1]>valorActual && posicion>0 ){//entrara al bucle a hacer el procedimiento de intercambio siempre y cuando el valor anterior al valor en este caso que empieza en el segunda definindo en el bucle anterior y si la posicion es mayor que cero , ya que de nos ser mayor que cero haria habria un indice no valido para el valor o uno negativa que haria que la funcion compare el primero con el ultimo termino
            lista[posicion]=lista[posicion-1];//de cumplirse estos requisitos se hara un ordenamiento in place en el cual la posicion que se asigna que en este caso empieza en el segundo se iguale al primero ya que este es mayor
            posicion-=1;//mientras que la posicion retrocedera en uno para seguir comparando el anterior valor para que si este es menor que el anterior siga bajando
        }
        lista[posicion]=valorActual;//esta nueva posicion sera la nueva variable valor actual que se comparara en el bucle while para ver si es menor que la posicion a la izquierda de este
    }

}
int main(){
    int arreglo[]={12,1,2,6,8,4,5,3,7},tamanio=9;
    cout<<"-----------------Lista original-----------------"<<endl; 
    mostrarLista(arreglo,tamanio);
    insercion(arreglo,tamanio);
    cout<<"-----------------Lista ordenada-----------------"<<endl;
    mostrarLista(arreglo,tamanio);
    getch();//esta funcion de la liberia conio.h para que la ventana de ejecucion no se me cierre;
    return 0;
}