#include <iostream>
#include "Drone/Drone.h"
#include "Drone/Config.h"




//string messageType[2] = {"SYSTEM","CONTROL", "CONFIG"};


int main()
{
  Drone *d = new Drone();
  d->start();
}
