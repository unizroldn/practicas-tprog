#include "rational.h"

// Auxiliares

int Rational::mcd(int a, int b)
{
	return ( b == 0 ? a : mcd(b,a%b));
}

void Rational::reduce()
{
	int gcd = mcd(num, den);
	num = num / gcd;
	den = den / gcd;
    if (den < 0) {  
        num = -num;
        den = -den;
    }
}

// Constructores

Rational::Rational()
    : num(0), den(1)
{
}

Rational::Rational(int _num, int _den)
    : num(_num), den(_den)
{
	this->reduce();
}

// Operadores aritmeticos

Rational Rational::operator+(const Rational& r2) const
{
    int den = this->den * r2.den;
    int num = this->num * r2.den + r2.num * this->den;

    // Crear resultado y reducirlo
    Rational res(num, den);
    
    return res;
}

Rational Rational::operator-(const Rational& r2) const
{
    int den = this->den * r2.den;
    int num = this->num * r2.den - r2.num * this->den;

    Rational res(num, den);
    
    return res;
}

Rational operator*(const Rational& r1, const Rational& r2)
{
    int num = r1.num * r2.num;
    int den = r1.den * r2.den;

    Rational res(num, den);
    
    return res;
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	int num = r1.num * r2.den;
    int den = r1.den * r2.num;

    Rational res(num, den);

    return res;
}

// Operadores logicos

bool Rational::operator==(const Rational& r2) const
{
	return (this->num == r2.num && this->den == r2.den);
}

bool Rational::operator<(const Rational& r2) const
{
	return this->num * r2.den < r2.num * this->den;
}

bool Rational::operator>(const Rational& r2) const
{
	return this->num * r2.den > r2.num * this->den;
}

// Entrada/salida

std::ostream& operator<<(std::ostream& os, const Rational& r1)
{
	os << r1.num << "/" << r1.den;
    return os;
}

std::istream& operator>>(std::istream& is, Rational& r1)
{
	is >> r1.num;
	is.ignore();
	is >> r1.den;

	r1.reduce();
    return is;
}



