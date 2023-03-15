#pragma once
#include <iostream>
using namespace std;

class Complex {
	int re, im;
public:
	Complex() {
		re = 0;
		im = 0;
	}
	Complex(int real, int imaginar) {
		this->re = real;
		this->im = imaginar;
	}
	friend ostream& operator << (ostream& out, const Complex& c);
	friend istream& operator >> (istream& in, Complex& c);
	friend Complex operator+ (const Complex& c1, const Complex& c2);
	friend Complex operator- (const Complex& c1, const Complex& c2);
	friend Complex operator* (const Complex& c1, const Complex& c2);
	friend Complex operator^ (const Complex& c1, int);
	Complex operator=(int);
};