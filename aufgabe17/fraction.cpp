#include <iostream>
#include "fraction.hpp"

Fraction::Fraction(int n, int d) : m_numerator(n), m_denominator(d) {
    //std::cout << "Calling default constructor Fraction" << std::endl;
}

Fraction::Fraction(const Fraction& f){
    this->m_numerator = f.m_numerator;
    this->m_denominator = f.m_denominator;
    //std::cout << "Calling constructor fraction" << std::endl;
}

Fraction::~Fraction() {
    //std::cout << "Calling destructor Fraction" << std::endl;
}

Fraction& Fraction::operator=(const Fraction& f) {
    //std::cout << "Calling copy assignment operator" << std::endl;
    this->m_numerator = f.m_numerator;
    this->m_denominator = f.m_denominator;
    return *this;
}

Fraction Fraction::add(const Fraction& f) {
    Fraction result;
    result.m_numerator = this->m_numerator * f.m_denominator + f.m_numerator * this->m_denominator;
    result.m_denominator = this->m_denominator * f.m_denominator;
    return result;
}

Fraction Fraction::subtract(const Fraction& f) {
    Fraction result;
    result.m_numerator = this->m_numerator * f.m_denominator - this->m_numerator * f.m_denominator;
    result.m_denominator = this->m_denominator * f.m_denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& f){
    Fraction result;
    result.m_numerator = this->m_numerator * f.m_numerator;
    result.m_denominator = this->m_denominator * f.m_denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& f){
    Fraction result;
    result.m_numerator = this->m_numerator * f.m_denominator;
    result.m_denominator = this->m_denominator * f.m_numerator;
    return result;
}

void Fraction::read() {
    std::cout << "Geben sie den Nenner ein: ";
    std::cin >> this->m_numerator;
    int m_denominator = 0;
    while (!m_denominator) {
        std::cout << "Geben sie den Zaehler ein: ";
        std::cin >> m_denominator;
    }
    this->m_denominator = m_denominator;
}

void Fraction::print() {
    this->format();
    std::cout << this->m_numerator << "/" << this->m_denominator << std::endl;
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
    int gcdNumDenom = gcd(this->m_numerator, this->m_denominator);
    this->m_numerator /= gcdNumDenom;
    this->m_denominator /= gcdNumDenom;
}

void Fraction::format() {
    cancel();
    if (this->m_denominator < 0) {
        this->m_numerator = -this->m_numerator;
        this->m_denominator = -this->m_denominator;
    }
    else if (this->m_denominator == 0)
        std::cout << "Nenner darf nicht Null sein!" << std::endl;
}

Fraction Fraction::operator+(const Fraction& rhs) {
    return this->add(rhs);
}

Fraction Fraction::operator-(const Fraction& rhs) {
    return this->subtract(rhs);
}

Fraction Fraction::operator*(const Fraction& rhs) {
    return this->multiply(rhs);
}

Fraction Fraction::operator/(const Fraction& rhs) {
    return this->divide(rhs);
}

int Fraction::get_numerator(){
    return this->m_numerator;
}

int Fraction::get_denominator(){
    return this->m_denominator;
}

void Fraction::set_numerator(int numerator) {
    this->m_numerator = numerator;
}

void Fraction::set_denominator(int denominator) {
    this->m_numerator = denominator;
}

std::ostream& operator<<(std::ostream& os, Fraction& f) {
    std::cout << f.get_numerator() << "/" << f.get_denominator();
    return os;
}

std::istream& operator>>(std::istream& is, Fraction& f) {
    char slash = 0;
    return is >> f.m_numerator >> slash >> f.m_denominator;
}