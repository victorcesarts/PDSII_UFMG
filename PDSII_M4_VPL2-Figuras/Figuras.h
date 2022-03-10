#ifndef FIGURAS_H
#define FIGURAS_H
#include <math.h>

/**
 * \class Figure
 *
 * \brief Esta eh a interface de qualquer figura desta aplicacao. O que
 * caracteriza uma figura eh a habilidade de decidir se ela contem ou nao um
 * ponto. Note que figuras e pontos sao representados sempre em duas dimensoes.
 */
class Figure {
  public:
    /**
     * \brief Este metodo determina se o ponto (x, y) esta contido na figura.
     * \param x Coordenada X do ponto.
     * \param y Coordenada Y do ponto.
     */
    virtual bool contains(double x, double y) const = 0;
    /**
     * \brief A classe prove um destrutor virtual, pois ela foi feita para ser
     * implementada por outras classes, via heranca.
     */
    virtual ~Figure() {}
};

/**
 * \class Rectangle
 *
 * \brief Um retangulo eh uma figura unicamente determinada por um canto
 * inferior esquerdo, mais largura e altura.
 */
class Rectangle: public Figure {
  public:
    /**
     * \brief Metodo construtor que cria um retangulo com canto inferior
     * esquerdo na coordenada (xx, yy), largura igual a ll e altura igual ao
     * parametro aa.
     * \param xx Canto esquerdo do retangulo
     * \param yy Canto inferior do relangulo
     * \param ll A largura do retangulo
     * \param aa A altura do retangulo
     */
    Rectangle(double xx, double yy, double ll, double aa):
      _x(xx), _y(yy), _l(ll), _a(aa) {}
    /**
     * \brief Determina se o ponto (x, y) estah contido dentro deste retangulo.
     */
    bool contains(double x, double y) const {
      double xf =  _x + _l;
      double yf =  _y + _a;

      if (_x <= x && x <= xf)
      {
        if (_y <= y && y <= yf)
        {
          return true;
        } else
          {
            return false;
          }
      } else
          {
            return false;
          }
    }
    const double _x; ///< Coordenada X do lado inferior-esquerdo do retangulo
    const double _y; ///< Coordenada Y do lado inferior-esquerdo do retangulo
    const double _l; ///< Largura do Retangulo
    const double _a; ///< Altura do Retangulo
};


/**
 * \class Circle
 *
 * \brief Um circulo eh uma figura determinada por um centro e um raio.
 */
class Circle: public Figure {
  public:
    /**
     * \brief Metodo contrutor que produz um circulo com centro no ponto
     * (xx, yy) e raio rr.
     * \param xx Coordenada X do centro do circulo
     * \param yy Coordenada Y do centro do circulo
     * \param rr Raio do circulo
     */
    Circle(double xx, double yy, double rr): _x(xx), _y(yy), _r(rr) {}
    /**
     * \brief Determina se o ponto (x, y) estah contido dentro deste circulo.
     */
    bool contains(double x, double y) const {
      double  dts;
      dts = sqrt(pow((x - _x), 2) + pow((y - _y), 2));

      if (dts <= _r )
      {
          return true;
        } else
          {
            return false;
          }
    }
    const double _x; ///< Coordenada X do centro do circulo
    const double _y; ///< Coordenada Y do centro do circulo
    const double _r; ///< O raio do circulo
};

/**
 * \class CompositeFigure
 * \brief Representacao de figuras compostas. Esta classe representa o tipo das
 * figuras retornadas pelos operadores de adicao ou subtracao de figuras.
 */
class CompositeFigureUnion : public Figure {
  public:

  CompositeFigureUnion(const Figure& lhs, const Figure& rhs) : _lhs(lhs), _rhs(rhs) {}
 
  bool contains(double x, double y) const {
  
    if (_lhs.contains(x, y) || _rhs.contains(x, y))
    {
      return true;
    } else
      return false;
  }

  const Figure& _lhs;
  const Figure& _rhs;
};

class CompositeFigureDif : public Figure {
  public:

  CompositeFigureDif(const Figure& lhs, const Figure& rhs) : _lhs(lhs), _rhs(rhs) {}
 
  bool contains(double x, double y) const {
  
    if (_lhs.contains(x, y) || _rhs.contains(x, y))
    {
      return true;
    } else
      return false;
  }
  const Figure& _lhs;
  const Figure& _rhs;
};

/**
 * \brief Cria uma nova figura formada pela uniao de lhs e rhs. Esta nova
 * figura F deve ter a seguinte invariante: F.contains(px, py) eh verdade se
 * o ponto (px, py) estiver contido em lhs ou em rhs.
 */
Figure* operator+(const Figure& lhs, const Figure& rhs) {
  
  CompositeFigureUnion* F = new CompositeFigureUnion(lhs, rhs);
  return F;

  // TODO: este metodo deve ser implementado. Lembre-se que voce pode
  // criar novas classes que estendem Figure, para resolver essa questao.
  // Uma idea eh criar figuras compostas, que representem adicoes ou
  // diferencas entre figuras mais basicas.
  
}

/**
 * \brief Cria uma nova figura formada pela diferenca entre lhs e rhs.
 * Est nova figura, F, possui a seguinte invariante: F.contains(x, y) eh
 * verdade se o ponto (x, y) estiver contido em lhs, mas nao estiver contido
 * em rhs.
 */
Figure* operator-(const Figure& lhs, const Figure& rhs) {

  CompositeFigureDif* F = new CompositeFigureDif(lhs, rhs);
  return F;
}

#endif