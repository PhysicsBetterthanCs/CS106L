#include <string>

class Car {
 public:
  Car(std::string make, std::string model, int year, int mileage) 
	  : _make(make), _model(model), _year(year), _mileage(mileage) {}

  std::string GetMake();
  std::string GetModel();
  int GetYear();
  int GetMileage();

  void Drive(int distance);

  void DisplayInfo();

 private:
  std::string _make;
  std::string _model;
  int _year;
  int _mileage;
};
