/** 
 * @file	paralelepipedo.h
 * @brief	Definicao da classe Paralelepipedo para representar
 *			um paralelepipedo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	23/11/2017
 */	

#ifndef PARAELLEPIPEDO_H
#define PARAELLEPIPEDO_H

#include <ostream>
using std::ostream;

#include "figura.h"
#include "espacial.h"

namespace geometria {

	/**
 	* @class 	Paralelepipedo paralelepipedo.h
 	* @brief	Classe que representa um Paralelepipedo
 	* @details  O atribulo do paralelepipedo: aresta1, aresta2 
 	*			e aresta 3 
 	*/
	class Paralelepipedo : public Espacial {
		
		private:		
			float aresta1;			/**< Aresta1 do paralelepipedo */
			float aresta2;			/**< Aresta2 do paralelepipedo */
			float aresta3;			/**< Aresta3 do paralelepipedo */

		public:

			/** @brief Construtor padrao */
			Paralelepipedo();

			/** @brief Construtor parametrizado */	
			Paralelepipedo(float _aresta1, float _aresta2, float _aresta3);

			/** @brief Destrutor padrao */
			~Paralelepipedo();

			/** @brief Retorna a aresta1 do paralelepipedo */
			float getAresta1();

			/** @brief Retorna a aresta2 do paralelepipedo */
			float getAresta2();

			/** @brief Retorna a aresta3 do paralelepipedo */
			float getAresta3();

			/** @brief Modifica a aresta1 do paralelepipedo */
			void setAresta1(float _aresta1);

			/** @brief Modifica a aresta2 do paralelepipedo */
			void setAresta2(float _aresta2);

			/** @brief Modifica a aresta3 do paralelepipedo */
			void setAresta3(float _aresta3);

			/** @brief Calcular a area do paralelepipedo */
			float calcArea(); 
		
			/** @brief Calcular o volume da paralelepipedo */
			float calcVolume();

		private:

			/** @brief Metodo para imprimir os dados de um paralelepipedo */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif