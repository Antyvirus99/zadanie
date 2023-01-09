#include <stdio.h>
#include <stdlib.h>
int licznik(unsigned long long *zmienna)
{
	int wartosc = 0;
	unsigned long long temp = 0;
	for (int i = 0;i < 4;i++)
	{
		temp = *zmienna;
		do {
			if (temp % 2) wartosc++;
			temp = temp >> 1;
		} while (temp);
		zmienna++;
	}
	
	return wartosc;
}
int main()
{
	//symulacja slowa 256bit
	unsigned long long slowo[4];
	slowo[0] = 0xffffffffffffffff;
	slowo[1] = 0xbbbbbbbbbbbbbbbb;
	slowo[2] = 0x9999999999999999;
	slowo[3] = 0x4444444444444444;

	int wartosc = 0;
	wartosc = licznik(slowo);
	printf("Liczba jedynek %d\n",wartosc);
	return 0;
}
