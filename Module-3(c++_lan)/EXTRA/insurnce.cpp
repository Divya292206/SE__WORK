#include <iostream>
#include <string>
using namespace std;

// Function to generate price based on model year, condition, and insurance status
float generatePrice(int modelYear, string condition, string insuranceStatus) {
    float basePrice = 100000; // base price in rupees
    int currentYear = 2025;

    // Depreciation based on age
    int age = currentYear - modelYear;
    basePrice -= age * 5000;

    // Condition adjustment
    if (condition == "Good" || condition == "good")
        basePrice *= 1.0;
    else if (condition == "Medium" || condition == "medium")
        basePrice *= 0.8;
    else if (condition == "Poor" || condition == "poor")
        basePrice *= 0.6;
    else
        cout << "Invalid condition input.\n";

    // Insurance status adjustment
    if (insuranceStatus == "Expired" || insuranceStatus == "expired")
        basePrice -= 3000;

    if (basePrice < 10000)
        basePrice = 10000; // minimum price

    return basePrice;
}

int main() {
    string vehicleNo, rcBookNo, condition, insuranceStatus, company;
    int modelYear;
    char choice;

    do {
        // Input details
        cout << "\n--- Enter Bike Details ---\n";
        cout << "Vehicle No: ";
        cin >> vehicleNo;

        cout << "RC Book No: ";
        cin >> rcBookNo;

        cout << "Model Year: ";
        cin >> modelYear;

        cout << "Vehicle Condition (Good/Medium/Poor): ";
        cin >> condition;

        cout << "Insurance (Running/Expired): ";
        cin >> insuranceStatus;

        cout << "Company: ";
        cin >> company;

        cout << "Accidental Insurance: YES (Fixed)\n";

        // Calculate price
        float price = generatePrice(modelYear, condition, insuranceStatus);

        // Display output
        cout << "\n--- Bike Summary ---\n";
        cout << "Vehicle No: " << vehicleNo << endl;
        cout << "RC Book No: " << rcBookNo << endl;
        cout << "Model Year: " << modelYear << endl;
        cout << "Condition: " << condition << endl;
        cout << "Insurance: " << insuranceStatus << endl;
        cout << "Accidental Insurance: YES\n";
        cout << "Company: " << company << endl;
        cout << "Generated Price: " << price << endl;

        // Loop condition
        cout << "\nDo you want to enter another bike? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the Bike Agency System!\n";
    return 0;
}

