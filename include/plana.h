/** 
 * @file	plana.h
 * @brief	Definicao da classe Plana para representar
 *			uma figura geometrica plana
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	21/11/2017
 */	

#ifndef PLANA_H
#define PLANA_H

#include "figura.h"

/**
 * @class 	Plana plana.h
 * @brief	Classe que representa um figura geometrica plana
 */

namespace geometria {

	class Plana : public Figura {

		public:
			/** @brief Construtor padrao */
			Plana();

			/** @brief Destrutor padrao */
			virtual ~Plana();

			/** @brief Retorna o perimetro da figura */
			virtual float calcPerimetro() = 0;
	};
}

#endif