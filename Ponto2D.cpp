/*  Definicoes dos métodos do tipo abstrato de dados Ponto2D,        */
/*  utilizado para representar um ponto (x, y) no plano cartesiano.  */
/*                                                                   */
/*  Autor: Ruy Braga Filho                                           */



#include <sstream>
#include <iomanip>
#include <cmath>
#include "Ponto2D.h"



// métodos Sets e Gets para as coordenadas (x, y)
void Ponto2D::setX( long x ) { this->x = x; }
long Ponto2D::getX() { return x; }

void Ponto2D::setY( long y ) { this->y = y; }
long Ponto2D::getY() { return y; }



// Representação de string do ponto.
// retorna uma string que representa o ponto, como uma tupla de n-dimensões. 
std::string Ponto2D::toString()  { 

    std::ostringstream aux;
    
    aux << "(" << this->x << "," << this->y << ")";

    return( aux.str() );
}


// A distância entre pontos de duas dimensões é calculada da seguinte forma:
// d = sqrt((x1 - x2)^2 + (y1 - y2)^2).
// Onde x1 é a coordenada x do primeiro ponto, x2 é a coordenada x do segundo ponto,
// y1 é a coordenada y do primeiro ponto e y2 é a coordenada y do segundo ponto 
double Ponto2D::distancia( Ponto2D p )  { 
    
    return sqrt( static_cast<double>(  (this->x - p.x ) * (this->x - p.x)  + 
                                       (this->y - p.y ) * (this->y - p.y)  )); 
}



/*  Fim das definicoes dos métodos do tipo abstrato de dados Ponto2D  */