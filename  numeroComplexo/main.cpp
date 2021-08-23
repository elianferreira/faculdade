#include <iostream>
#include <math.h>

using namespace std;

struct ComplexityNumber
{
  float n1, n2;
};

ComplexityNumber createEquations(float n1, float n2)
{
  ComplexityNumber cn;
  cn.n1 = n1;
  cn.n2 = n2;
  return cn;
}

float modulo(float n1, float n2)
{
  return sqrt(pow(n1, 2) + pow(n2, 2));
};

float norma(float n1, float n2)
{
  return pow(n1, 2) + pow(n2, 2);
};

void oposto(float n1, float n2)
{
  if (n1 > 0)
  {
    n2 = n2 * -1;
    n1 = n1 * -1;
    cout << "Oposto : " << n1 << n2 << "i" << endl;
  }
  else
  {
    n1 = n1 * -1;
    n2 = n2 * -1;
    cout << "Oposto : " << n1 << n2 << "i" << endl;
  }
};

void conjugado(float n1, float n2)
{
  if (n2 > 0)
  {
    n2 = n2 * -1;
    cout << "Conjugado : " << n1 << n2 << "i" << endl;
  }
  else
  {
    n2 = n2 * -1;
    cout << "Conjugado : " << n1 << n2 << "i" << endl;
  }
}

int main()
{
  ComplexityNumber cn[3];

  float n1, n2;

  cin >> n1 >> n2;

  cout << "Modulo : " << modulo(n1, n2) << endl;
  cout << "Norma : " << norma(n1, n2) << endl;
  oposto(n1, n2);
  conjugado(n1, n2);

  return 0;
}