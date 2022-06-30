#include "Includes.h"

auto Time0 = std::chrono::system_clock::now();

void timer_Start()
{
    auto Time0 = std::chrono::system_clock::now();
}

void timer_Stop()
{
	auto Time1 = std::chrono::system_clock::now();
	auto Duration = std::chrono::duration_cast<std::chrono::milliseconds>(Time1 - Time0).count();
	std::cout << Duration << std::endl;
}