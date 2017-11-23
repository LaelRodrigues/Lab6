/** 
 * @file	cubo.cpp
 * @brief	Implementacao da classe Cubo para representar
 *			um cubo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	22/11/2017
 */


#include "cubo.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

namespace geometria {

	//Construtor padrao
	Cubo::Cubo(){}

	/** @param _aresta Aresta do cubo */
	Cubo::Cubo(float _aresta){
		setAresta(_aresta);
	}

	//Destrutor padrao 
	Cubo::~Cubo(){}

	/** @return Aresta do cubo */
	float Cubo::getAresta() {
		return aresta;
	}

	/** @param _aresta Aresta do cubo */
	void Cubo::setAresta(float _aresta) {
		if(_aresta <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		aresta = _aresta;
	}

	/** @return Area do cubo */
	float Cubo::calcArea() {
		return 6.0 * (aresta * aresta);
	}

	/** @return Volume do cubo */
	float Cubo::calcVolume() {
		return (aresta * aresta * aresta);
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Cubo::print(std::ostream &o) const {
		o << "Aresta do cubo = " << aresta;
		return o;
	}
}