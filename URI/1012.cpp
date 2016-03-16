#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double A, B, C, tri, circ, trap, quad, ret;
cin >> fixed >> setprecision(1);
cout << fixed << setprecision(3);
cin >> A >> B >> C;
tri = A * C / 2.0;
circ = 3.14159 * C * C;
trap = (A + B) / 2.0 * C;
quad = B * B;
ret = A * B;
cout << "TRIANGULO: " << tri << endl;
cout<< "CIRCULO: " << circ << endl;
cout<< "TRAPEZIO: " << trap << endl;
cout<< "QUADRADO: " << quad << endl;
cout<< "RETANGULO: " << ret<<endl;
return 0;
}
