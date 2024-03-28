#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include "Appointment.h"

class Appointment {
private:
    static int nextAppointmentID; // Static member to hold the next available ID;
    int appointmentID; // Instance-specific ID
    std::string dateTime;
    std::string appointmentStatus;
    double cost;
    std::string report;
    std::string paymentStatus;

public:
    Appointment(const std::string& dateTime, const std::string& status,
        double cost, const std::string& report, const std::string& payStatus);

    // Getters
    int Patient::generateNextID() {
        return nextID++; // Return the current value of nextID, then increment it
    }
    int Patient::getPatientID() const {
        return patientID;
    }

    // Setters
    void setDateTime(const std::string& dtime);
    void setAppointmentStatus(const std::string& app_status);
    void setCost(const std::string& cost);
    void setReport(const std::string& report);
    void setPaymentStatus(const std::string& payment_status);
};

#endif // APPOINTMENT_H
