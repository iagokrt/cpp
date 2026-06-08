#include <iostream>
// #include <numbers> // uso: constexpr double PI = std::numbers::pi;
#include <cmath> // acos, M_PI
using namespace std;

/**
  Calcule a área de um círculo com base em seu raio. O raio deve ser passado através da 
entrada padrão. 
*/

int main(int argc, char** argv) {
  int radius;
    
  cout << "Digite Raio: ";
  cin >> radius;

  cout << "area:" << radius * radius * M_PI << endl;

  return 0;
}