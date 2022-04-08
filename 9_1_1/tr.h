#ifndef _TR_H
#define _TR_H
class triangle {
private:
	int a, b, c;
public:
	triangle(int a = 0, int b = 0, int c = 0);
	int perim();
	double area();
	void print();
	friend triangle operator+(const triangle& , const triangle& );
	friend triangle operator-(const triangle& , const triangle& );
};
#endif