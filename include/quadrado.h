/** 
 * @file	quadrado.h
 * @brief	Definicao da classe Quadrado para representar
 *			um quadrado
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	24/11/2017
 */	

#ifndef QUADRADO_H
#define QUADRADO_H

#include <ostream>
using std::ostream;

#include "plana.h"
#include "figura.h"


namespace geometria {
	
	/**
 	 * @class 	Quadrado quadrado.h
	 * @brief	Classe que representa um Quadrado
 	 * @details O atribulo do quadrado e o seu lado
 	 */
	class Quadrado : public Plana {
		
		private:		
			float lado;				/**< Lado do quadrado */

		public:

			/** @brief Construtor padrao */
			Quadrado();

			/** @brief Construtor parametrizado */	
			Quadrado(float _lado);

			/** @brief Construtor padrao */
			~Quadrado();

			/** @brief Retorna o lado do quadrado */
			float getLado();

			/** @brief Modifica o lado do quadrado */
			void setLado(float _lado);

			/** @brief Calcular a area do quadrado */
			float calcArea(); 
		
			/** @brief Retorna o perimetro do quadrado */
			float calcPerimetro();
			
		private:

			/** @brief Metodo para imprimir os dados de um quadrado */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif