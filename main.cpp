#include <iostream>
#include <string>
#include "Patient.h"
#include "dentist.h"
#include "appointment.h"

// Function to create a new patient by asking the user for input
Patient createPatientFromInput() {
	std::string id, name, gender, phone, email;
	int age;

	std::cout << "Enter Patient ID: ";
	std::cin >> id;
	std::cout << "Enter Patient Name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore leftover newline
	std::getline(std::cin, name); // Use getline to allow for names with spaces
	std::cout << "Enter Patient Age: ";
	std::cin >> age;
	std::cout << "Enter Patient Gender: ";
	std::cin >> gender;
	std::cout << "Enter Patient Phone Number: ";
	std::cin >> phone;
	std::cout << "Enter Patient Email: ";
	std::cin >> email;

	return Patient(id, name, age, gender, phone, email);
}

int main() {
	int optionSelection;
	// patient data type
	// Patient patientID;
	std::cout << "Welcome to our Dental Clinic\n" 
		<< "Select from the options below\n"
		<< "1. Register patient\n"
		<< "2. Schedule an appointment\n"
		<< "3. View available Dentists\n"
		<< "4. View appointments\n"
		<< "5. View all patients\n"
		<< "6. Retrieve patient information and medical history";
	// implement try catch exception
	cin >> optionSelection;
	if (optionSelection == 1) {
		std::cout << "Please enter the patient's information below:\n";
		Patient newPatient = createPatientFromInput();
		// Further processing with newPatient can be done here, like adding to patient records.
	}
	else if (optionSelection == 2) {
		
	}

}