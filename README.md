# Phonebook Application

Author: Rowan Stratton

## Overview

This is a simple command-line phonebook application written in C++. The program allows you to input and manage contact information, including names and phone numbers. You can perform the following operations with this phonebook application:

1. Input contact data.
2. Sort contacts in ascending order based on phone numbers.
3. Sort contacts in descending order based on phone numbers.
4. Print the contact data.
5. Search for an individual by name.
6. Exit the program.

## Installation

To compile and run this program, follow these steps:

1. Ensure you have a C++ compiler installed on your system (e.g., g++, Visual C++).
2. Save the code to a file named `main.cpp`.
3. Open a terminal or command prompt.
4. Navigate to the directory where `main.cpp` is located.
5. Compile the program using the following command:

   ```bash
   g++ main.cpp -o phonebook
   ```

   Replace `g++` with your specific compiler if necessary.

6. Run the program using:

   ```bash
   ./phonebook
   ```

## Usage

When you run the program, you will be presented with a menu of options. Enter the corresponding number to perform an operation. Here's what each option does:

1. **Input Data (Press 1):** Enter contact names and phone numbers for up to 3 individuals.
2. **Sort in Ascending Order (Press 2):** Sort the contacts in ascending order based on phone numbers.
3. **Sort in Descending Order (Press 3):** Sort the contacts in descending order based on phone numbers.
4. **Print Data (Press 4):** Display the contact data.
5. **Search for an Individual (Press 5):** Search for a person by name and display their contact information.
6. **Exit the Program (Press 6):** Terminate the application.

## Functionality Details

- The program uses two parallel arrays to store names and phone numbers.
- Contacts can be sorted in ascending and descending order based on phone numbers.
- When searching for an individual, you can input their name, and the program will display their contact information if found.
- The program can handle up to 3 contacts but can be easily modified to support more by changing the `size` variable.

## Note

- Please make sure to compile and run this program in a C++ environment.
- Contact data is not stored permanently and will be lost when you exit the program.

Feel free to use and modify this phonebook application to suit your needs. If you encounter any issues or have suggestions for improvements, please don't hesitate to make changes accordingly.
