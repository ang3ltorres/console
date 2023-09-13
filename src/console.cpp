#include "console.hpp"
#include <format>
#include <iostream>
#include <cstdlib>
#ifdef _WIN32
	#include <windows.h>
#endif

const std::string console::reset = "\x1b[0m";
const std::string console::bold = "\x1b[1m";
const std::string console::faint = "\x1b[2m";
const std::string console::italic = "\x1b[3m";
const std::string console::underline = "\x1b[4m";
const std::string console::blink = "\x1b[5m";
const std::string console::reverse = "\x1b[7m";
const std::string console::hide = "\x1b[8m";
const std::string console::strike = "\x1b[9m";
const std::string console::doubly = "\x1b[21m";

void console::init()
{
	#ifdef _WIN32
		// Enable UTF-8
		SetConsoleOutputCP(65001);

		// Enable ANSI escape characters
		HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD lpMode;
		GetConsoleMode(out, &lpMode);
		SetConsoleMode(out, lpMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	#endif
}

std::string console::fg(uint8_t r, uint8_t g, uint8_t b)
{
	return std::format("\x1b[38;2;{:d};{:d};{:d}m", r, g, b);
}

std::string console::fg(const color& c)
{
	uint8_t r = uint32_t(c) >> 16;
	uint8_t g = uint32_t(c) >> 8;
	uint8_t b = uint32_t(c);
	return console::fg(r, g, b);
}

std::string console::bg(uint8_t r, uint8_t g, uint8_t b)
{
	return std::format("\x1b[48;2;{:d};{:d};{:d}m", r, g, b);
}

std::string console::bg(const color& c)
{
	uint8_t r = uint32_t(c) >> 16;
	uint8_t g = uint32_t(c) >> 8;
	uint8_t b = uint32_t(c);
	return console::bg(r, g, b);
}

void console::clear()
{
	#ifdef _WIN32
		std::system("cls");
	#elif __linux__
		std::system("clear");
	#endif
}
