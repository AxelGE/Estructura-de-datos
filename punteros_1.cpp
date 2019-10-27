#include <iostream>
using namespace std; int main()
{
int i = 8, *pi=&i; long long l = 8, *pl=&l; float f = 102.8f, *pf=&f; double d=678.44f,
*pd=&d;
cout << "variable int : tam.bytes=" << sizeof(i) << "\tdir.&i :" << &i << "\tvalor:" << i
<<endl;
cout << "puntero int : tam.bytes=" << sizeof(pi) << "\tdir.&pi :" << &pi << "\tvalor:" << pi
<<endl;
cout << "variable long : tam.bytes=" << sizeof(l) << "\tdir.&l :" << &l << "\tvalor:" << l
<<endl;
cout << "puntero long : tam.bytes=" << sizeof(pl) << "\tdir.&pl :" << &pl << "\tvalor:" <<
pl <<endl;
cout << "variable float : tam.bytes=" << sizeof(f) << "\tdir.&f :" << &f << "\tvalor:" << f
<<endl;
cout << "puntero float : tam.bytes=" << sizeof(pf) << "\tdir.&pf :" << &pf << "\tvalor:" <<
pf <<endl;
cout << "variable double: tam.bytes=" << sizeof(d) << "\tdir.&d :" << &d << "\tvalor:" <<
d <<endl;
cout << "puntero double: tam.bytes=" << sizeof(pd) << "\tdir.&pd :" << &pd << "\tvalor:"
<< pd <<endl;
int *vec; vec= (int*)malloc(sizeof(int)*100); // linea de cambios
vec[0] = 44;
cout << "variable array : tam.bytes=" << sizeof(vec[0]) << "\tdir.&vec[0] :" << &vec[0] <<
"\tvalor:" << vec[0] <<endl;
cout << "puntero array : tam.bytes=" << sizeof(vec) << "\tdir.&vec:" << &vec << "\tvalor:"
<< vec <<endl; cin >> i; return 0;
}
