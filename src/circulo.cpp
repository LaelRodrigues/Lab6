/** 
 * @file	circulo.cpp
 * @brief	Implementacao da classe Circulo para representar
 *			um circulo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	22/11/2017
 */


#include "circulo.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

#define PI 3.1415

namespace geometria {

	//Construtor padrao
	Circulo::Circulo(){}

	/** @param _raio Raio do circulo */
	Circulo::Circulo(float _raio){
		setRaio(_raio);
	}

	//Destrutor padrao
	Circulo::~Circulo(){}

	/** @return Raio do circulo */
	float Circulo::getRaio() {
		return raio;
	}

	/** @param _raio Raio do circulo */
	void Circulo::setRaio(float _raio) {
		if(_raio <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		raio = _raio;
	}

	/** @return Area do circulo */
	float Circulo::calcArea() {
		return PI * (raio * raio);
	}

	/** @return Perimetro do circulo */
	float Circulo::calcPerimetro() {
		return 2.0 * PI * raio;
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Circulo::print(std::ostream &o) const {
		o << "Raio do circulo = " << raio;
		return o;
	}
}