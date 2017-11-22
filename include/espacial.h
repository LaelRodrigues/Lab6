/** 
 * @file	espacial.h
 * @brief	Definicao da classe Espacial para representar
 *			uma figura geometrica espacial
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	21/11/2017
 */	


#ifndef ESPACIAL_H
#define ESPACIAL_H

#include "figura.h"



namespace geometria {
	/**
	 * @class 	Espacial espacial.h
	 * @brief	Classe que representa um figura geometrica espacial
	 */
	class Espacial : public Figura {

		public:
			/** @brief Construtor padrao */
			Espacial();

			/** @brief Destrutor padrao */
			virtual ~Espacial();

			/** @brief Calcula o volume da figura */
			virtual float calcVolume() = 0;

	};
}

#endif