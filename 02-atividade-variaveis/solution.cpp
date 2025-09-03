/* Bibliotecas */
#include <iostream>
#include <cmath>

using namespace std;

/*
19
30.5
16.9
-23
8
12.56
3.0
3.0
-16.666666666666668
3.0
0.5
*/

int main() {
   // Letra a
   int _v0, _a, _t; // input
   int _v; // output

   _v0 = 5;
   _a = 7;
   _t = 2;
   
   _v = _v0 + _a * _t; // formula

   cout << _v << endl; 

 	// Letra b
   // int x0, v0, a, t; // input
   
   float x0, v0, a, t; // input
   float x ; // output
   
   v0 = 8;
   x0 = 2;
   t = 3;
   a = 1;

   x = x0 + (v0 * t) + (0.5)*a*(t*t); // formula
   
   cout << x << endl;

   //Letra c) *mesma equacao mas com float
    
   x0 = 1.5;
   v0 = 2.7;
   a = 5;
   t = 2; // ja estava definido no arquivo
    
   x = x0 + v0 * t + (.5)*a*(t*t); // formula
   cout << x << endl;
 
   
 	//Letra d)
   	int a_ = 2;
 	int b_ = 1;
 	int c_ = 3;
    int delta; // output

 	delta= (b_*b_) - 4*a_*c_;
 	cout << delta << endl; // print(delta)
 
 	
    //Letra e)
    float delta_u, tau;
    float delta_q;
  	delta_u = 5;
     tau = 3;

     //Equação
     delta_q = delta_u + tau;
        cout << delta_q << endl;
    

 //Letra f)
    float R;
    float C;
 R= 2;

 C = 2 * 3.14 * R;
 cout << C << endl;
     /*
 // Letra g)

 int x0; //output
    x0 = (-(-7)+5) / 4;
 cout << x0 << endl;
    
 
 // Letra h)
    
 // int X0 = -7;
    float insideSquareRoot = ((-7)*(-7)) - 4*2*3; 
 float x; // output 
 
    float raiz = sqrt(insideSquareRoot);
    
 x = (-(-7) + sqrt(insideSquareRoot)) / (2*2);
    // cout << raiz << endl;
 cout << x << endl;
    
 //Letra i)
 float tc;
 float tf = 2;
 tc = (5 * (tf - 32)) / 9; 
 cout << tc << endl;
 

 //Letra j) bhaskara
 float a, b, c, delta;
    float x1, x2; // outputs
    a = 2;
 b = -7;
 c = 3;
 delta = (b*b) - 4*a*c;
    // cout << delta << endl;
 
 x1 = (-b + (sqrt(delta)) / 2*a);
 x2 = (-b - (sqrt(delta)) / 2*a);

 cout << x1 << endl;
 cout << x2 << endl;
 */
 return 0;
}