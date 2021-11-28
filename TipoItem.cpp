/*  Definicao dos metodos do tipo abstrato de dados TipoItem            */
/*  utilizado para representar um elemento a lista duplamente encadeada */
/*                                                                      */
/*  Autor: Ruy Braga Filho                                              */

#include "TipoItem.h"


/*  Construtores  */
TipoItem::TipoItem(){

    this->id    =  -1;
    this->peso  =  -1.0;						    
}

TipoItem::TipoItem( long id, double peso )  {
			
    this->id    =  id;
    this->peso  =  peso;						
}
  
/*  Definicao do Método que ajusta o atributo registro  */
/*  com o valor passado como parametro.                 */
void TipoItem::setID( long id )   {
    this->id  =  id;  
}    


/*  Definicao do Método que retorna o atributo registro  */
long TipoItem::getID()   {
    return( id );  
}        


/*  Definicao do Método que ajusta o atributo peso  */
/*  com o valor passado como parametro.                 */
void TipoItem::setPeso( double peso )   {
    this->peso  =  peso;  
}    


/*  Definicao do Método que retorna o atributo peso  */
double TipoItem::getPeso()   {
    return( peso );  
}           


/* Sobrecarga de operadores relacionais */
bool TipoItem::operator<=(TipoItem& i) const  {
    return(  this->peso <= i.peso  );
}

bool TipoItem::operator>=(TipoItem& i) const  {
    return(  this->peso >= i.peso  );
}