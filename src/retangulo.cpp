/** 
 * @file	retangulo.cpp
 * @brief	Implementacao da classe Retangulo para representar
 *			um retangulo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	21/11/2017
 * @date 	22/11/2017	
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::exit;

#include "retangulo.h"

namespace geometria {

	//Construtor padrao
	Retangulo::Retangulo() {}

	/*
	 * @param _base Base do retangulo
	 * @param _altura Altura do retangulo
	 */
	Retangulo::Retangulo(float _base, float _altura) : base(_base), altura(_altura) {}

	//Destrutor padrao
	Retangulo::~Retangulo() {}

	/** @return Base do retangulo */
	float Retangulo::getBase() {
		return base;
	}

	/** @return Altura do retangulo */
	float Retangulo::getAltura() {
		return altura;
	}

	/** @param _base Base do retangulo */
	void Retangulo::setBase(float _base) {
		if(_base <= 0) {
			cout << "Erro: valor invalido." << endl;
			cout << "Programa finalizado." << endl;
		}
		base = _base;
	}

	/** @param _altura Altura do retangulo */
	void Retangulo::setAltura(float _altura) {
		altura = _altura;
	}

	/** @return	Area do retangulo */
	float Retangulo::calcArea() {
		return base * altura;
	}

	/** @return	Perimetro do retangulo */
	float Retangulo::calcPerimetro() {
		return 2.0 * (base + altura);
	}

	/**
 	 * @param o Referencia para stream de saida
 	 * @return Referencia para Stream de saida
 	 */
	std::ostream& Retangulo::print(std::ostream &o) const {
		o << "base do retangulo = " << base << endl;
		o << "altura do retangulo = " << altura;
		return o;
	}
}
