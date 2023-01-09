#include <stdio.h>
#include <stdlib.h>
int licznik(unsigned long long zmienna)
{
	int wartosc = 0;
	do {
		if (zmienna % 2) wartosc++;
		zmienna = zmienna >>1;
	} while (zmienna);
	return wartosc;
}
int main()
{
	unsigned long long slowo = 444;
	int wartosc = 0;
	wartosc = licznik(slowo);
	printf("Liczba %llu liczba jedynek %d\n", slowo, wartosc);
	return 0;
}