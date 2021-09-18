#include <iostream>

using namespace std;

int X, Y, somar;

int soma_ (int *ptrX, int *ptrY);

int main () {
  setlocale(LC_ALL, "Portuguese");
  cout << "\nInforme o valor de X.: ";
  cin >> X;
  cout << "Informe o valor de Y.: ";
  cin >> Y;

  somar = soma_ (&X, &Y);

  cout << "\nO resultado da some entre X e Y = " << somar << endl;

  return 0;
}

int soma_ (int *ptrX, int *ptrY) {
  somar = *ptrX + *ptrY;
  return somar;
}