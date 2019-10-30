#pragma once
#include "switchable.h"
 
class Switch {
 public:
  Switch(ISwitchable& switchable) : m_switchable(switchable) {}
	void Toggle();

 private:
  bool m_state = false;
  ISwitchable& m_switchable; 
};