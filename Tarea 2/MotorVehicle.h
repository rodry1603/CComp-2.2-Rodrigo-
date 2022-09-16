#include <iostream>
#include <string>
using namespace std;
class MotorVehicle
{
private:
std::string make;
std::string fuelType;
std::string colors;
int yearOfManufact;
int engineCapacity;

public:
MotorVehicle(std::string marca, std::string fuel, std::string color, int year, int engineC)
: make{marca}, fuelType{fuel}, colors{color}, yearOfManufact{year}, engineCapacity{engineC}{
    
}

void setMake(std::string marca){
make=marca;
}

std::string getMake() const{
return make;
}

void setFuelType(std::string fuel){
    fuelType=fuel;
}

std::string getFuelType()const{
    return fuelType;
}

void setColors(std::string color){
    colors=color;
}

std::string getColors()const{
    return colors;
}

void setyearOfManufact(int year ){
    yearOfManufact=year;
}

int getyearOfManufact()const{
    return yearOfManufact;
}

void setengineCapacity(int engineC){
    engineCapacity=engineC;
}

int getengineCapacity()const{
    return engineCapacity;
}
void displayCarDetails(){
cout<<"make:"<<getMake()<<'\n';
cout<<"Type of fuel:"<<getFuelType()<<'\n';
cout << "Color:"<<getColors()<<'\n';
cout<< "Year of manufaction:"<<getyearOfManufact()<<'\n';
cout<< "Engine capacity:"<<getengineCapacity()<<'\n';
}

};