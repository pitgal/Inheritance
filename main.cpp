#include "lamp.h"
  
int main() {
	BigLamp lampa;
	Switch wlacznik(lampa);
	wlacznik.Toggle();
	wlacznik.Toggle();
 
	return 0;
}