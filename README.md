# Florist Shop Management System

This project is a **Florist Shop Management System** developed in **C++**. The system allows users to manage multiple florist shops, view available flowers, add new flowers to the stock, and provides different interfaces for employees and clients.

## Features

- **Multiple Florist Shops**: The system manages two flower shops: "Diamond" and "Beauty", each located in Cluj-Napoca.
- **Client and Employee Modes**: 
  - **Employee Mode**: Employees can view the stock and add new flowers to the shop’s inventory.
  - **Client Mode**: Clients can browse the available flowers in each shop.
- **Data Persistence**: The flower stock for each shop is saved to and loaded from text files (`diamond.txt` and `beauty.txt`).
- **Shop Hours**: Displays operating hours for each shop.
- **Secure Employee Access**: Employees are required to enter a password to access the inventory management system.

## Project Structure

### Header Files

- **`Flori.h`**: Defines the structure for flowers used within the system.
    ```cpp
    typedef struct Flori {
        string name;
    } Flori;
    ```

- **`Persoana.h`**: Defines the structure for a person (either client or employee) with attributes such as name, surname, and an interface to select their role.
    ```cpp
    typedef struct Persoana {
        string nume;
        string prenume;
        int ora;
        string zi;

        void staree(int y, class Persoana x, class Florarii z, int choice);
        void alegere(int y, class Florarii z, int choice);
    } Persoana;
    ```

- **`Florarii.h`**: Defines the structure and functions for the flower shop (`Florarii`), including opening hours, stock display, and adding new flowers.
    ```cpp
    typedef struct Florarii {
        string denumire;
        string locatie;
        int nr;

        void orar();
        void afisare();
        void tastare();
        void adaugare(int choice);
        void afisare_flori(int choice);
    } Florarii;
    ```

### Source Files

- **`Source.cpp`**: The main entry point for the system, where the user selects between different florist shops and roles (client or employee).
    - Manages the main interaction loop where users can choose a shop and their role.
    - Displays options for clients or employees based on user input.

- **`Functii.cpp`**: Implements the core functions of the system, such as employee and client actions.
    - **Employee Mode**: Allows employees to view the current stock and add new flowers to the inventory.
    - **Client Mode**: Allows clients to browse the available flowers.

### Project Solution

- **`Project1.sln`**: A Visual Studio solution file for compiling and running the project in Visual Studio.

### Text Files (Inventory Data)

- **`diamond.txt`**: Contains the flower stock for the "Diamond" shop.
- **`beauty.txt`**: Contains the flower stock for the "Beauty" shop.

## How It Works

1. **Start the System**: The user is prompted to select one of the two florist shops: "Diamond" or "Beauty".
2. **Select Role**:
    - **Employee**: Employees can log in by entering a password (default password: `1234`).
    - **Client**: Clients can directly view the available flowers without any authentication.
3. **Employee Mode**: 
    - Employees can either view the current stock or add new flowers to the shop’s inventory.
4. **Client Mode**: 
    - Clients are shown the available flowers in the selected shop.
5. **Data Persistence**: All flower additions or changes are saved to the respective text file (`diamond.txt` or `beauty.txt`).

## Installation

### Requirements

- **C++ Compiler** (e.g., GCC, Visual Studio)
- **Text Files**: Ensure `diamond.txt` and `beauty.txt` exist for stock data.

### Steps to Run

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/florist-shop-management.git
    cd florist-shop-management
    ```

2. **Compile the Code**:
    ```bash
    g++ Source.cpp Functii.cpp -o florist_shop
    ```

3. **Run the Program**:
    ```bash
    ./florist_shop
    ```

4. **Data Files**:
    - Ensure `diamond.txt` and `beauty.txt` exist in the same directory as the compiled program to load and save flower stock data.


## Customization

- **Password**: To change the employee login password, modify the default password in the `staree()` function within `Functii.cpp`:
    ```cpp
    if (parola == 1234) {
        // Modify this value to change the password
    }
    ```

- **New Shops**: To add new florist shops, you can extend the `Florarii` struct and create new text files for each additional shop.

## License

This project is licensed under the **Technical University of Cluj-Napoca** license. 

## Acknowledgments

- **Institution**: Technical University of Cluj-Napoca.

