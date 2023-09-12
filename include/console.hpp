#pragma once
#include <cstdint>
#include <string>

namespace console
{
	void init();
	std::string fg(uint8_t r, uint8_t g, uint8_t b);
	std::string bg(uint8_t r, uint8_t g, uint8_t b);
	void clear();
	extern const std::string reset;
	extern const std::string bold;
	extern const std::string faint;
	extern const std::string italic;
	extern const std::string underline;
	extern const std::string blink;
	extern const std::string reverse;
	extern const std::string hide;
	extern const std::string strike;
	extern const std::string doubly;
}
