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
	for (size_t i = 0; i < tablica.size(); i++)
	{
		cout << tablica[i] << endl;
	}

    return EXIT_SUCCESS;
}