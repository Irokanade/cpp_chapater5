//
//  bank_logging.cpp
//  cpp_chapater5
//
//  Created by Michael Leong on 2021/2/23.
//

#include "bank_logging.hpp"

void ConsoleLogger::log_transfer(long from, long to, double amount) {
    printf("%ld -> %ld: %f\n", from, to, amount);
}

void Bank::make_transfer(long from, long to, double amount) {
    logger.log_transfer(from, to, amount);
}
