#include <vector>
#include <iostream>
#include "tr.h"
using namespace std;
triangle operator+(const triangle&  tree,const triangle&  tre)
{
	if (((tree.a + tre.a + tree.b + tre.b) > (tree.c + tre.c)) &&
		((tree.c + tre.c + tree.b + tre.b) > (tree.a + tre.a)) &&
		((tree.c + tre.c + tree.a + tre.a) > (tree.b + tre.b))) {
		return triangle(tree.a + tre.a, tree.b + tre.b, tree.c + tre.c);
	}
	else {
		return triangle(tree.a, tree.b, tree.c);
	}
}
triangle operator-(const triangle& tree, const triangle& tre)
{
	if (((tree.a - tre.a + tree.b - tre.b) > (tree.c - tre.c)) &&
		((tree.c - tre.c + tree.b - tre.b) > (tree.a - tre.a)) &&
		((tree.c - tre.c + tree.a - tre.a) > (tree.b - tre.b)) &&
		(tree.c - tre.c > 0) && (tree.b - tre.b > 0) && (tree.a - tre.a > 0)) {
		return triangle(tree.a - tre.a, tree.b - tre.b, tree.c - tre.c);
	}
	else {
		return triangle(tree.a, tree.b, tree.c);
	}
}
int main()
{
	int n, a, b, c;
	char ch;
	cin >> n;
	vector<triangle> ar;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		ar.push_back(triangle(a, b, c));
	}
	while (cin >> a >> ch >> c) {
		if (ch == '+')
			ar[a - 1] = ar[a - 1] + ar[c - 1];
		else  if (ch == '-')
			ar[a - 1] = ar[a - 1] - ar[c - 1];
	}
	ar[a - 1].print();
	return 0;
}