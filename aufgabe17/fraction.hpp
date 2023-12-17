#pragma once
#include <iostream>

class Fraction {
    public:
        Fraction(int n=0, int d=1);
        ~Fraction();
        Fraction(const Fraction &f);

        Fraction& operator=(const Fraction& f);
        friend std::ostream& operator<<(std::ostream& os, Fraction& f);
        friend std::istream& operator>>(std::istream& is, Fraction& f);

        Fraction operator+(const Fraction& rhs);
        Fraction operator-(const Fraction& rhs);
        Fraction operator*(const Fraction& rhs);
        Fraction operator/(const Fraction& rhs);        

        Fraction add(const Fraction&);
        Fraction subtract(const Fraction&);
        Fraction multiply(const Fraction&);
        Fraction divide(const Fraction&);
        void read();
        void print();

        int get_numerator();
        int get_denominator();

        void set_numerator(int numerator);
        void set_denominator(int denominator);
    
    private:
        int m_numerator;
        int m_denominator;

        int gcd(int, int);
        void cancel();
        void format();
};