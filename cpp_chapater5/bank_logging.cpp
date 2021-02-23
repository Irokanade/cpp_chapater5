//
//  bank_logging.cpp
//  cpp_chapater5
//
//  Created by Michael Leong on 2021/2/23.
//

#include "bank_logging.hpp"
#include <stdexcept>

void FileLogger::log_transfer(long from, long to, double amount) {
    printf("[file] %ld,%ld,%f\n", from, to, amount);
}

void ConsoleLogger::log_transfer(long from, long to, double amount) {
    printf("[cons] %ld -> %ld: %f\n", from, to, amount);
}

Bank::Bank():type{LoggerType::Console} {};

void Bank::set_logger(LoggerType new_type) {
    type = new_type;
}

void Bank::make_transfer(long from, long to, double amount) {
    switch (type) {
        case LoggerType::Console: {
            consoleLogger.log_transfer(from, to, amount);
            break;
        } case LoggerType::File: {
            fileLogger.log_transfer(from, to, amount);
            break;
        } default: {
            throw std::logic_error("Unknown Logger type encountered.");
        }
    }
}
