#include <iostream>
#include <string>

using namespace std;

class Company{
    private:
    
    int WorksCount, CarCount;
    string name;

    public:
    
    void SetWorksCount(int WorksCount){this->WorksCount = WorksCount;}
    void SetCarCount(int CarCount){this->CarCount = CarCount;}
    
    int GetCarCount(){return CarCount;}
    string GetName(){return name;}
    int GetWorksCount(){return CarCount;}
    
    Company(string name, int WorksCount, int CarCount):name(name), WorksCount(WorksCount), CarCount(CarCount){}
  //Company(string name_, int WorksCount_, int CarCount_){name = name_; WorksCount = WorksCount_; CarCount = CarCount_;}
};

class Employee{
    private:

    string name;
    int Cabinet, RabCount;

    public:
    Company* company;
    
    void SetCabinet(int Cabinet){this->Cabinet = Cabinet;}
    void SetRabCount(int RabCount){this->RabCount = RabCount;}
    
    int GetRabCount(){return RabCount;}
    int GetCabinet(){return Cabinet;}
    string GetName(){return name;}
    
    Employee(string name, int Cabinet, int RabCount):name(name), Cabinet(Cabinet), RabCount(RabCount){}
  //Employee(string name_, int Cabinet_, int RabCount_){name = name_; Cabinet = Cabinet_; RabCount = RabCount_;}
};

class Vehicle{
    private:

    string registration_number;
    int capacity;
    bool freea;

    public:
    Company* company;
    Employee* employee;
    
    void Setcapacity(int capacity){this->capacity = capacity;}
    void Setfreea(bool freea){this->freea = freea;}
    
    bool GetFreea(){return freea;}
    int GetCapacity(){return capacity;}
    string GetRegistrationNumber(){return registration_number;}
    
    Vehicle(string registration_number):registration_number(registration_number){}
    Vehicle(string registration_number, int capacity):registration_number(registration_number), capacity(capacity){}
    Vehicle(string registration_number, int capacity, bool freea):registration_number(registration_number), capacity(capacity), freea(freea){}
  //Company(string registration_number_, int capacity_, bool freea_){registration_number = registration_number_; capacity = capacity_; freea = freea_;}
};

class Truck:public Vehicle{
    private:

    int mass, toplivo, hight;

    public:
    void SetMass(int mass){this->mass = mass;}
    void SetToplivo(int toplivo){this->toplivo = toplivo;}
    void SetHight(int hight){this->hight = hight;}
    
    int GetMass(){return mass;}
    int GetToplivo(){return toplivo;}
    int GetHight(){return hight;}
    
    Truck(string registration_number, int capacity, bool freea, int mass): Vehicle(registration_number, capacity, freea)
    {
        this->mass = mass;
    }
    
    Truck(string registration_number, int capacity, bool freea, int mass, int toplivo): Vehicle(registration_number, capacity, freea)
    {
        this->mass = mass;
        this->toplivo = toplivo;
    }
    
    Truck(string registration_number, int capacity, bool freea, int mass, int toplivo, int hight): Vehicle(registration_number, capacity, freea)
    {
        this->mass = mass;
        this->toplivo = toplivo;
        this->hight = hight;
    }
    

};

class Car:public Vehicle{
    private:

    string transmission, color;
    int speed;

    public:
    void SetSpeed(int speed){this->speed = speed;}
    void SetTransmission(string transmission){this->transmission = transmission;}
    void SetColor(string color){this->color = color;}
    
    string GetColor(){return color;}
    string GetTransmission(){return transmission;}
    int GetSpeed(){return speed;}

    Car(string registration_number, int capacity, bool freea, string transmission): Vehicle(registration_number, capacity, freea)
    {
        this->transmission = transmission;
    }
    
    Car(string registration_number, int capacity, bool freea, string transmission, string color): Vehicle(registration_number, capacity, freea)
    {
        this->transmission = transmission;
        this->color = color;
    }
    
    Car(string registration_number, int capacity, bool freea, string transmission, string color, int speed): Vehicle(registration_number, capacity, freea)
    {
        this->transmission = transmission;
        this->color = color;
        this->speed = speed;
    }

};

int main(){}
