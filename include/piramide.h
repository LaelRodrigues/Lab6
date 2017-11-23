/** 
 * @file	piramide.h
 * @brief	Definicao da classe Piramide para representar
 *			uma piramide
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	22/11/2017
 * @date 	22/11/2017
 */


#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include "figura.h"
#include "espacial.h"


namespace geometria {

	/**
	 * @class 	Piramide piramide.h
	 * @brief	Classe que representa uma Piramide
	 * @details	Os atributos da classe piramide: aresta,
	 *			apotema e altura 
	 */
	class Piramide : public Espacial {

		private:
			float aresta;					/**< Aresta da base da piramide */
			float apotema;					/**< apotema das faces laterais da piramide*/
			float altura;					/**< Altura da piramide */

		public:
			/** @brief Construtor padrao */
			Piramide();

			/** @brief Construtor parametrizado */
			Piramide(float _aresta, float _apotema, float _altura);

			/** @brief Destrutor padrao */
			~Piramide();

			/** @brief Retorna a aresta da base da piramide */
			float getAresta();

			/** @brief Retorna o apotema das faces laterais da piramide */
			float getApotema();

			/** @brief Retorna a altura do piramide */
			float getAltura();

			/** @brief Modifica a aresta da base da piramide */
			void setAresta(float _aresta);

			/** @brief Modifica o apotema das faces laterais da piramide */
			void setApotema(float _apotema);

			/** @brief Modifica a altura da piramide */
			void setAltura(float _altura);

			/** @brief Calcula a area da piramide */
			float calcArea();

			/** @brief Calcula o volume da piramide */
			float calcVolume();

		private:
			/** @brief Metodo para imprimir os dados de uma piramide */
			std::ostream& print(std::ostream &o) const;
	};
}

#endif