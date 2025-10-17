#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual float calculateArea() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float calculateArea() override
    {
        return M_PI * radius * radius;
    }

    void draw() override
    {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float calculateArea() override
    {
        return length * width;
    }

    void draw() override
    {
        cout << "Drawing Rectangle of " << length << " x " << width << endl;
    }
};

int main()
{
    Shape *shapes[2];
    float radius, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;
    shapes[0] = new Circle(radius);

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    shapes[1] = new Rectangle(length, width);

    cout << "\n--- Shape Details ---\n";
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calculateArea() << "\n";
    }

    delete shapes[0];
    delete shapes[1];

    return 0;
}
