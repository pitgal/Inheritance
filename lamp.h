#pragma once

struct ISwitchable {
	virtual void On() = 0;
	virtual void Off() = 0;
};
 
class Switch {
 public:
  Switch(ISwitchable& switchable) : m_switchable(switchable) {}
	void Toggle();

 private:
  bool m_state = false;
  ISwitchable& m_switchable; 
};
 
class Lamp :public ISwitchable {
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

 private:
 	bool m_lighting = false;
};
 
class BigLamp :public Lamp {
  virtual void Print() const override;
};