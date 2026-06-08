#include <iostream>
using namespace std;

/**
  Converta uma temperatura de graus Celsius para Fahrenheit usando a fórmula: 
  
  F = (C*9/5)+32  
*/

int main(int argc, char** argv) {
  float celsius, fahrenheit;
    
  cout << "Digite Celsius:" << endl;
  cin >> celsius;

  fahrenheit = (celsius*9/5)+32;

  cout << "Fahrenheit: " << fahrenheit << endl;
  
  return 0;
}