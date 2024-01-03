#include <iostream>

class DM; // Forward declaration

class DB {
private:
    int feet;
    float inches;

public:
    // Constructor to initialize feet and inches
    DB(int f, float i) : feet(f), inches(i) {}

    // Friend function to add DM and DB objects
    friend void add(DM, DB);
};

class DM {
private:
    int meters;
    float centimeters;

public:
    // Constructor to initialize meters and centimeters
    DM(int m, float cm) : meters(m), centimeters(cm) {}

    // Friend function to add DM and DB objects
    friend void add(DM, DB);
};

// Friend function definition
void add(DM d, DB b) {
    // Convert DM to centimeters
    float dmInCm = d.meters * 100 + d.centimeters;

    // Convert DB to centimeters
    float dbInCm = b.feet * 30.48 + b.inches * 2.54;

    // Add the distances in centimeters
    float totalCm = dmInCm + dbInCm;

    // Convert total to meters and centimeters
    int totalMeters = static_cast<int>(totalCm / 100);
    float remainingCm = totalCm - totalMeters * 100;

    // Convert total to feet and inches
    int totalFeet = static_cast<int>(totalCm / 30.48);
    float remainingInches = (totalCm / 2.54) - (totalFeet * 12);

    // Display the result
    std::cout << "In M/CM = " << totalMeters << " m " << remainingCm << " cm and Feet/Inch = " << totalFeet << " Feet " << remainingInches << " Inch." << std::endl;
}

int main() {
    int meters;
    float centimeters;
    std::cout << "Input in Meter and CM: ";
    std::cin >> meters >> centimeters;

    int feet;
    float inches;
    std::cout << "Input in Feet and Inch: ";
    std::cin >> feet >> inches;

    DM dmObject(meters, centimeters);
    DB dbObject(feet, inches);

    // Call the friend function to add DM and DB objects
    add(dmObject, dbObject);

    return 0;
}
