#include "lamp.h"
#include <iostream>
using namespace std;

void Switch::Toggle() {
  if (m_state)
    m_switchable.Off();
  else 
    m_switchable.On();
  m_state = !m_state;  
}

void Lamp::Print() const {
  std::cout << "Lamp " << (IsLighting() ? "on" : "off") << endl;
}

bool Lamp::IsLighting() const { 
  return m_lighting;
};

void BigLamp::Print() const {
  Lamp::Print();
  cout << "BigLamp\n"; 
}	

