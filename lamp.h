#pragma once

struct ISwitchable {
	virtual void On() = 0;
	virtual void Off() = 0;
};
 
class Switch {
  bool m_state = false;
  ISwitchable& m_switchable;
 
 public:
  Switch(ISwitchable& switchable) : m_switchable(switchable) {}
  
	void Toggle();
};
 
class Lamp :public ISwitchable {
	bool m_lighting = false;
 
 public:
  void On() override {
  	m_lighting = true;
  	Print();
  }
  void Off() override {
  	m_lighting = false;
  	Print();
  }
  virtual void Print() const;
  virtual bool IsLighting() const;
};
 
class BigLamp :public Lamp {
  virtual void Print() const override;
};