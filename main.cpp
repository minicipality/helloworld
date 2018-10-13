#include "lib.h"

#include <spdlog/spdlog.h>
#include <iostream>

int main()
{
    std::cout<<"build "<<version()<<std::endl;	
    /**/
    //auto logger = spdlog::stdout_logger_mt("console");
    //logger->info("version {} was started", version());
	
    std::cout<<"Hello, World!"<<std::endl;
    return 0;
}
