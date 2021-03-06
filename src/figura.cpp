/** 
 * @file	figura.cpp
 * @brief	Implementacao da classe Figura para representar
 *			um Figura geometrica
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	21/11/2017
 */

#include "figura.h"

namespace geometria {

	//construtor padrao
	Figura::Figura() {}

	//Destrutor padrao
	Figura::~Figura() {}

	/** 
	 * @param o Referencia para stream de saida
	 * @param f Referencia para um objeto Figura
	 * @return Referencia para stream de saida
	 */
	std::ostream& operator<< (std::ostream &o, const Figura &f) {
		return f.print(o);
	}

}