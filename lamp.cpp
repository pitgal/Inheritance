#include "lamp.h"
#include <iostream>
using namespace std;

Lamp::Lamp() {
  cout << "Lamp::Lamp()\n"; 
}	

Lamp::~Lamp() {
  cout << "Lamp::~Lamp()\n"; 
}	

void Lamp::Print() const {
  std::cout << "Lamp " << (IsLighting() ? "on" : "off") << endl;
}

bool Lamp::IsLighting() const { 
  return m_lighting;
};

BigLamp::BigLamp() : Lamp() {
  cout << "BigLamp::BigLamp()\n"; 
}	

BigLamp::~BigLamp() {
  cout << "BigLamp::~BigLamp()\n"; 
}	

void BigLamp::Print() const {
  Lamp::Print();
  cout << "BigLamp\n"; 
}
