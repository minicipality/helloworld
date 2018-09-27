#include "lib.h"

#include <spdlog/spdlog.h>
#include <iostream>

int main()
{
	//std::cout<<"build "<<versioin()<<" version"<<std::endl;	
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());
	
	std::cout<<"Hello, world!"<<std::endl;
    return 0;
}
