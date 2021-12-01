/*  Cabecalho com a declaracao do módulo CasamentoEstável.     */
/*  Esse módulo utiliza o algotimo Gale-Shapley para resolver  */
/*  o problem de casamento estável.                            */
/*                                                             */
/*  Autor: Ruy Braga Filho                                     */


#ifndef CASAMENTOESTAVEL_H
#define CASAMENTOESTAVEL_H


#include "TipoItem.h"
#include "TipoLista.h"
#include "Cliente.h"
#include "Loja.h"

#include <vector>


using std::vector;


class CasamentoEstavel  {

    private:

        /* Lista de clientes e lojas carregadas do arquivo de entrada  */
        TipoLista<Cliente>* cliente = nullptr;
        TipoLista<Loja>* loja = nullptr;

        /* Vector com o estoque de cada loja.                            */
        /* Esse vector será usado para acessar o estoque a um custo O(1) */
        vector< long >* estoque = nullptr;        

        /* Atributos - Tabelas de preferências das pessoas e dos centros de saude  */
        TipoLista<TipoItem>* tabelaPreferenciaCliente = nullptr;
        TipoLista<Cliente>* tabelaPreferenciaLoja = nullptr;
        
        /* Método que inicializa o vector contendo estoque de cada loja */
        void inicializarEstoque();

        /* Metodos que geram as tabelas de preferências dos clientes e das lojas  */
        void gerarTabelaPreferenciaCliente();
        void gerarTabelaPreferenciaLoja();

        /* Metodos que mostram as tabelas de preferências dos clientes e das lojas  */
        void mostrarTabelaPreferenciaCliente();
        void mostrarTabelaPreferenciaLoja();

        /* Metodo que procura a loja com estoque disponivel na lista de preferencia de clientes.  */
        /* Se encontar, retorna o id da loja. Senão, retorna -1                                   */
        long lojaComEstoqueDisponivel( long idCliente );

        // Metodo que imprime o resultado do casamento estavel de acordo com o TP
        void imprimirCasamentoEstavel( TipoLista<Cliente>* resultado ); 

    public:

        /* Construtor da classe CasamentoEstavel */
        CasamentoEstavel(  TipoLista<Cliente>* cliente,
                           TipoLista<Loja>* loja  );

        /* Destrutor da classe CasamentoEstavel  */
        ~CasamentoEstavel();                   

        // Metodo que implementa o algoritmo de Gale-Shapley
        void galeShapley( TipoLista<Cliente>* resultado );                              
 
};


#endif
