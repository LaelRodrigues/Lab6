/** 
 * @file	main.cpp
 * @brief	Arquivo de teste das classes que representam figuras
 *			geometrias
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	23/11/2017
 * @date 	23/11/2017
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "triangulo.h"
#include "plana.h"
#include "figura.h"
#include "espacial.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

#include <memory>
using std::shared_ptr;
using std::make_shared;

/** @brief Funcao principal */
int main() {

	shared_ptr<geometria::Plana> figuras_planas;
	shared_ptr<geometria::Espacial> figuras_espaciais;
	
	int opcao;
	do {
		cout << "------------------------------------------" << endl;
		cout << "Calculadora de Geometrica Plana e Espacial" << endl;
		cout << "------------------------------------------" << endl;
		cout << "(1) para triangulo equilatero" << endl;
		cout << "(2) para retangulo" << endl;
		cout << "(3) para quadrado" << endl;
		cout << "(4) para circulo" << endl;
		cout << "(5) para piramide com base quadrangular" << endl;
		cout << "(6) para cubo" << endl;
		cout << "(7) para paralelepipedo" << endl;
		cout << "(8) para esfera" << endl;
		cout << "(0) para sair" << endl;
		cout << "Digite sua escolha: ";


		cin >> opcao;
		switch(opcao){

			case 1: 
			{
				float lado;
				cout << "Digite o tamanho o lado do triangulo: ";
				cin >> lado;
				figuras_planas = make_shared<geometria::Triangulo>(lado);
				cout << "Area do triangulo = " << figuras_planas->calcArea() << endl;
				cout << "Perimetro do triangulo = " << figuras_planas->calcPerimetro() << endl;
				break;
			}

			case 2: 
			{
				float base, altura;
				cout << "Digite o tamanho da base do retangulo: ";
				cin >> base;
				cout << "Digite o tamanho da altura do retangulo: ";
				cin >> altura;
				figuras_planas = make_shared<geometria::Retangulo>(base, altura);
				cout << "Area do retangulo = " << figuras_planas->calcArea() << endl;
				cout << "Perimetro do retangulo = " << figuras_planas->calcPerimetro() << endl;
				break;
			}

			case 3: 
			{
				float lado;
				cout << "Digite o tamanho o lado do quadrado: ";
				cin >> lado;
				figuras_planas = make_shared<geometria::Quadrado>(lado);
				cout << "Area do quadrado = " << figuras_planas->calcArea() << endl;
				cout << "Perimetro do quadrado = " << figuras_planas->calcPerimetro() << endl;
				break;
			}

			case 4:
			{
				float raio;
				cout << "Digite o tamanho do raio do circulo: ";
				cin >> raio;
				figuras_planas = make_shared<geometria::Circulo>(raio);
				cout << "Area do circulo = " << figuras_planas->calcArea() << endl;
				cout << "Perimetro do circulo = " << figuras_planas->calcPerimetro() << endl;
				break;
			}

			case 5: 
			{	
				float aresta, apotema, altura;
				cout << "Digite o tamanho da aresta da base da piramide: ";
				cin >> aresta;
				cout << "Digite o tamanho do apotema das faces laterais da piramide: ";
				cin >> apotema;
				cout << "Digite o tamanho da altura da piramide: ";
				cin >> altura;
				figuras_espaciais = make_shared<geometria::Piramide>(aresta, apotema, altura);
				cout << "Area da piramide = " << figuras_espaciais->calcArea() << endl;
				cout << "Volume da piramide = " << figuras_espaciais->calcVolume() << endl;
				break;
			}

			case 6:
			{
				float aresta;
				cout << "Digite o tamanho da aresta do cubo: ";
				cin >> aresta;
				figuras_espaciais = make_shared<geometria::Cubo>(aresta);
				cout << "Area do cubo = " << figuras_espaciais->calcArea() << endl;
				cout << "Volume do cubo = " << figuras_espaciais->calcVolume() << endl;
				break;
			}

			case 7:
			{	
				float aresta1, aresta2, aresta3;
				cout << "Digite o tamanho da aresta1 do paralelepipedo: ";
				cin >> aresta1;
				cout << "Digite o tamanho da aresta2 do paralelepipedo: ";
				cin >> aresta2;
				cout << "Digite o tamanho da aresta3 do paralelepipedo: ";
				cin >> aresta3;
				figuras_espaciais = make_shared<geometria::Paralelepipedo>(aresta1, aresta2, aresta3);
				cout << "Area do paralelepipedo = " << figuras_espaciais->calcArea() << endl;
				cout << "Volume do paralelepipedo = " << figuras_espaciais->calcVolume() << endl;
				break;
			}
			case 8:
			{
				float raio;
				cout << "Digite o tamanho do raio da Esfera: ";
				cin >> raio;
				figuras_espaciais = make_shared<geometria::Esfera>(raio);
				cout << "Area da esfera = " << figuras_espaciais-> calcArea() << endl;
				cout << "Volume da esfera = " << figuras_espaciais-> calcVolume() << endl;
				break;
			}

			case 0:
				return 0;

			default:
				cout << endl;
				cout << "Valor invalido!!" << endl;
			break;
		}
	} while(opcao != 0);
}