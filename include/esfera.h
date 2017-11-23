/** 
 * @file	esfera.h
 * @brief	Definicao da classe Esfera para representar
 *			um esfera
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	23/11/2017
 * @date 	23/11/2017
 */	

#ifndef ESFERA_H
#define ESFERA_H	

#include <ostream>
using std::ostream;

#include "espacial.h"
#include "figura.h"

namespace geometria {
	
	/**
 	 * @class 	Esfera esfera.h
  	 * @brief	Classe que representa um Esfera
 	 * @details O atribulo da esfera e seu raio
 	 */
	class Esfera : public Espacial {
		
		private:		
			float raio;				/**< Raio da esfera */

		public:

			/** @brief Construtor padrao */
			Esfera();

			/** @brief Construtor parametrizado */	
			Esfera(float _raio);

			/** @brief Destrutor padrao */
			~Esfera();

			/** @brief Retorna o raio do esfera */
			float getRaio();

			/** @brief Modifica o raio do esfera */
			void setRaio(float _raio);

			/** @brief Calcular a area do esfera */
			float calcArea(); 
		
			/** @brief Calcular o volume do esfera */
			float calcVolume();

		private:

			/** @brief Metodo para imprimir os dados de uma esfera */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif