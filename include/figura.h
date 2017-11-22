/** 
 * @file	figura.h
 * @brief	Definicao da classe Figura para representar
 *			uma figura geometrica
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	15/11/2017
 * @date 	21/11/2017
 */

#ifndef FIGURA_H
#define FIGURA_H	


namespace geometria {
	/**
	 * @class 	Figura figura.h
	 * @brief	Classe que representa um Figura
	 */
	class Figura {

		public:
			/** @brief Construtor padrao */
			Figura();

			/** @brief Destrutor padrao */
			virtual ~Figura();

			/** @brief Retorna a area do figura */
			virtual float calcArea() = 0;
	};
}

#endif	