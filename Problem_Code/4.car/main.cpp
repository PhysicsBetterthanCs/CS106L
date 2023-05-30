#include "car.h"

int main() {
  Car car("Toyota", "Camry", 2020, 5000);

  car.Drive(200);
  car.DisplayInfo();

  return 0;
}