#include <assert.h>
#include <iostream>
using namespace std;

bool temperatureIsOk(float temperature);
bool socIsOk(float soc);
bool chargeIsOk(float chargeRate);

bool temperatureIsOk(float temperature)
{
if(temperature < 0 || temperature > 45) 
{
    cout << "Temperature out of range!\n";
    return false;
  }
}

bool socIsOk(float soc)
{
  if(soc < 20 || soc > 80) 
  {
    cout << "State of Charge out of range!\n";
    return false;
  }
}

bool chargeIsOk(float chargeRate)
{
  if(chargeRate > 0.8) 
  {
    cout << "Charge Rate out of range!\n";
    return false;
  }
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return temperatureIsOk(temperature);
  return socIsOk(soc);
  return chargeIsOk(chargeRate);
  /*if(temperature < 0 || temperature > 45) {
    cout << "Temperature out of range!\n";
    return false;
  } else if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  } else if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }*/
  return true;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
