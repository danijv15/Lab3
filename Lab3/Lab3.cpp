// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ArbolBinario d;
	for (int i = 0; i < 5; ++i) {
		d.insertarElemento(new ElementoDouble(5.8));
		d.insertarElemento(new ElementoDouble(3.7));
		d.insertarElemento(new ElementoDouble(10));
		d.insertarElemento(new ElementoDouble(0.0));
		d.insertarElemento(new ElementoDouble(1.9));
	}

	Persona p1(22, "Daniel");
	Persona p2(3, "Nicolas");
	Persona p3(99, "Pablo");
	Persona p4(15, "Danna");
	Persona p5(37, "Monica");
	
	ArbolBinario p;
	for (int i = 0; i < 5; ++i) {
		p.insertarElemento(new ElementoPersona(p1));
		p.insertarElemento(new ElementoPersona(p2));
		p.insertarElemento(new ElementoPersona(p3));
		p.insertarElemento(new ElementoPersona(p4));
		p.insertarElemento(new ElementoPersona(p5));
	}

	cout << "Arbol de Doubles:" << endl;
	cout << d << endl;
	
	cout << "Arbol de Personas:" << endl;
	cout << p << endl;

	cout << "Fin del programa" << endl;

	return 0;
}

