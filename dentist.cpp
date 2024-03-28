#include "Dentist.h"

Dentist::Dentist(const std::string& id, const std::string& fname, const std::string& lname,
    const std::string& birthDate, const std::string& contact, const std::string& email,
    const std::string& specialty)
    : dentistID(id), firstName(fname), lastName(lname), birthDate(birthDate),
    contactNumber(contact), email(email), specialty(specialty) {}

// Getters
int Dentist::generateNextID() {
    return nextID++; // Return the current value of nextID, then increment it
}
int Dentist::getDentistID() const {
    return patientID;
}
std::string Dentist::getFirstName() const { return firstName; }
std::string Dentist::getLastName() const { return lastName; }
std::string Dentist::getDOB() const { return dob; }
std::string Dentist::getPhone() const { return phone; }
std::string Dentist::getEmail() const { return email; }

// Setters
void Dentist::setFirstName(const std::string& fname) { firstName = fname; }
void Dentist::setLastName(const std::string& lname) { lastName = lname; }
void Dentist::setDOB(const std::string& dob) { this->dob = dob; }
void Dentist::setPhone(const std::string& phone) { this->phone = phone; }
void Dentist::setEmail(const std::string& email) { this->email = email; }
