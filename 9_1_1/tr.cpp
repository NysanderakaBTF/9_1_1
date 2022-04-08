#include "tr.h"
#include <iostream>
#include <math.h>
triangle::triangle(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}
int triangle::perim() {
	return a + b + c;
}
double triangle::area() {
	return sqrt((double(a + b + c) / 2) * (double(a + b + c) / 2 - (double)a) * (double(a + b + c) / 2 - (double)b) * (double(a + b + c) / 2 - (double)c));
}

void triangle::print()
{
	std::cout << "a = " <<a << "; b = " << b << "; c = " << c << ".";
}
