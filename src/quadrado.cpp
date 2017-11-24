/** 
 * @file	quadrado.cpp
 * @brief	Implementacao da classe Quadrado para representar
 *			um quadrado
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	24/11/2017
 */


#include "quadrado.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

namespace geometria {

	//Construtor padrao
	Quadrado::Quadrado(){}

	/** @param _lado Lado do quadrado */
	Quadrado::Quadrado(float _lado){
		setLado(_lado);
	}

	/** Destrutor padrao */
	Quadrado::~Quadrado(){}

	/** @return Lado do quadrado */
	float Quadrado::getLado() {
		return lado;
	}

	/** @param _lado Lado do quadrado */
	void Quadrado::setLado(float _lado) {
		if(_lado <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		lado = _lado;
	}

	/** @return Area do Quadrado */
	float Quadrado::calcArea() {
		return lado * lado;
	}

	/** @return Perimetro do triangulo */
	float Quadrado::calcPerimetro() {
		return 4.0 * lado;
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Quadrado::print(std::ostream &o) const {
		o << "Lado do quadrado = " << lado;
		return o;
	}
}