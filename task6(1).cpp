
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double time, speed, distance;

    cout << "Select a gas from the menu below:\n";
    cout << "1. Carbon Dioxide\n";
    cout << "2. Air\n";
    cout << "3. Helium\n";
    cout << "4. Hydrogen\n";
    cout << "Enter the number corresponding to your choice: ";
    cin >> choice;

    if (choice == 1) {
        speed = 258.0;
        cout << "You selected Carbon Dioxide.\n";
    }
    else if (choice == 2) {
        speed = 331.5;
        cout << "You selected Air.\n";
    }
    else if (choice == 3) {
        speed = 972.0;
        cout << "You selected Helium.\n";
    }
    else if (choice == 4) {
        speed = 1270.0;
        cout << "You selected Hydrogen.\n";
    }
    else {
        cout << "Invalid menu choice. Program ending.\n";
        return 0;
    }

    cout << "Enter the time (in seconds): ";
    cin >> time;

    if (time < 0 || time > 30) {
        cout << "Invalid time. Time must be between 0 and 30 seconds.\n";
        return 0;
    }
    else {
        distance = speed * time;
        cout << fixed << setprecision(2);
        cout << "\nSpeed of sound: " << speed << " m/s\n";
        cout << "Time: " << time << " second";
        return 0;
    }
}
