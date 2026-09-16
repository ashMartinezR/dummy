#include <iostream>                            
using namespace std;                           

int main() {

    int monthNumbers;                            // Stores the menu option selected by the user
    cout << "Enter a month number from 1 to 7: "; // Prompts for a month number
    if (monthNumbers >= 1 && monthNumbers <= 7) { // Checks if the input is valid
        cout << "You entered: " << monthNumbers << endl; // Displays the entered month number
    } else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl; // Error message for invalid input
    }
    if (monthNumbers == 1) {
        cout << "January" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 2) {
        cout << "February" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 3) {
        cout << "March" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 4) {
        cout << "April" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 5) {
        cout << "May" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 6) {
        cout << "June" << endl; // Displays the month corresponding to the number
    } else if (monthNumbers == 7) {
        cout << "July" << endl; // Displays the month corresponding to the number
    } else {
        cout << "Invalid month choice." << endl; // Error message for invalid input
    }

    cout << "Enter your choice: ";             // Prompts for one menu number
    cin >> monthNumbers;                    // Reads the chosen menu number

    switch (monthNumbers) {                 // Compares the selected month
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;  
            break;
        case 6:
            cout << "June" << endl; 
            break;
        case 7:
            cout << "July" << endl;
            break;
        default:
            cout << "Invalid month choice." << endl;
    }

    return 0;
}
