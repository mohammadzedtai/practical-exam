#include <iostream>
using namespace std;

class Vehicle
{
private:
    string model;
    float speed;

public:
    void setDetails(string m, float s)
    {
        model = m;
        speed = s;
    }

    string getModel()
    {
        return model;
    }

    float getSpeed()
    {
        return speed;
    }

    float timeForDistance(float distance)
    {
        return distance / speed;
    }
};

class Car : public Vehicle
{
public:
    float calculateTime(float distance)
    {
        return timeForDistance(distance);
    }
};

class Bike : public Vehicle
{
public:
    float calculateTime(float distance)
    {
        return timeForDistance(distance);
    }
};

int main()
{
    Car c;
    Bike b;
    string carModel, bikeModel;
    float carSpeed, bikeSpeed, distance;

    cout << "\n|-----Car-----|\n";

    cout << "Enter Car Model: ";
    cin >> carModel;
    cout << "Enter Car Speed (km/h): ";
    cin >> carSpeed;
    c.setDetails(carModel, carSpeed);

    cout << "\n|-----Bike-----|\n";

    cout << "Enter Bike Model: ";
    cin >> bikeModel;
    cout << "Enter Bike Speed (km/h): ";
    cin >> bikeSpeed;
    b.setDetails(bikeModel, bikeSpeed);

    cout << "\n|-----Speed-----|\n";

    cout << "Enter Distance to Travel (in km): ";
    cin >> distance;

    cout << "\n--- Travel Time ---\n";
    cout << "Car (" << c.getModel() << ") will take: " << c.calculateTime(distance) << " hours\n";
    cout << "Bike (" << b.getModel() << ") will take: " << b.calculateTime(distance) << " hours\n";

    return 0;
}
