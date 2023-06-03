#include"lab3/ComplexNumber.hpp"


int main() {
    cn::ComplexNumber z(2, 1);
    cn::ComplexNumber z1(1, 3);
    z++;
    z = z1 * z;
    std::cout << z;
    z *= z;
    std::cout << z;


    return 0;
}