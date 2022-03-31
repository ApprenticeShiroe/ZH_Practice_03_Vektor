#include <stdio.h>
#include "vector.h"

// A feladat: http://www.aut.bme.hu/CppPeldatar/Article.aspx?Id=9fc0c571-b5c1-dc11-8d5b-0015171a087a

int main() {

	vector a;
	vector b(4.5, 8.0);
	vector c(2.5, 3);
	a.print();
	b.print();
	c.print();
	a.add(b, c);
	a.print();
	printf("\nKivonasok\n");
	vector d;
	d.sub(b, c);
	d.print();
	printf("\nSzorzasok:\n");
	vector e;
	e.mult(d, a);
	e.print();




	return 0;
}