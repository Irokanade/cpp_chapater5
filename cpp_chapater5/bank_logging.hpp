//
//  bank_logging.hpp
//  cpp_chapater5
//
//  Created by Michael Leong on 2021/2/23.
//

#ifndef bank_logging_hpp
#define bank_logging_hpp

#include <cstdio>

class ConsoleLogger {
public:
    void log_transfer(long from, long to, double amount);
};

class Bank {
public:
    ConsoleLogger logger;
    void make_transfer(long from, long to, double amount);
};

#endif /* bank_logging_hpp */
