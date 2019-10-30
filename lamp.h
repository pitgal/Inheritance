#pragma once
#include "switchable.h"

class Lamp :public ISwitchable {
 public:
  Lamp();
  virtual ~Lamp() override;
  
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
 public:
  BigLamp();
  ~BigLamp() override; //destruktor jest wirtualny poniewa¿ klasa bazowa ma wirtualny destruktor
  virtual void Print() const override;
};