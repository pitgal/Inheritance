#include <iostream>
using namespace std;
 
struct ISwitchable {
	virtual void On() = 0;
	virtual void Off() = 0;
};
 
class Switch {
  bool state = false;
  ISwitchable& switchable;
 
public:
  Switch(ISwitchable& _switchable) : switchable(_switchable) {}
  void Toggle() {
  	if (state)
  	  switchable.Off();
  	else 
  	  switchable.On();
 
  	state = !state;  
  }
};
 
class Lamp :public ISwitchable {
	bool lighting = false;
 
public:
  void On() override {
  	lighting = true;
  	Print();
  }
  void Off() override {
  	lighting = false;
  	Print();
  }
  virtual void Print() const {
  	std::cout << "Lamp " << (IsLighting() ? "on" : "off") << endl;
  }
  virtual bool IsLighting() const { 
  	return lighting;
  };
};
 
class BigLamp :public Lamp {
  virtual void Print() const override {
    Lamp::Print();
    cout << "BigLamp\n"; 
  }	
};

 
int main() {
	BigLamp lampa;
	Switch wlacznik(lampa);
	wlacznik.Toggle();
	wlacznik.Toggle();
 
	return 0;
}