//
//  main.cpp
//  cpp_chapater5
//
//  Created by Michael Leong on 2021/2/23.
//

#include <iostream>
#include <cstdio>
#include "bank_logging.hpp"

int main(int argc, const char * argv[]) {
    
    Bank bank;
    bank.make_transfer(1000, 2000, 49.95);
    bank.make_transfer(2000, 4000, 20.00);
    bank.set_logger(LoggerType::File);
    bank.make_transfer(3000, 2000, 75.00);
    
    return 0;
}
