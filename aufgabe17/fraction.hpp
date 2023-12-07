#pragma once

class Fraction {
    public:
        Fraction(int n=0, int d=1);
        ~Fraction();
        Fraction(const Fraction &f);

        Fraction& operator=(const Fraction& f);
        Fraction add(const Fraction&);
        Fraction subtract(const Fraction&);
        Fraction multiply(const Fraction&);
        Fraction divide(const Fraction&);
        void read();
        void print();
    
    private:
        int numerator;
        int denominator;

        int gcd(int, int);
        void cancel();
        void format();
};