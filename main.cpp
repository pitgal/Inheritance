#include "lamp.h"
#include "switch.h"
#include <memory>
#include <iostream>

int main() {
  {
		std::unique_ptr<ISwitchable> lampa = std::make_unique<BigLamp>();
		Switch wlacznik(*lampa);
		wlacznik.Toggle();
		wlacznik.Toggle();
	}
	std::cout << "\n";
	{
	  std::unique_ptr<ISwitchable> lampka = std::make_unique<Lamp>();
		Switch wlacznik2(*lampka);
		wlacznik2.Toggle();
		wlacznik2.Toggle();	
	}

	return 0;
}