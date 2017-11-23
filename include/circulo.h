/** 
 * @file	circulo.h
 * @brief	Definicao da classe Circulo para representar
 *			um circulo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	22/11/2017
 */	

#ifndef CIRCULO_H
#define CIRCULO_H	

#include <ostream>
using std::ostream;

#include "plana.h"
#include "figura.h"

namespace geometria {
	
	/**
 	 * @class 	Circulo circulo.h
  	 * @brief	Classe que representa um Circulo
 	 * @details O atribulo do circulo e seu raio
 	 */
	class Circulo : public Plana {
		
		private:		
			float raio;				/**< Raio do circulo */

		public:

			/** @brief Construtor padrao */
			Circulo();

			/** @brief Construtor parametrizado */	
			Circulo(float _raio);

			/** @brief Destrutor padrao */
			~Circulo();

			/** @brief Retorna o raio do circulo */
			float getRaio();

			/** @brief Modifica o raio do circulo */
			void setRaio(float _raio);

			/** @brief Calcular a area do circulo */
			float calcArea(); 
		
			/** @brief Calcular o perimetro do circulo */
			float calcPerimetro();

		private:

			/** @brief Metodo para imprimir os dados de um circulo */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif