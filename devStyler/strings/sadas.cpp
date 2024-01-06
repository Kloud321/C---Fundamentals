//
// Created by Katya Daskalova on 1/4/24.
//

Car::Car(string model, int year, string color, string fuel, string vin, string transmission, string plate) {
    setModel(model);
    setYear(year);
    this->color = color;
    this->fuel = fuel;
    this->vin = vin;
    this->transmission = transmission;
    this->plate = plate;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setYear(int year)
{
    if (year > 1970 && year < 2024) {
        this->year = year;
    } else {
        this->year = 0;
        cout << "Invalid year. Year must be between 1970 and 2024 " << endl;
    }
}

void Car::displayMessage()
{
    cout << "model: " << this->model
         << " year: " << this->year
         << " color: " << this->color
         << " fuel: " << this->fuel
         << " vin: " << this->vin
         << " transmission: " << this->transmission
         << " plate: " << this->plate
         << endl;
}



//////////////////////////////////


//
// Created by Katya Daskalova on 1/4/24.
//

#ifndef CPPCLASSES_CAR_H
#define CPPCLASSES_CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    Car(string, int, string, string, string, string, string);
    void setModel(string);
    string getModel();
    void setYear(int);
    void displayMessage();

private:
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;
};

#endif //CPPCLASSES_CAR_H


//////////////////////



using namespace std;


int main() {

    Car firstCar("citroen", 2020, "green", "diesel", "d3r42hjrh2r", "auto", "CA 47474");
    Car secondCar("honda", 2022, "blue", "electric", "374234rrwtt", "auto", "CA 34556");
    firstCar.displayMessage();
    secondCar.displayMessage();
    return 0;
}