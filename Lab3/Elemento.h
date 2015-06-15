#pragma once

#include <iostream>
using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();
	Elemento *hijoIzq, *hijoDer;

public:

	Elemento * getHijoIzq();
	Elemento * getHijoDer();
	void setHijoIzq(Elemento *);
	void setHijoDer(Elemento *);

	virtual ~Elemento();
	virtual double compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);
