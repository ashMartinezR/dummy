// Clase de semana 6 practica


#include <iostream> // Includes the iostream library for input and output operations

int main() {
    int stationCount; // Stores the number of workstations to label

    std::cout << "Enter the number of workstations: ";
    std::cin >> stationCount;

    for (int station = 7; station >= stationCount; station--) {
        std::cout << "Workstation " << station << std::endl;
    }

    return 0;
}