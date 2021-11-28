/*  Programa que testa as funcionalidades do TAD TipoLista. */
/*  Autor: Ruy Braga Filho                                  */




#include  <iostream>
#include  <string>

#include  "TipoItem.h"
#include  "TipoLista.h"

using namespace std;


/*  Inicio do programa  */
int main( void )   {
    
//    long i;  
   
    cout << "\n\n\n\nCriando itens";   
    TipoItem i1( 0, 10);
    TipoItem i2( 1, 11);    
    TipoItem i3( 2, 12);
    TipoItem i4( 3, 12);
    TipoItem i5( 4, 10);
    cout << "\nItens criados";         

    cout << "\n\n\n\nCriando as Listas" ;
    TipoLista<TipoItem>* ARRAY = new TipoLista<TipoItem>[2];

    TipoLista<TipoItem> clone;

    cout << "\n\nMostrando lista 0 Vazia\n" ;
    ARRAY[0].mostrarLista();
    
    cout << "\nMostrando lista 1 Vazia\n" ;     
    ARRAY[1].mostrarLista();

  
    
    printf( "\n\nInserindo itens na lista 0, em ordem cresecnte" );
    ARRAY[0].inserirOrdenadoCrescente( i1 );
    ARRAY[0].inserirOrdenadoCrescente( i2 );
    ARRAY[0].inserirOrdenadoCrescente( i3 );
    ARRAY[0].inserirOrdenadoCrescente( i4 );
    ARRAY[0].inserirOrdenadoCrescente( i5 );


    cout << "\n\nMostrando lista 0 - crescente\n" ;
    ARRAY[0].mostrarLista();
    

    cout << "\n\nTestando a clonagem de listas";    
    clone = ARRAY[0];

    cout << "\n\nMostrando clone da lista 0\n" ;     
    clone.mostrarLista();


    cout << "\n\nAlterando o clone e mostrando as duas ARRAYs";
    clone.retirarDoFim();
    clone.retirarDoFim();

    cout << "\n\nClone\n";
    clone.mostrarLista();

    cout << "\n\nLista 0\n";
    ARRAY[0].mostrarLista();

    delete[] ARRAY;
    
    cout << "\n\n\n\nFim do teste do TAD TipoLista\n\n\n\n" ;
    
    
    return 0 ;
    
}
/*  Fim do programa.  */






