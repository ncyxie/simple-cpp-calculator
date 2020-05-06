#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
float num1, num2; 
float s, c, d, f, g;
 cout << "Simple C++ Calculator // ";
 cout << "Type a number, and then press Enter >> ";
 cin >> num1;
 cout << "Simple C++ Calculator // ";
 cout << "Type another number, and then press Enter >> ";
cin >> num2;
 s = num1 + num2;
 c = num1 * num2;
 d = num1 / num2;
 f = num1 - num2;
 g = fmod(num1, num2);
cout << num1 << " + " << num2 << " = " << s << endl;
cout << num1 << " - " << num2 << " = " << f << endl;
cout << num1 << " * " << num2 << " = " << c << endl;
cout << num1 << " / " << num2 << " = " << d << endl;
cout << num1 << " % " << num2 << " = " << g << endl;


return 0;
}

