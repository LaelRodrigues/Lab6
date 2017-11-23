/** 
 * @file	paralelepipedo.cpp
 * @brief	Implementacao da classe Paralelepipedo para representar
 *			um paralelepipedo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	23/11/2017
 */


#include "paralelepipedo.h"

#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

#include <cstdlib>
using std::exit;

namespace geometria {

	//Construtor padrao
	Paralelepipedo::Paralelepipedo(){}

	/** 
	 * @param _aresta1 Aresta1 do paralelepipedo
	 * @param _aresta2 Aresta2 do paralelepipedo
	 * @param _aresta3 Aresta3 do paralelepipedo 
	 */
	Paralelepipedo::Paralelepipedo(float _aresta1, float _aresta2, float _aresta3){
		setAresta1(_aresta1);
		setAresta2(_aresta2);
		setAresta3(_aresta3);
	}

	//Destrutor padrao 
	Paralelepipedo::~Paralelepipedo(){}

	/** @return Aresta1 do paralelepipedo */
	float Paralelepipedo::getAresta1() {
		return aresta1;
	}

	/** @return Aresta2 do paralelepipedo */
	float Paralelepipedo::getAresta2() {
		return aresta2;
	}

	/** @return Aresta1 do paralelepipedo */
	float Paralelepipedo::getAresta3() {
		return aresta3;
	}

	/** @param _aresta1 Aresta1 do paralelepipedo */
	void Paralelepipedo::setAresta1(float _aresta1) {
		if(_aresta1 <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		aresta1 = _aresta1;
	}

	/** @param _aresta2 Aresta2 do paralelepipedo */
	void Paralelepipedo::setAresta2(float _aresta2) {
		if(_aresta2 <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		aresta2 = _aresta2;
	}

	/** @param _aresta3 Aresta3 do paralelepipedo */
	void Paralelepipedo::setAresta3(float _aresta3) {
		if(_aresta3 <= 0 ) {
			cout << "Valor invalido." << endl;
			cout << "Programa finalizado." << endl;
			exit(EXIT_FAILURE);
		}
		aresta3 = _aresta3;
	}


	/** @return Area do  paralelepipedo */
	float Paralelepipedo::calcArea() {
		return (2.0 * aresta1 * aresta2) + (2.0 * aresta1 * aresta3) + (2.0 * aresta2 * aresta3);
	}

	/** @return Volume do paralelepipedo */
	float Paralelepipedo::calcVolume() {
		return aresta1 * aresta2 * aresta3;
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Paralelepipedo::print(std::ostream &o) const {
		o << "Aresta1 do paralelepipedo = " << aresta1 << endl;
		o << "Aresta2 do paralelepipedo = " << aresta2 << endl;
		o << "Aresta3 do paralelepipedo = " << aresta3;
		return o;
	}
}