#include <iostream>
#include "fraction.hpp"

Fraction::Fraction(int n, int d) : numerator(n), denominator(d) {
    std::cout << "Calling default constructor Fraction" << std::endl;
}

Fraction::Fraction(const Fraction& f){
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    std::cout << "Calling constructor fraction" << std::endl;
}

Fraction::~Fraction() {
    std::cout << "Calling destructor Fraction" << std::endl;
}

Fraction& Fraction::operator=(const Fraction& f) {
    std::cout << "Calling copy assignment operator" << std::endl;
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    return *this;
}

Fraction Fraction::add(const Fraction& f) {
    Fraction result;
    result.numerator = this->numerator * f.denominator + f.numerator * this->denominator;
    result.denominator = this->denominator * f.denominator;
    return result;
}

Fraction Fraction::subtract(const Fraction& f) {
    Fraction result;
    result.numerator = this->numerator * f.denominator - this->numerator * f.denominator;
    result.denominator = this->denominator * f.denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& f){
    Fraction result;
    result.numerator = this->numerator * f.numerator;
    result.denominator = this->denominator * f.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& f){
    Fraction result;
    result.numerator = this->numerator * f.denominator;
    result.denominator = this->denominator * f.numerator;
    return result;
}

void Fraction::read() {
    std::cout << "Geben sie den Nenner ein: ";
    std::cin >> this->numerator;
    int denominator = 0;
    while (!denominator) {
        std::cout << "Geben sie den Zaehler ein: ";
        std::cin >> denominator;
    }
    this->denominator = denominator;
}

void Fraction::print() {
    std::cout << this->numerator << "/" << this->denominator << std::endl;
}

int Fraction::gcd(int p, int q) {
    while (q != 0) {
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
}

void Fraction::cancel(){
    int gcdNumDenom = gcd(this->numerator, this->denominator);
    this->numerator /= gcdNumDenom;
    this->denominator /= gcdNumDenom;
}

void Fraction::format() {
    cancel();
    if (this->denominator < 0) {
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
    }
    else if (this->denominator == 0)
        std::cout << "Nenner darf nicht Null sein!" << std::endl;
}