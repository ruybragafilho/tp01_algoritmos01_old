/* Módulo principal do programa. Contém a função main e */
/* funções para carregar dados e mostrar resultados.    */
/*                                                      */
/* Autor: Ruy Braga Filho                               */


#include "Ponto2D.h"
#include "Loja.h"
#include "Cliente.h"
#include "TipoLista.h"

#include <iostream>

using namespace std;



/* Prototipo da função que carrega as dimenções do grid */
void carregarDimensoesGrid( long& n, long& m );


/* Prototipo da função que carrega as lojas */
void carregarLojas( TipoLista<Loja>& loja );




/* Definição da função main */
int main()  {

    /* Dimensões do grid */
    long n;
    long m;
    carregarDimensoesGrid( n, m );
    cout << "\n\nN: " << n;
    cout << "\nM: " << m << "\n\n"; 

    /* Lojas */
    TipoLista<Loja> loja;
    loja.mostrarLista();

    return 0;

}  /* Fim da definição da função main */




/* Definição da função que carrega as dimenções do grid */
void carregarDimensoesGrid( long& n, long& m )  {

    cin >> n;
    cin >> m;

}  /* Fim da definição da função carregarDimensoesGrid */



/* Definição da função que carrega as lojas */
void carregarLojas( TipoLista<Loja>& loja )  {

    long numLojas;

    long estoqueLoja;
    long x;
    long y; 

    // Carrega o número de lojas
    cin >> numLojas;

    // Carrega os dados de cada loja
    for( long i=0; i<numLojas; ++i )  {

        cin >> estoqueLoja;
        cin >> x;
        cin >> y;

        Ponto2D p(x, y);
        Loja l( i, estoqueLoja, p );

        loja.inserirNoFim( l );
    }
    

}  /* Fim da definição da função que carrega as lojas */