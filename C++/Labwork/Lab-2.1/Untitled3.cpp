#include <iostream>

using namespace std;

int main() {
    int totalSeconds;

    // Input total seconds
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    // Calculate hours, minutes, and seconds
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    // Function to print with leading zero if needed
    if (hours < 10)
        cout << "0" << hours << ".";
    else
        cout << hours << ".";

    if (minutes < 10)
        cout << "0" << minutes << ".";
    else
        cout << minutes << ".";

    if (seconds < 10)

