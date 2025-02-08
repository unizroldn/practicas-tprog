#include "rational.h"

// Auxiliares, privadas

int mcd(int a, int b)
{
	return ( b==0 ? a : mcd(b,a%b) );
}

void reduce(Rational& r)
{
	int gcd = mcd(r.num, r.den);
	r.num = r.num /gcd;
	r.den = r.den /gcd;

}

// Inicializadores

void init(Rational& r)
{
	r.num = 0;
	r.den = 1;
}

void init(Rational& r, int num, int den)
{
	r.num = num;
	r.den = den;
	reduce(r);
}

// Entrada/salida

void write(std::ostream& os, const Rational& r)
{
	os << r.num << "/" << r.den;
}

void read(std::istream& is, Rational& r)
{
	char op;
	is >> r.num >> op >> r.den;
	reduce(r);
}

// Operaciones aritmeticas

Rational add(const Rational& r1, const Rational& r2)
{
    // Calcular el denominador común (mcm de r1.den y r2.den)
    int num = r1.num * r2.den + r2.num * r1.den;
    int den = r1.den * r2.den;

    // Crear resultado y reducirlo
    Rational res;
	init(res, num, den);
    reduce(res);
    
    return res;
}

Rational sub(const Rational& r1, const Rational& r2)
{
	    // Calcular el denominador común (mcm de r1.den y r2.den)
    int num = r1.num * r2.den - r2.num * r1.den;
    int den = r1.den * r2.den;

    // Crear resultado y reducirlo
    Rational res;
	init(res, num, den);
    reduce(res);
    
    return res;
}

Rational mul(const Rational& r1, const Rational& r2)
{
	int num = r1.num * r2.num;
	int den = r1.den * r2.den;

	Rational res;
	init(res, num, den);
    reduce(res);
	return res;
}

Rational div(const Rational& r1, const Rational& r2)
{
	
	int num = r1.num * r2.den;
	int den = r1.den * r2.num;

	Rational res;
	init(res, num, den);
    reduce(res);
	return res;
}

// Operaciones logicas

bool equal(const Rational& r1, const Rational& r2)
{
	return (r1.num == r2.num && r1.den == r2.den);
}

bool lesser_than(const Rational& r1, const Rational& r2)
{
	return r1.num * r2.den < r2.num * r1.den;
}

bool greater_than(const Rational& r1, const Rational& r2)
{
	return r1.num * r2.den > r2.num * r1.den;
}
