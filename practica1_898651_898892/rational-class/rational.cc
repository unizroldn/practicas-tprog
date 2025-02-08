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
}

// Constructores

Rational::Rational()
{
	num = 0;
	den = 1;
}

Rational::Rational(int num, int den)
{
	this->num = num;
	this->den = den;
	this->reduce();
}

// Entrada/salida

void Rational::write(std::ostream& os) const
{
	os << num << "/" << den;
	
}


void Rational::read(std::istream& is)
{
	is >> num;
	is.ignore();
	is >> den;

	this->reduce();


}

// Operaciones aritmeticas
Rational Rational::add(const Rational& r2) const
{
    int den = this->den * r2.den;
    int num = this->num * r2.den + r2.num * this->den;

    // Crear resultado y reducirlo
    Rational res(num, den);
    res.reduce();
    
    return res;
}

Rational Rational::sub(const Rational& r2) const
{
    int den = this->den * r2.den;
    int num = this->num * r2.den - r2.num * this->den;

    Rational res(num, den);
    res.reduce();
    
    return res;
}

Rational Rational::mul(const Rational& r2) const
{
    int num = this->num * r2.num;
    int den = this->den * r2.den;

    Rational res(num, den);
    res.reduce();
    
    return res;
}

Rational Rational::div(const Rational& r2) const
{
    int num = this->num * r2.den;
    int den = this->den * r2.num;

    Rational res(num, den);
    res.reduce();
    
    return res;
}

// Operaciones logicas

bool Rational::equal(const Rational& r2) const
{
	return (this->num == r2.num && this->den == r2.den);

}

bool Rational::lesser_than(const Rational& r2) const
{
	return this->num * r2.den < r2.num * this->den;
}

bool Rational::greater_than(const Rational& r2) const
{
	return this->num * r2.den > r2.num * this->den;
}
