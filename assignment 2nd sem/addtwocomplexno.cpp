#include <iostream>
using namespace std;


class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    Complex add(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

int main() {
    
    Complex c1(2.5, 3.7);
    Complex c2(1.8, -4.2);
    

    Complex sum = c1.add(c2);
    
    cout << "Sum of ";
    c1.display();
    cout << " and ";
    c2.display();
    cout << " is ";
    sum.display();
    cout << endl;
    
    return 0;
}
