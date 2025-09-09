#include <iostream>

using namespace std;

int main() {
	/* Variáveis */
	int r=-1;
	int s=1;
	int t=2;
    bool a, b, c, d, e, f, g;

	/* Letra a */
    // -1+5 > 2 ? True
	a = (r+5) > t;
	cout << a << endl;

	/* Letra b */
    // 1+1 >= t ? True
    b = (s+s) >= t;
	cout << b << endl;

	/* Letra c */
    // -(-1) == 1 && 1 > -1 ? True
	c = (-r == s) && (s > r);
	cout << c << endl;

    /* Letra d */
    // -(-1) == 2 || -1 > 1 ? False
    d = (-r) == t || r > s;
	cout << d << endl;

    /* Letra e */
    // 5+(-1)+1+2 != 9 ? True
    e = (5+r+s+t) != 9;
	cout << e << endl;

    /* Letra f */
    // .5*-1 <= .25*1 ? True
    f = .5*r <= .25*s;
    cout << f << endl;

    /* Letra g */
    // -.1*2 < 1 && (!(r*2.5>=3)) ? True
    g = -.1*t < 1 && (!(r*2.5>=3));
    cout << g << endl;

	return 0;
}
