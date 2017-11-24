/** 
 * @file	triangulo.h
 * @brief	Definicao da classe Triangulo para representar
 *			um triangulo equilatero
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	24/11/2017
 */	

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <ostream>
using std::ostream;

#include "plana.h"
#include "figura.h"

namespace geometria {
	/**
	 * @class 	Triangulo triangulo.h
 	 * @brief	Classe que representa um Triangulo
 	 * @details O atribulo do triangulo e seu lado
 	 */
	class Triangulo : public Plana {
		
		private:		
			float lado;				/**< Lado do triangulo */

		public:

			/** @brief Construtor padrao */
			Triangulo();

			/** @brief Construtor parametrizado */	
			Triangulo(float _lado);

			/** @brief Destrutor padrao */
			~Triangulo();

			/** @brief Retorna o lado do triangulo */
			float getLado();

			/** @brief Modifica o lado do triangulo */
			void setLado(float _lado);

			/** @brief Calcular a area do triangulo */
			float calcArea(); 
		
			/** @brief Retorna o perimetro do triangulo */
			float calcPerimetro();

		private:
			/** @brief Metodo para imprimir os dados de um triangulo */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif