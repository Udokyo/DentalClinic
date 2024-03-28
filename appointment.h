#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

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
    static int generateNextAppointmentID(); // Static function to update and return the next ID
    int getAppointmentID() const;
    std::string getDateTime() const;
    std::string getAppointmentStatus() const;
    std::string getCost() const;
    std::string getReport() const;
    std::string getPaymentStatus() const;

    // Setters
    void setDateTime(const std::string& dtime);
    void setAppointmentStatus(const std::string& app_status);
    void setCost(const std::string& cost);
    void setReport(const std::string& report);
    void setPaymentStatus(const std::string& payment_status);
};

#endif // APPOINTMENT_H
