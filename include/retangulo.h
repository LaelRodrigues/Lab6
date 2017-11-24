/** 
 * @file	retangulo.h
 * @brief	Definicao da classe Retangulo para representar
 *			um retangulo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	21/11/2017
 * @date 	24/11/2017
 */


#ifndef RETANGULO_H
#define RETANGULO_H

#include "plana.h"

namespace geometria {

	/**
	 * @class 	Retangulo retangulo.h
	 * @brief	Classe que representa um Retangulo
	 * @details	Os atributos da classe Retangulo: base e altura 
	 */
	class Retangulo : public Plana {

		private:
			float base;				/**< Base do retangulo */
			float altura;			/**< Altura do retangulo */

		public:
			/** @brief Construtor padrao */
			Retangulo();

			/** @brief Construtor parametrizado */
			Retangulo(float _base, float _altura);

			/** @brief Destrutor padrao */
			~Retangulo();

			/** @brief Retorna a base do retangulo */
			float getBase();

			/** @brief Retorna a altura do retangulo */
			float getAltura();

			/** @brief Modifica a base do retangulo */
			void setBase(float _base);

			/** @brief Modifica a altura do retangulo */
			void setAltura(float _altura);

			/** @brief Calcula a area o retangulo */
			float calcArea();

			/** @brief Calcula a perimetro o retangulo */
			float calcPerimetro();

		private:
			/** @brief Metodo para imprimir os dados de um retangulo */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif