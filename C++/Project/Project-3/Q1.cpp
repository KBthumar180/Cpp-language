#include <iostream>
using namespace std;

class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;
    static int totalVehicles;

public:
    Vehicle() {
        totalVehicles++;
    }

    Vehicle(int id, string mfg, string mdl, int y) {
        vehicleID = id;
        manufacturer = mfg;
        model = mdl;
        year = y;
        totalVehicles++;
    }

    virtual void display() {
        cout << "ID: " << vehicleID << "\nManufacturer: " << manufacturer
             << "\nModel: " << model << "\nYear: " << year << endl;
    }

    int getID() { return vehicleID; }

    static int getTotalVehicles() { return totalVehicles; }

    virtual ~Vehicle() {
        totalVehicles--;
    }
};
int Vehicle::totalVehicles = 0;


class Car : public Vehicle {
protected:
    string fuelType;

public:
    Car(int id, string mfg, string mdl, int y, string fuel)
        : Vehicle(id, mfg, mdl, y), fuelType(fuel) {}

    void display() override {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }
};


class ElectricCar : public Car {
protected:
    int batteryCapacity;

public:
    ElectricCar(int id, string mfg, string mdl, int y, string fuel, int battery)
        : Car(id, mfg, mdl, y, fuel), batteryCapacity(battery) {}

    void display() override {
        Car::display();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};


class SportsCar : public ElectricCar {
    int topSpeed;

public:
    SportsCar(int id, string mfg, string mdl, int y, string fuel, int battery, int speed)
        : ElectricCar(id, mfg, mdl, y, fuel, battery), topSpeed(speed) {}

    void display() override {
        ElectricCar::display();
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};


class Aircraft {
protected:
    int flightRange;

public:
    Aircraft(int range) {
        flightRange = range;
    }

    void showAircraftDetails() {
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
};


class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar(int id, string mfg, string mdl, int y, string fuel, int range)
        : Car(id, mfg, mdl, y, fuel), Aircraft(range) {}

    void display() {
        Car::display();
        Aircraft::showAircraftDetails();
    }
};

class Sedan : public Car {
public:
    Sedan(int id, string mfg, string mdl, int y, string fuel)
        : Car(id, mfg, mdl, y, fuel) {}

    void display() override {
        cout << "Vehicle Type: Sedan" << endl;
        Car::display();
    }
};

class SUV : public Car {
public:
    SUV(int id, string mfg, string mdl, int y, string fuel)
        : Car(id, mfg, mdl, y, fuel) {}

    void display() override {
        cout << "Vehicle Type: SUV" << endl;
        Car::display();
    }
};

class VehicleRegistry {
    Vehicle* vehicles[20];
    int count;

public:
    VehicleRegistry() {
        count = 0;
    }

    void addVehicle(Vehicle* v) {
        vehicles[count++] = v;
    }

    void displayAll() {
        for (int i = 0; i < count; i++) {
            cout << "\n--- Vehicle " << i + 1 << " ---" << endl;
            vehicles[i]->display();
        }
    }

    void searchByID(int id) {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getID() == id) {
                cout << "Vehicle found:\n";
                vehicles[i]->display();
                return;
            }
        }
        cout << "Vehicle not found.\n";
    }

    ~VehicleRegistry() {
        for (int i = 0; i < count; i++) {
            delete vehicles[i];
        }
    }
};


main() {
    VehicleRegistry registry;
    int choice;

    do {
        cout << "\n--- Vehicle Registry Menu ---\n";
        cout << "1. Add Sedan\n2. Add SUV\n3. Add Sports Car\n4. Add Flying Car\n";
        cout << "5. View All Vehicles\n6. Search Vehicle by ID\n7. Total Vehicles\n8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, year;
            string mfg, mdl, fuel;
            cout << "Enter ID, Manufacturer, Model, Year, Fuel Type:\n";
            cin >> id >> mfg >> mdl >> year >> fuel;
            registry.addVehicle(new Sedan(id, mfg, mdl, year, fuel));
        }
        else if (choice == 2) {
            int id, year;
            string mfg, mdl, fuel;
            cout << "Enter ID, Manufacturer, Model, Year, Fuel Type:\n";
            cin >> id >> mfg >> mdl >> year >> fuel;
            registry.addVehicle(new SUV(id, mfg, mdl, year, fuel));
        }
        else if (choice == 3) {
            int id, year, battery, speed;
            string mfg, mdl, fuel;
            cout << "Enter ID, Manufacturer, Model, Year, Fuel Type, Battery Capacity, Top Speed:\n";
            cin >> id >> mfg >> mdl >> year >> fuel >> battery >> speed;
            registry.addVehicle(new SportsCar(id, mfg, mdl, year, fuel, battery, speed));
        }
        else if (choice == 4) {
            int id, year, range;
            string mfg, mdl, fuel;
            cout << "Enter ID, Manufacturer, Model, Year, Fuel Type, Flight Range:\n";
            cin >> id >> mfg >> mdl >> year >> fuel >> range;
            registry.addVehicle(new FlyingCar(id, mfg, mdl, year, fuel, range));
        }
        else if (choice == 5) {
            registry.displayAll();
        }
        else if (choice == 6) {
            int id;
            cout << "Enter Vehicle ID to search: ";
            cin >> id;
            registry.searchByID(id);
        }
        else if (choice == 7) {
            cout << "Total Vehicles Registered: " << Vehicle::getTotalVehicles() << endl;
        }
        else if (choice != 8) {
            cout << "Invalid choice.\n";
        }

    } while (choice != 8);

}

