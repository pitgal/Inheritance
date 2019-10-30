#include "lamp.h"
  
int main() {
	BigLamp lampa;
	Switch wlacznik(lampa);
	wlacznik.Toggle();
	wlacznik.Toggle();

	Lamp lampka;
	Switch wlacznik2(lampka);
	wlacznik2.Toggle();
	wlacznik2.Toggle();	
	return 0;
}