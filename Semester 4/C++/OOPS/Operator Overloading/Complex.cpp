#include <iostream>
using namespace std;

class Complex
{
    public:
        int real, imaginary;

        Complex(int a = 0,int b = 0)
        {
            real = a;
            imaginary = b;
        }
        void printA(Complex obj)
        {
            cout << obj.real << " + i" << obj.imaginary << endl;
        }

        friend Complex operator+(Complex A);
        
        void print()
        {
            cout << real << " + i" << imaginary << endl;
        }
};

Complex operator+(Complex b,Complex c)
{
    Complex temp;
    temp.real = b.real + c.real;
    temp.imaginary = b.imaginary + c.imaginary;
    return temp;
    // cout << temp.real << " + i" << temp.imaginary << endl;
}

int main()
{
  Complex A(10,5);
  Complex B(2,4);
  A.printA(A);
  B.printA(B);
  Complex C = A + B;
  cout << C.real << " + i" << C.imaginary << endl;
  return 0;
}