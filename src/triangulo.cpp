/** 
 * @file	triangulo.cpp
 * @brief	Implementacao da classe Triangulo para representar
 *			um triangulo equilatero
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	24/11/2017
 */


#include "triangulo.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

namespace geometria {

	//Construtor padrao
	Triangulo::Triangulo(){}

	/** @param _lado Lado do triangulo */
	Triangulo::Triangulo(float _lado){
		lado = _lado;
	}

	//Destrutor padrao
	Triangulo::~Triangulo(){}

	/** @return Lado do triangulo */
	float Triangulo::getLado() {
		return lado;
	}

	/** @param _lado Lado do triangulo */
	void Triangulo::setLado(float _lado) {
		if(_lado <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		lado = _lado;
	}

	/** @return Area do triangulo */
	float Triangulo::calcArea() {
		float altura = (lado / 2.0) * sqrt(3);
		return (lado * altura) / 2.0;
	}

	/** @return Perimetro do triangulo */
	float Triangulo::calcPerimetro() {
		return 3.0 * lado;
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Triangulo::print(std::ostream &o) const {
		o << "Lado do triangulo = " << lado;
		return o;
	}
}