#include <iostream>
#include <cstdlib>
#include <limits>

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void showMenu() {
    std::cout << "=============================\n";
    std::cout << "        E-Type Course        \n";
    std::cout << "=============================\n";
    std::cout << "1. Start Exercise\n";
    std::cout << "2. View Lessons\n";
    std::cout << "3. Exit\n";
    std::cout << "-----------------------------\n";
    std::cout << "Please select an option: ";
}

int main() {
    int choice;
    while (true) {
        clearScreen();
        showMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Starting Exercise...\n";
                // Call function to start exercise
                break;
            case 2:
                std::cout << "Viewing Lessons...\n";
                // Call function to view lessons
                break;
            case 3:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
        std::cout << "Press Enter to continue...";
        std::cin.get();
    }
}