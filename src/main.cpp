#include "console.hpp"
#include <iostream>

int main()
{
	console::init();
	std::cout << console::doubly << console::fg(255, 0, 0) << "Hola áéíóúÁÉÍÓÚ\n" << console::reset;
	return 0;
}