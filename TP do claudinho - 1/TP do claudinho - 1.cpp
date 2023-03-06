#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - FATEC" << endl;
	cout << "--------------------------" << endl;

	cout << "Entrada de Dados" << endl;
	cout << "--------------------------" << endl;
	string nome = "";
	int p1 = 0;
	int p2 = 0;
	int nota = 0;

	cout << "Média\n";
	cout << "Digite o seu nome: ";
	cin >> nome;
	cout << "Digite a nota da P1: ";
	cin >> p1;
	cout << "Digite a nota da P2: ";
	cin >> p2;
	nota = (p1 + p2)/2;
	if (nota < 6)
	{
		cout << "Reprovado. Infelizmente, voce pagou o pato! *quack*";
	}
	else
	{
		cout << "Aprovado. Voce nao pagou o pato! *quack*";
	}




}
