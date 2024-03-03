#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

//Task1

class Circle 
{
protected:
	double radius;
public:
	Circle(double r) : radius(r) {}
	double getAreaCircle() 
	{ 
		return Pi * pow(radius, 2); 
	}
};

class Square 
{
protected:
	double side;
public:
	Square(double s) : side(s) {}
	double getAreaSquare() 
	{ 
		return pow(side, 2); 
	}
};

class InscribedCircle : public Circle, public Square 
{
public:
	InscribedCircle(double s) : Square(s), Circle(s / 2) {}
	void printAreas() {
		cout << "Area of the circle: " << getAreaCircle() << endl;
		cout << "Area of the square: " << getAreaSquare() << endl;
	}
};

//Task2
class wheel
{
public:
	void Wheel()
	{
		cout << "Wheel" << endl;
	}
};

class engine
{
public:
	void Engine()
	{
		cout << "Engine" << endl;
	}
};

class door
{
public:
	void Door()
	{
		cout << "Door" << endl;
	}
};

class car : public door,public engine,public wheel
{
public:
	void Car()
	{
		cout << "The machine consists of: " << endl;
	}
};


int main()
{
	//Task1
	InscribedCircle obj(10.0);
	obj.printAreas();

	//Task2
	car Car;
	Car.Car();
	Car.Door();
	Car.Engine();
	Car.Wheel();
	
}
