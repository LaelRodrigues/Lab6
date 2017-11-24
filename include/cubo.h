/** 
 * @file	cubo.h
 * @brief	Definicao da classe Cubo para representar
 *			um cubo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	24/11/2017
 */	

#ifndef CUBO_H
#define CUBO_H	

#include <ostream>
using std::ostream;

#include "figura.h"
#include "espacial.h"

namespace geometria {

	/**
 	* @class 	Cubo cubo.h
 	* @brief	Classe que representa um Cubo
 	* @details O atribulo do cubo e sua aresta
 	*/
	class Cubo : public Espacial {
		
		private:		
			float aresta;				/**< Aresta do cubo */

		public:

			/** @brief Construtor padrao */
			Cubo();

			/** @brief Construtor parametrizado */	
			Cubo(float _aresta);

			/** @brief Destrutor padrao */
			~Cubo();

			/** @brief Retorna a aresta do cubo */
			float getAresta();

			/** @brief Modifica a aresta do cubo */
			void setAresta(float _aresta);

			/** @brief Calcular a area do cubo */
			float calcArea(); 
		
			/** @brief Calcular o volume do cubo */
			float calcVolume();

		private:

			/** @brief Metodo para imprimir os dados de um cubo */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif