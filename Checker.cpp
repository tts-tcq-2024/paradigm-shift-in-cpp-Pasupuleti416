#include <assert.h>
#include <iostream>
using namespace std;

bool temperatureIsOk(float temperature);
bool socIsOk(float soc);
bool chargeIsOk(float chargeRate);
bool temperatureWarning(float temperature);
bool socWarning(float soc);
bool chargeWarning(float chargeRate);

bool temperatureWarning(float temperature)
{
    if(temperature == 2.25 || temperature == 42.25)
    {
            std::cout<<"temperature usage warning"<<endl;
            return true;
    }
    else
    {
          temperatureIsOk(float temperature);
    }
}

bool temperatureIsOk(float temperature)
{
    if(temperature < 0 || temperature > 45) 
    {
        cout << "Temperature out of range!\n";
        return false;
    }
    else
    {
        return true;
    }
}

bool socWarning(float soc)
{
    if(soc == 24 || soc == 76)
    {
        std::cout<<"soc usage warning"<<endl;
        return true;
    }
    else
    {
        socIsOk(float soc);
    }
}

bool socIsOk()
{
  if(soc < 20 || soc > 80) 
  {
       cout << "State of Charge out of range!\n";
       return false;
  }
  else
  {
       return true;
  }
}

bool chargeWarning(float chargeRate)
{
    if(chargeRate == 0.76)
    {
        cout<< "charge usage warning!\n";
    }

    else
    {
        chargeIsOk(float chargeRate);
    }
}

chargeIsOk(float chargeRate)
{
   if(chargeRate > 0.8) 
  {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  else
  {
       return true;
  } 
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return temperatureWarning(temperature);
  return socWarning(soc);
  return chargeWarning(chargeRate);
  return true;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
