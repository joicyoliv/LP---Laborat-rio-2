/**
* @file     main.cpp
* @brief 	Arquivo fonte para execução do projeto
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @since    21/04/2018
* @date     22/04/2018
*/

#include <iostream>
#include <string.h>
#include <iomanip>

#include "circulo.h"
#include "cubo.h"
#include "esfera.h"
#include "paralelepipedo.h"
#include "piramide.h"
#include "quadrado.h"
#include "retangulo.h"
#include "triangulo.h"

int main(int argc, char const *argv[])
{
	
		if ( strcmp(argv[1], "triangulo") == 0 && argv[2] > 0 && argv[3] > 0)
		{	
			float base = std::stod(argv[2]);
			float altura = std::stod(argv[3]);

			Triangulo triangulo(base, altura);
			std::cout << "Area do " << argv[1] << ": " << triangulo.areaTriangulo( base, altura ) << std::endl;
			std::cout << "Perimetro do " << argv[1] << ": " << triangulo.perimetroTriangulo( base ) << std::endl;
		}
		else if ( strcmp(argv[1], "retangulo") == 0  && argv[2] > 0 && argv[3] > 0)
		{	
			float base = std::stod(argv[2]);
			float altura = std::stod(argv[3]);

			Retangulo retangulo(base, altura);
			std::cout << "Area do " << argv[1] << ": " << retangulo.areaRetangulo( base, altura ) << std::endl;
			std::cout << "Perimetro do " << argv[1] << ": " << retangulo.perimetroRetangulo( base, altura ) << std::endl;
		}
		else if (strcmp(argv[1], "quadrado") == 0  && argv[2] > 0)
		{	
			float lado = std::stod(argv[2]);
			
			Quadrado quadrado(lado );
			std::cout << "Area do " << argv[1] << ": " << quadrado.areaQuadrado( lado ) << std::endl;
			std::cout << "Perimetro do " << argv[1] << ": " << quadrado.perimetroQuadrado( lado ) << std::endl;
		}

		else if (strcmp(argv[1], "circulo") == 0  && argv[2] > 0)
		{	
			float raio = std::stod(argv[2]);
			
			Circulo circulo(raio);
			std::cout << "Area do " << argv[1] << ": " << circulo.areaCirculo( raio ) << std::endl;
			std::cout << "Perimetro do " << argv[1] << ": " << circulo.perimetroCirculo( raio ) << std::endl;
		}

		else if (strcmp(argv[1], "piramide") == 0  && argv[2] > 0 && argv[3] > 0)
		{	
			float base = std::stod(argv[2]);
			float altura = std::stod(argv[3]);

			Piramide piramide(base, altura);
			std::cout << "Area da " << argv[1] << ": " << piramide.areaPiramide( base, altura) << std::endl;
			std::cout << "Volume da " << argv[1] << ": " << piramide.volumePiramide( base, altura ) << std::endl;
		}

		else if (strcmp(argv[1], "cubo") == 0  && argv[2] > 0)
		{	
			float aresta = std::stod(argv[2]);

			Cubo cubo(aresta );
			std::cout << "Area do " << argv[1] << ": " << cubo.areaCubo( aresta ) << std::endl;
			std::cout << "Volume do " << argv[1] << ": " << cubo.volumeCubo( aresta ) << std::endl;
		}

		else if (strcmp(argv[1], "paralelepipedo") == 0  && argv[2] > 0 && argv[3] > 0 && argv[4])
		{	
			float aresta1 = std::stod(argv[2]);
			float aresta2 = std::stod(argv[3]);
			float aresta3 = std::stod(argv[4]);
			

			Paralelepipedo paralelepipedo(aresta1, aresta2, aresta3);
			std::cout << "Area do " << argv[1] << ": " << paralelepipedo.areaParalelepipedo( aresta1, aresta2, aresta3 ) << std::endl;
			std::cout << "Volume do " << argv[1] << ": " << paralelepipedo.volumeParalelepipedo( aresta1, aresta2, aresta3 ) << std::endl;
		}

		else if (strcmp(argv[1], "esfera") == 0  && argv[2] > 0 )
		{	
			float raio = std::stod(argv[2]);

			Esfera esfera(raio );
			std::cout << "Area da " << argv[1] << ": " << esfera.areaEsfera( raio ) << std::endl;
			std::cout << "Volume da " << argv[1] << ": " << esfera.volumeEsfera( raio ) << std::endl;
		}

		else{
			std::cout << "Entrada inválida, por favor digite uma entrada válida" << std::endl;
			std::cout << "Pamentros para Calculadora de Geometria Plana e Espacial" << std::endl
					<< "Triangulo equilatero 			>> (triangulo valorBase valorAltura)"  << std::endl
					<< "Retangulo            			>> (retangulo valorBase valorAltura)" << std::endl
					<< "Quadrado             			>> (quadrado valorLado)" << std::endl
					<< "Circulo              			>> (circulo valorRaio)" << std::endl
					<< "Piramide com base quadrangular 	>> (piramide valorBase valorAltura)" << std::endl
					<< "Cubo 				 			>> (Cubo valorAresta)" << std::endl
					<< "Paralelepipedo       			>> (paralelepipedo valorAresta1 valorAresta2 valorAresta3)" << std::endl
					<< "Esfera              			>> (esfera valorRaio)" << std::endl
					<< "Digite novamente: ";
		}
	
	
	return 0;
}