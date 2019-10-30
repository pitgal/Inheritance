#include "lamp.h"
#include <memory>
#include <iostream>

int main() {
  {
		std::unique_ptr<Lamp> lampa = std::make_unique<BigLamp>();
		Switch wlacznik(*lampa);
		wlacznik.Toggle();
		wlacznik.Toggle();
	}
	std::cout << "\n";
	{
	  std::unique_ptr<Lamp> lampka = std::make_unique<Lamp>();
		Switch wlacznik2(*lampka);
		wlacznik2.Toggle();
		wlacznik2.Toggle();	
	}

	return 0;
}