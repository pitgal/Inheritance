#include "switch.h"

void Switch::Toggle() {
  if (m_state)
    m_switchable.Off();
  else 
    m_switchable.On();
  m_state = !m_state;  
}