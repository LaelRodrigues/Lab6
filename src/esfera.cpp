/** 
 * @file	esfera.cpp
 * @brief	Implementacao da classe Esfera para representar
 *			uma esfera
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	23/11/2017
 * @date 	23/11/2017
 */


#include "esfera.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

#define PI 3.1415

namespace geometria {

	//Construtor padrao
	Esfera::Esfera(){}

	/** @param _raio Raio da esfera */
	Esfera::Esfera(float _raio){
		setRaio(_raio);
	}

	//Destrutor padrao
	Esfera::~Esfera(){}

	/** @return Raio da esfera */
	float Esfera::getRaio() {
		return raio;
	}

	/** @param _raio Raio da esfera */
	void Esfera::setRaio(float _raio) {
		if(_raio <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		raio = _raio;
	}

	/** @return Area da esfera */
	float Esfera::calcArea() {
		return (4.0 * PI * (raio * raio));
	}

	/** @return Volume da esfera */
	float Esfera::calcVolume() {
		return (4.0/3.0 * PI * (raio * raio * raio));
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Esfera::print(std::ostream &o) const {
		o << "Raio da esfera = " << raio;
		return o;
	}
}