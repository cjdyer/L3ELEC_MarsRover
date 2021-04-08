#pragma once

#include <arduino.h>

enum Direction : bool
{
  Forwards = true,
  Backwards = false,
};
enum BrakeMode : bool
{
  Brake = true,
  Coast = false,
};

class Motor
{
  public:
    Motor(int PinOne, int PinTwo, int PwmPin);

      void drive(char speed);
      void stop(BrakeMode mode = Coast);

  private:
    int pinOne, pinTwo, pwmPin;

    void setSpeed(byte speed);
    void setDirection(Direction dir);
};
