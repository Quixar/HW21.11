#include <iostream>
#include <ctime>

using namespace std;

struct Device {
    string deviceType;
    string name;
    string model;
    string brand;
    int warrantyPeriod;
    double price;
    string saleDate;
};

void fillDeviceInfo(Device& device) {
    cout << "Enter the type of device: ";
    cin >> device.deviceType;

    cout << "Enter the name of the device: ";
    cin >> device.name;

    cout << "Enter the model of the device: ";
    cin >> device.model;

    cout << "Enter the brand of the device: ";
    cin >> device.brand;

    cout << "Enter the warranty period (in months): ";
    cin >> device.warrantyPeriod;

    cout << "Enter the price of the device: ";
    cin >> device.price;

    cout << "Enter the sale date (in the format YYYY-MM-DD): ";
    cin >> device.saleDate;
}

void showDeviceInfo(const Device& device) {
    cout << "Device Type: " << device.deviceType << '\n';
    cout << "Device Name: " << device.name << '\n';
    cout << "Device Model: " << device.model << '\n';
    cout << "Device Brand: " << device.brand << '\n';
    cout << "Warranty Period (in months): " << device.warrantyPeriod << '\n';
    cout << "Price: " << device.price << " USD" << '\n';
    cout << "Sale Date: " << device.saleDate << '\n';
}

int main() {
    Device myDevice;

    cout << "Please enter information about the device:\n";
    fillDeviceInfo(myDevice);

    cout << "\nDevice Information:\n";
    showDeviceInfo(myDevice);

    return 0;
}