#include "Appointment.h"
#include <iostream>

Appointment::Appointment(const std::string &procedure, const std::string &time, const std::string &customerEmail,const std::string &dentist_name)
    : procedure(procedure), time(time), customerEmail(customerEmail), status("Pending"), dentist_name(dentist_name) {}

std::ostream& operator<<(std::ostream& os, const Appointment& appointment) {
    os << "Appointment Details:\n\n"
       << "Procedure: " << appointment.procedure << "\n"
       << "Time: " << appointment.time << "\n"
       << "Customer Email: " << appointment.customerEmail << "\n"
       << "Status: " << appointment.status << "\n"
       << "Dentist Name: " << appointment.dentist_name << "\n"
       << "\n";
    return os;
}

const std::string& Appointment::getProcedure() const {
    return procedure;
}

const std::string& Appointment::getTime() const {
    return time;
}

const std::string& Appointment::getCustomerEmail() const {
    return customerEmail;
}

const std::string& Appointment::getStatus() const {
    return status;
}

void Appointment::setTime(const std::string &time) {
    this->time = time;
}

void Appointment::setStatus(const std::string &status) {
    this->status = status;
}
const std::string& Appointment::getDentist_name() const {
    return dentist_name;
}
