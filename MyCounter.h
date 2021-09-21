#ifndef _MYCOUNTER_H_
#define _MYCOUNTER_H_

#include <arduino.h>

class MyCounter{
  public: // public method
  MyCounter(const int btnPin,
            const int ledPin,
            const int timeSecond = 10,
            const bool btnPinActive = LOW,
            const bool ledPinActive = LOW);
  ~MyCounter();

  // set time second
  void setTimeSecond(const int timeSecond);
  // loop 
  void loop();
  
  private: // private data
  int btnPin;
  int ledPin;
  int timeSecond;
  bool btnPinActive;
  bool ledPinActive;
  uint32_t cur;
  uint32_t _next;
};

#endif
