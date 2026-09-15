#include <iostream>
using namespace std;
class complex 
{
    private:
      float real;
      float imag;
    public:
    complex()
    { 
        real = 0;
        imag = 0;
    }
    complex(float r,float i)
    { real = r;
    imag = i;
}
void display()
{
    cout << real <<"+" << imag << "i";
}
complex operator+ (complex c2)
{
    return complex (real + c2.real,imag + c2.imag);
}
complex operator - (complex c2)
{
    return complex (real - c2.real,imag - c2.imag);
}
complex operator*(complex c2)
{
    float r = real * c2.real - imag *c2.imag;
    float i = real * c2.imag + imag *c2.real;
    return complex (r, i);
}
};
int main ()
{
    complex c1 (3, 2);
    complex c2 (1, 7);
    cout << "\nfirst complex number: ";
    c1.display();
    cout << "\nsecond complex number: ";
    c2.display();
    complex sum = c1 + c2;
    cout << "\naddition:";
    sum. display ();
    complex diff = c1 - c2;
    cout << "\nsubtraction:";
    diff. display ();
    complex prod = c1 * c2;
    cout << "\nmultiplication:";
    prod. display ();
    return 0;
}