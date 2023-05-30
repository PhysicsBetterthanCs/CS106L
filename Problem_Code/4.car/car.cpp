#include "car.h"
#include <iostream>


std::string Car::GetMake() { return _make; }

std::string Car::GetModel() { return _model; }

int Car::GetYear() { return _year; }

int Car::GetMileage() { return _mileage; }

void Car::Drive(int distance) { _mileage += distance; }

void Car::DisplayInfo() {
  std::cout << "Make: " << _make << std::endl;
  std::cout << "Model: " << _model << std::endl;
  std::cout << "Year: " << _year << std::endl;
  std::cout << "Mileage: " << _mileage << std::endl;
}
