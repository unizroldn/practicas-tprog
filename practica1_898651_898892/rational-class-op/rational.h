#pragma once

#include <iostream>

// Solucion con atributos privados.

class Rational
{
private:
	// Atributos
	int num, den;

private:
	// Auxiliares

	static int mcd(int a, int b);
	void reduce();

public:
	// Constructores

	Rational();
	Rational(int num, int den);

	// Operadores aritmeticos

	Rational operator+(const Rational& r2) const;
	Rational operator-(const Rational& r2) const;
	friend Rational operator*(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);

	// Operadores logicos

	bool operator==(const Rational& r2) const;
	bool operator<(const Rational& r2) const;
	bool operator>(const Rational& r2) const;

	// Friends, en su caso
	friend std::ostream& operator<<(std::ostream& os, const Rational& r1);
	friend std::istream& operator>>(std::istream& is, Rational& r1);
};

// Operadores aritmeticos

Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

// Entrada/salida

std::ostream& operator<<(std::ostream& os, const Rational& r1);
std::istream& operator>>(std::istream& is, Rational& r1);
