/*System that manages different types of vehicles*/
#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    private:
        string brand;
        string model;
        string transmission;
        string type;
        int year;


    public:
        //Constructor
        Vehicle(string b, string m, string tr, string ty, int y) : brand(b), model(m), transmission(tr), type(ty), year(y) {}

        //Destructor
        virtual ~Vehicle(){
            cout << "Destroying Vehicle ... " << endl;
        }

        //Virtual method
        virtual void showInfo(){
            cout << "Brand : " << brand << endl;
            cout << "Model : " << model << endl;
            cout << "Transmission : " << transmission << endl;
            cout << "Type : " << type << endl;
            cout << "Year : " << year << endl;
        }
};

class Car : public Vehicle{
    private:
        int doors;
    public:
        //Constructor
        Car(string b, string m, string tr, string ty, int y, int d) : Vehicle(b ,m ,tr ,ty ,y), doors(d){}

        //Destructor
        ~Car(){
            cout << "Destroying Car ... " << endl;
        }

        //Override method
        void showInfo() override{
            Vehicle::showInfo();
            cout << "Doors: " << doors << endl;
        }
};

class Motorcycle : public Vehicle{
    private:
        bool sidecarOn;
    public:
        //Constructor
        Motorcycle(string b, string m, string tr, string ty, int y, bool so) : Vehicle(b ,m ,tr ,ty ,y), sidecarOn(so){}

        //Destructor
        ~Motorcycle(){
            cout << "Destroying motorcycle ... " << endl;
        }

        //Overrride method
        void showInfo() override{
            Vehicle::showInfo();
            cout << "Sidecar: " << (sidecarOn ? "Yes" : "No") << endl;
        }
};

int main(){
    Vehicle* vehicles[2];
    vehicles[0] = new Car("Toyota", "Corolla", "FWD", "Tourism", 2016, 5);
    vehicles[1] = new Motorcycle("Aprilia", "RSV4", "RWD", "Super Bike", 2024, false);

    for(int i = 0; i <= 2; i++){
        vehicles[i]->showInfo();
        delete vehicles[i]; //callback to destructor
    }

    return 0;   
}