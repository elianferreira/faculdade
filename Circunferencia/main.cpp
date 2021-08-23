#include <iostream>

using namespace std;

const float PI = 3.1416;

enum comparacao
{
  MENOR,
  IGUAL,
  MAIOR
};

struct Circunferencia
{
  float raio;
  int cordX, cordY;
};

Circunferencia createCircle(float raio, int cordX, int cordY)
{
  Circunferencia c;

  c.raio = raio;
  c.cordX = cordX;
  c.cordY = cordY;

  return c;
}

float recoverR(Circunferencia c)
{
  return c.raio;
}

int recoverX(Circunferencia c)
{
  return c.cordX;
}

int recoverY(Circunferencia c)
{
  return c.cordY;
}

float diametro(Circunferencia c)
{
  return c.raio * 2;
}

float perimetro(Circunferencia c)
{
  return 2 * PI * c.raio;
}

void alterR(Circunferencia &c, float newR)
{
  c.raio = newR;
}
void alterX(Circunferencia &c, float newX)
{
  c.cordX = newX;
}
void alterY(Circunferencia &c, float newY)
{
  c.cordY = newY;
}

comparacao compare(Circunferencia c1, Circunferencia c2)
{

  if (c1.raio == c2.raio)
  {
    return IGUAL;
  }
  else if (c1.raio > c2.raio)
  {
    return MAIOR;
  }
  else
  {
    return MENOR;
  }
}

bool samePosition(Circunferencia c1, Circunferencia c2)
{
  return ((c1.cordX == c2.cordX) && (c1.cordY == c2.cordY));
}

void createCircleMain()
{
  Circunferencia c[5];
  int j, X, Y;
  float raio;

  for (int i = 0; i < 3;)
  {
    cout << "Insira valores para circunferencia : " << endl;
    cin >> raio;

    cout << "Insira valores para as cordenadas X e Y :" << endl;
    cin >> X >> Y;

    c[i] = createCircle(raio, X, Y);
  };

  c[3] = createCircle(recoverR(c[0]) + 5, recoverX(c[0]), recoverY(c[0]));
}

int main()
{

  return 0;
}