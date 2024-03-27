#include <iostream>
#include <vector>
#include <string>

// BST Node for Appointments
class AppointmentNode {
public:
    std::string patientID;
    std::string dentistID;
    std::string date;
    std::string time;
    AppointmentNode* left, * right;

    AppointmentNode(std::string pID, std::string dID, std::string dt, std::string tm) :
        patientID(pID), dentistID(dID), date(dt), time(tm), left(nullptr), right(nullptr) {}
};

// Simplified BST for managing appointments
class AppointmentBST {
private:
    AppointmentNode* root;

    // Utility function to insert a new node in BST
    AppointmentNode* insertAppointment(AppointmentNode* node, std::string patientID, std::string dentistID, std::string date, std::string time) {
        if (node == nullptr) {
            return new AppointmentNode(patientID, dentistID, date, time);
        }
        // Simplified comparison logic; should be expanded based on actual date/time comparison
        if (date < node->date || (date == node->date && time < node->time)) {
            node->left = insertAppointment(node->left, patientID, dentistID, date, time);
        }
        else {
            node->right = insertAppointment(node->right, patientID, dentistID, date, time);
        }
        return node;
    }

public:
    AppointmentBST() : root(nullptr) {}

    void insertAppointment(std::string patientID, std::string dentistID, std::string date, std::string time) {
        root = insertAppointment(root, patientID, dentistID, date, time);
    }

    // Additional methods for searching and deleting appointments should be implemented
};

// Assume each dentist has 8 slots per day for simplicity
const int DENTISTS = 5; // Number of dentists
const int SLOTS = 8; // Time slots per dentist

// Multi-Dimensional Array for Dentist Availability
bool dentistAvailability[DENTISTS][SLOTS]; // True if available, false if booked

void initializeDentistAvailability() {
    for (int i = 0; i < DENTISTS; ++i) {
        for (int j = 0; j < SLOTS; ++j) {
            dentistAvailability[i][j] = true; // Initially, all slots are available
        }
    }
}

// Function to book a slot (simplified)
void bookSlot(int dentistIndex, int slotIndex) {
    if (dentistAvailability[dentistIndex][slotIndex]) {
        dentistAvailability[dentistIndex][slotIndex] = false; // Slot is now booked
        std::cout << "Slot booked for Dentist " << dentistIndex << " at Slot " << slotIndex << std::endl;
    }
    else {
        std::cout << "Slot not available. Please choose another slot." << std::endl;
    }
}
