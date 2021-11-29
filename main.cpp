/* Módulo principal do programa. Contém a função main e */
/* funções para carregar dados e mostrar resultados.    */
/*                                                      */
/* Autor: Ruy Braga Filho                               */


#include "Ponto2D.h"
#include "Loja.h"
#include "Cliente.h"
#include "TipoLista.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



/* Prototipo da função que carrega as dimenções do grid */
void carregarDimensoesGrid( long& n, long& m );


/* Prototipo da função que carrega as lojas */
void carregarLojas( TipoLista<Loja>& loja );


/* Prototipo da função que carrega os clientes */
void carregarClientes( TipoLista<Cliente>& cliente );


/* Prototipo da função que calcula o score_estado */
long scoreEstado( string& uf );


/* Prototipo da função que calcula o score_tipo_pagamento */
long scoreTipoPagamento( string& u );


/* Prototipo da função que carrega os clientes */
double calcularTicket( long scoreEstado,
                       long scoreTipoPagamento,
                       long idade );



/* Definição da função main */
int main()  {


    /* Dimensões do grid */
    long n;
    long m;
    carregarDimensoesGrid( n, m );
    cout << "\n\nN: " << n;
    cout << "\nM: " << m << "\n\n"; 


    /* Lista de lojas */
    TipoLista<Loja> loja;
    carregarLojas( loja );
    loja.imprimir();
    cout << "\n\nCarregou lojas\n\n";   


    /* Lista de clientes */
    TipoLista<Cliente> cliente;
    carregarClientes( cliente );
    cliente.imprimir();
    cout << "\n\nCarregou clientes\n\n";   
    

    /* Tabela que conterá o resultado. Cada linha i da tabela representa */
    /* a lista de clientes que foram alocados para a loja i.             */
    cout << "\n\nCriando Tabelas\n\n";
    TipoLista<Cliente>* resultado = new TipoLista<Cliente>[ loja.tamanhoLista() ];
    long numLojas = loja.tamanhoLista();
    for( long i=0; i<numLojas; ++i )  {
        cout << "\nLoja " << i << "\n";
        resultado[i].imprimir();
    }







    delete[] resultado;

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

}  /* Fim da definição da função carregarLojas */



/* Definição da função que carrega os clientes */
void carregarClientes( TipoLista<Cliente>& cliente )  {

    long numClientes;

    long idade;
    string uf;
    string u;
    long x;
    long y; 

    // Carrega o número de lojas
    cin >> numClientes;

    // Carrega os dados de cada loja
    for( long i=0; i<numClientes; ++i )  {

        cin >> idade;
        cin >> uf;
        cin >> u;
        cin >> x;
        cin >> y;

        Ponto2D p(x, y);
        Cliente c( i, 
                   calcularTicket( scoreEstado( uf ),
                                   scoreTipoPagamento( u ),
                                   idade ), 
                   p );

        cliente.inserirNoFim( c );
    }    

}  /* Fim da definição da função carregarClientes */



/* Definição da função que calcula o score_estado */
long scoreEstado( string& uf )  {

    if( uf == "MG" ) return 0;
    if( uf == "PR" ) return 10;
    if( uf == "SP" ) return 20;
    if( uf == "SC" ) return 30;
    if( uf == "RJ" ) return 40;
    if( uf == "RN" ) return 50;
    if( uf == "RS" ) return 60;

    return -1;

}  /* Fim da definição da função scoreEstado */



/* Definição da função que calcula o score_tipo_pagamento */
long scoreTipoPagamento( string& u )  {

    if( u == "DINHEIRO" ) return 1;
    if( u == "DEBITO" )   return 2;
    if( u == "CREDITO" )  return 3;    

    return -1;

}  /* Fim da definição da função scoreTipoPagamento */



/* Definição da função que carrega os clientes */
double calcularTicket( long scoreEstado,
                       long scoreTipoPagamento,
                       long idade )  {

    return ( abs(60 - idade) + scoreEstado) / static_cast<double>(scoreTipoPagamento);

}  /* Fim da definição da função calcularTicket */