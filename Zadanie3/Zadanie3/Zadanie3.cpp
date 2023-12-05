#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
	srand(time(NULL));

	vector <int> tablica;

	int rozmiar;

	cout << "Podaj rozmiar tablicy = "; cin >> rozmiar;

	for (size_t i = 0; i < rozmiar; i++)
	{
		int los = rand() % 100 + 1;
		tablica.push_back(los);
	}

	sort(tablica.begin(), tablica.end());

	vector <int>::iterator nazwa_iteratora = tablica.begin();

	for (; nazwa_iteratora != tablica.end(); nazwa_iteratora++)
	{
		cout << *nazwa_iteratora << endl;
	}

	return EXIT_SUCCESS;
}