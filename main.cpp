#include<iostream>

using namespace std;

int main()
{
	cout.precision(0);
	int dinheiro, notas;
	cin >> dinheiro;
	cout << dinheiro << endl;
	notas = dinheiro/100;
	cout << fixed << notas << " nota(s) de R$ 100,00" << endl;
	dinheiro = dinheiro - (notas * 100);
	notas = dinheiro / 50;
	cout << fixed << notas << " nota(s) de R$ 50,00" << endl;
	dinheiro = dinheiro - (notas * 50);
	notas = dinheiro / 20;
	cout << fixed << notas << " nota(s) de R$ 20,00" << endl;
	dinheiro = dinheiro - (notas * 20);
	notas = dinheiro / 10;
	cout << fixed << notas << " nota(s) de R$ 10,00" << endl;
	dinheiro = dinheiro - (notas * 10);
	notas = dinheiro / 5;
	cout << fixed << notas << " nota(s) de R$ 5,00" << endl;
	dinheiro = dinheiro - (notas * 5);
	notas = dinheiro / 2;
	cout << fixed << notas << " nota(s) de R$ 2,00" << endl;
	dinheiro = dinheiro - (notas * 2);
	notas = dinheiro / 1;
	cout << fixed << notas << " nota(s) de R$ 1,00" << endl;
	return 0;
}
