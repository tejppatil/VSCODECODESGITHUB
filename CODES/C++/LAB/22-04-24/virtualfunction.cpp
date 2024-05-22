//Write a Program to illustrate the use of virtual functions in class. 
#include <iostream>
class ElectronicDevice 
{
    public:
    virtual void powerOn() 
    {
        std::cout << "Generic device powering on." <<std::endl;
    }
    virtual void powerOff() 
    {
        std::cout << "Generic device powering off." <<std::endl;
    }
    virtual void checkBatteryStatus() 
    {
        std::cout << "Generic battery status: Unknown" <<std::endl;
    }
};
class Smartphone : public ElectronicDevice 
{
    public:
    void powerOn() override 
    {
        std::cout << "Smartphone is booting up." <<std::endl;
    }
    void powerOff() override 
    {
        std::cout << "Smartphone is shutting down." <<std::endl;
    }
    void checkBatteryStatus() override 
    {
        std::cout << "Smartphone battery status: 70%" <<std::endl;
    }
};
class Tablet : public ElectronicDevice 
{
    public:
    void powerOn() override 
    {
        std::cout << "Tablet is starting." << std::endl;
    }
    void powerOff() override 
    {
        std::cout << "Tablet is powering off." <<std::endl;
    }
    void checkBatteryStatus() override 
    {
        std::cout << "Tablet battery status: 50%"<<std::endl;
    }
};
int main() 
{
    ElectronicDevice* myDevice1 = new Smartphone();
    ElectronicDevice* myDevice2 = new Tablet();
    myDevice1->powerOn(); // Calls Smartphone's powerOn()
    myDevice1->checkBatteryStatus(); // Calls Smartphone's checkBatteryStatus()
    myDevice1->powerOff(); // Calls Smartphone's powerOff()
    myDevice2->powerOn(); // Calls Tablet's powerOn()
    myDevice2->checkBatteryStatus(); // Calls Tablet's checkBatteryStatus()
    myDevice2->powerOff(); // Calls Tablet's powerOff()
    delete myDevice1;
    delete myDevice2;
    return 0;
}