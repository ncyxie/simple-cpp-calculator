#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{

int a, b;
double s;
double f;
double c;
double d;
double g;
 cout << "Simple C++ Calculator // ";
 cout << "Type a number, and then press Enter >> ";
 cin >> a;
 cout << "Simple C++ Calculator // ";
 cout << "Type another number, and then press Enter >> ";
cin >> b;
 s = a + b;
 c = a * b;
 d = a / b;
 f = a - b;
 g = a % b;
 cout << a << " + " << b << " = " << s << endl;
 cout << a << " - " << b << " = " << f << endl;
cout << a << " * " << b << " = " << c << endl;
cout << a << " / " << b << " = " << d << endl;
cout << a << " % " << b << " = " << g << endl;


return 0;
}

