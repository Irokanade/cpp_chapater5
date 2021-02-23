//
//  bank_logging.hpp
//  cpp_chapater5
//
//  Created by Michael Leong on 2021/2/23.
//

#ifndef bank_logging_hpp
#define bank_logging_hpp

#include <cstdio>

class FileLogger {
public:
    void log_transfer(long from, long to, double amount);
};

class ConsoleLogger {
public:
    void log_transfer(long from, long to, double amount);
};

enum class LoggerType {
    Console,
    File
};

class Bank {
public:
    Bank();
    void set_logger(LoggerType new_type);
    void make_transfer(long from, long to, double amount);
    
private:
    LoggerType type;
    ConsoleLogger consoleLogger;
    FileLogger fileLogger;
};

#endif /* bank_logging_hpp */
