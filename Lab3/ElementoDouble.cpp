#include "stdafx.h"

#include "ElementoDouble.h"

ElementoDouble::ElementoDouble(double d) {
	this->d = d;
}

ElementoDouble::~ElementoDouble() {

}

double ElementoDouble::compareTo(Elemento* otro) {
	double cmp = 0;
	ElementoDouble * eDob = static_cast<ElementoDouble*>(otro);
	if (eDob != 0) {
		cmp = this->d < eDob->d ? -1 : this->d == eDob->d ? 0 : 1;
	}
	return cmp;
}

void ElementoDouble::imprimir(ostream& out) const{
	out << d;
}