// MaorFrequencia.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <map>

long maiorFrequancia(int *vetor, long tamnaho) {
	std::map<long, long>  mapVetor;
	for (int i = 0; i < tamnaho; i++) {
		mapVetor[vetor[i]] += 1;
	}
	long maiorFrequencia = 0;
	long MenorNumero = 0;
	for (std::map<long, long>::iterator it = mapVetor.begin(); it != mapVetor.end(); ++it) {
		if (it->second > maiorFrequencia) {
			maiorFrequencia = it->second;
			MenorNumero = it->first;
		}
		if (it->second == maiorFrequencia) {
			if (it->first < MenorNumero) {
				MenorNumero = it->first;
			}
		}
	}
	return MenorNumero;
}

int main()
{
	int vetor[] = { 34, 31, 34, 77, 82 };
	int vetor2[] = { 22,101,102,101,102,525,88 };
	int vetor3[] = { 66 };
	int vetor4[] = { 14,14,2342,2342, 2342 };
	std::cout << maiorFrequancia(vetor, 5) << "\n";
	std::cout << maiorFrequancia(vetor2, 7) << "\n";
	std::cout << maiorFrequancia(vetor3, 1) << "\n";
	std::cout << maiorFrequancia(vetor4, 5) << "\n";
}

