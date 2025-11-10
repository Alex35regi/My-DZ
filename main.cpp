#include<clocale>
#include<iostream>
#include <Windows.h>

int main()
{  
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Àëåêñàíäð\n";
	std::cout << 32 << "\n";

	return EXIT_SUCCESS;
}
