#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string model;
    float speed;

public:
    void setDetails(string m, float s)
    {
        model = m;
        speed = s;
    }

    virtual void displayDetails()
    {
        cout << "Vehicle Model: " << model << ", Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "Car Model: " << model << ", Speed: " << speed << " km/h" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "Bike Model: " << model << ", Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Vehicle *vehicles[2];
    Car c;
    Bike b;
    string carModel, bikeModel;
    float carSpeed, bikeSpeed;

    cout << "\n--- Car ---\n";

    cout << "Enter Car Model: ";
    cin >> carModel;
    cout << "Enter Car Speed (in km/h): ";
    cin >> carSpeed;
    c.setDetails(carModel, carSpeed);

    cout << "\n--- Bike ---\n";

    cout << "Enter Bike Model: ";
    cin >> bikeModel;
    cout << "Enter Bike Speed (in km/h): ";
    cin >> bikeSpeed;
    b.setDetails(bikeModel, bikeSpeed);

    vehicles[0] = &c;
    vehicles[1] = &b;

    cout << "\n--- Vehicle Details ---\n";
    for (int i = 0; i < 2; i++)
    {
        vehicles[i]->displayDetails();
    }

    return 0;
}
