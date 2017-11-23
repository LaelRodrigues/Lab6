/**
 * @file	piramide.cpp
 * @brief	Implementacao da classe Piramide para representar
 *			uma piramide
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	22/11/2017	
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::exit;

#include "piramide.h"

namespace geometria {

	//Construtor padrao
	Piramide::Piramide() {}

	/*
	 * @param _aresta Aresta da base da piramide
	 * @param _apotema Apotema das faces laterais da piramide
	 * @param _altura Altura da piramide
	 */
	Piramide::Piramide(float _aresta, float _apotema, float _altura) {
		setAresta(_aresta);
		setApotema(_apotema);
		setAltura(_altura);
	}
	
	//Destrutor padrao
	Piramide::~Piramide() {}

	/** @return Aresta da base da piramide */
	float Piramide::getAresta() {
		return aresta;
	}

	/** @return Apotema das faces laterais da piramide */
	float Piramide::getApotema() {
		return apotema;
	}

	/** @return Altura do piramide */
	float Piramide::getAltura() {
		return altura;
	}

	/** @param _aresta Aresta da base da piramide */
	void Piramide::setAresta(float _aresta) {
		if(_aresta <= 0) {
			cout << "Erro: valor invalido." << endl;
			cout << "Programa finalizado." << endl;
		}
		aresta = _aresta;
	}

	/** @param _apotema Apotema das faces laterais da piramide */
	void Piramide::setApotema(float _apotema) {
		if(_apotema <= 0) {
			cout << "Erro: valor invalido." << endl;
			cout << "Programa finalizado." << endl;
		}
		apotema = _apotema;
	}

	/** @param _altura Altura da piramide */
	void Piramide::setAltura(float _altura) {
		if(_altura <= 0) {
			cout << "Erro: valor invalido." << endl;
			cout << "Programa finalizado." << endl;
		}
		altura = _altura;
	}

	/** @return	Area da piramide */
	float Piramide::calcArea() {
		float area_b = aresta * aresta;
		float area_l = 4.0 * ((aresta * apotema)/ 2.0);
		return (area_b + area_l);
	}

	/** @return	Volume da piramide */
	float Piramide::calcVolume() {
		return  ((aresta * aresta) * altura)/3;
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Piramide::print(std::ostream &o) const {
		o << "Aresta da base da piramide = " << aresta << endl;
		o << "Apotema das faces laterais da piramide = " << apotema << endl;
		o << "Altura da piramide = " << altura;
		return o;
	}
}
