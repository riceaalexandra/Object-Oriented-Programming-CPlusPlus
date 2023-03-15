#include "complex.h"
Complex operator+ (const Complex& c1, const Complex& c2)
{
	Complex rezultat;
	rezultat.re = c1.re + c2.re;
	rezultat.im = c1.im + c2.im;
	return rezultat;
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << c.re;
	out << "+i" << c.im;
	return out;
}

istream& operator >> (istream& in, Complex& c)
{
	in >> c.re;
	in >> c.im;
	return in;
}

Complex operator- (const Complex& c1, const Complex& c2)
{
	Complex rez;
	rez.re = c1.re - c2.re;
	rez.im = c1.im - c2.im;
	return rez;
}

Complex operator* (const Complex& c1, const Complex& c2)
{
	Complex rez;
	rez.re = c1.re * c2.re - c1.im * c2.im;
	rez.im = (c1.re * c2.im) + (c2.re * c1.im);
	return rez;
}

Complex operator^ (const Complex& c1, int pow)
{
	Complex rez;
	for (int i = 0; i < pow; i++) {
		rez = rez * c1;
	}
	return rez;
}
Complex Complex::operator=(int t) {
	this->im = 0;
	this->re = t;
	return *(this);
}