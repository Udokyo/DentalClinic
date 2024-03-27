#include <string>
#include <vector>

class Patient {
private:
    PatientInfo info; // Basic patient information
    std::string phoneNumber; // Patient's phone number
    std::string email; // Patient's email address
    std::vector<std::string> medicalHistory; // Medical history notes
    std::vector<std::string> appointmentDates; // Dates of appointments

public:
    // Constructor
    Patient(std::string id, std::string name, int age, std::string gender, std::string phone, std::string email)
        : info(id, name, age, gender), phoneNumber(phone), email(email) {}

    // Accessor methods
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getEmail() const { return email; }
    std::vector<std::string> getMedicalHistory() const { return medicalHistory; }
    std::vector<std::string> getAppointmentDates() const { return appointmentDates; }

    // Mutator methods
    void setPhoneNumber(const std::string& phone) { phoneNumber = phone; }
    void setEmail(const std::string& mail) { email = mail; }
    void addMedicalHistory(const std::string& entry) { medicalHistory.push_back(entry); }
    void addAppointmentDate(const std::string& date) { appointmentDates.push_back(date); }

    // Additional functionality can be added as needed, such as methods to remove or update medical history entries and appointment dates
};

