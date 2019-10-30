#pragma once

struct ISwitchable {
	virtual void On() = 0;
	virtual void Off() = 0;
  virtual ~ISwitchable() {}
};