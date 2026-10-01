#include <iostream>
using namespace std;

class Car {
public:
void start() {

cout << "Car started." <<endl;

} 

};

class Driver {
public:
void drive( Car& car) {

     cout << "Driver is driving." << endl;

car.start();

} 

 };
int main() {

Car car;
Driver driver;
driver.drive(car);
return 0;
}