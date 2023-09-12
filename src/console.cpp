#include "console.hpp"
#include <format>
#include <iostream>
#include <cstdlib>
#ifdef _WIN32
	#include <windows.h>
#endif

const console::Color console::color::alice_blue = console::Color{240, 248, 255};
const console::Color console::color::antique_white = console::Color{250, 235, 215};
const console::Color console::color::aqua = console::Color{0, 255, 255};
const console::Color console::color::aquamarine = console::Color{127, 255, 212};
const console::Color console::color::azure = console::Color{240, 255, 255};
const console::Color console::color::beige = console::Color{245, 245, 220};
const console::Color console::color::bisque = console::Color{255, 228, 196};
const console::Color console::color::black = console::Color{0, 0, 0};
const console::Color console::color::blanched_almond = console::Color{255, 235, 205};
const console::Color console::color::blue = console::Color{0, 0, 255};
const console::Color console::color::blue_violet = console::Color{138, 43, 226};
const console::Color console::color::brown = console::Color{165, 42, 42};
const console::Color console::color::burly_wood = console::Color{222, 184, 135};
const console::Color console::color::cadet_blue = console::Color{95, 158, 160};
const console::Color console::color::chartreuse = console::Color{127, 255, 0};
const console::Color console::color::chocolate = console::Color{210, 105, 30};
const console::Color console::color::coral = console::Color{255, 127, 80};
const console::Color console::color::cornflower_blue = console::Color{100, 149, 237};
const console::Color console::color::cornsilk = console::Color{255, 248, 220};
const console::Color console::color::crimson = console::Color{220, 20, 60};
const console::Color console::color::cyan = console::Color{0, 255, 255};
const console::Color console::color::dark_blue = console::Color{0, 0, 139};
const console::Color console::color::dark_cyan = console::Color{0, 139, 139};
const console::Color console::color::dark_golden_rod = console::Color{184, 134, 11};
const console::Color console::color::dark_gray = console::Color{169, 169, 169};
const console::Color console::color::dark_green = console::Color{0, 100, 0};
const console::Color console::color::dark_khaki = console::Color{189, 183, 107};
const console::Color console::color::dark_magenta = console::Color{139, 0, 139};
const console::Color console::color::dark_olive_green = console::Color{85, 107, 47};
const console::Color console::color::dark_orange = console::Color{255, 140, 0};
const console::Color console::color::dark_orchid = console::Color{153, 50, 204};
const console::Color console::color::dark_red = console::Color{139, 0, 0};
const console::Color console::color::dark_salmon = console::Color{233, 150, 122};
const console::Color console::color::dark_sea_green = console::Color{143, 188, 143};
const console::Color console::color::dark_slate_blue = console::Color{72, 61, 139};
const console::Color console::color::dark_slate_gray = console::Color{47, 79, 79};
const console::Color console::color::dark_turquoise = console::Color{0, 206, 209};
const console::Color console::color::dark_violet = console::Color{148, 0, 211};
const console::Color console::color::deep_pink = console::Color{255, 20, 147};
const console::Color console::color::deep_sky_blue = console::Color{0, 191, 255};
const console::Color console::color::dim_gray = console::Color{105, 105, 105};
const console::Color console::color::dodger_blue = console::Color{30, 144, 255};
const console::Color console::color::fire_brick = console::Color{178, 34, 34};
const console::Color console::color::floral_white = console::Color{255, 250, 240};
const console::Color console::color::forest_green = console::Color{34, 139, 34};
const console::Color console::color::fuchsia = console::Color{255, 0, 255};
const console::Color console::color::gainsboro = console::Color{220, 220, 220};
const console::Color console::color::ghost_white = console::Color{248, 248, 255};
const console::Color console::color::gold = console::Color{255, 215, 0};
const console::Color console::color::golden_rod = console::Color{218, 165, 32};
const console::Color console::color::gray = console::Color{128, 128, 128};
const console::Color console::color::green = console::Color{0, 128, 0};
const console::Color console::color::green_yellow = console::Color{173, 255, 47};
const console::Color console::color::honey_dew = console::Color{240, 255, 240};
const console::Color console::color::hot_pink = console::Color{255, 105, 180};
const console::Color console::color::indian_red = console::Color{205, 92, 92};
const console::Color console::color::indigo = console::Color{75, 0, 130};
const console::Color console::color::ivory = console::Color{255, 255, 240};
const console::Color console::color::khaki = console::Color{240, 230, 140};
const console::Color console::color::lavender = console::Color{230, 230, 250};
const console::Color console::color::lavender_blush = console::Color{255, 240, 245};
const console::Color console::color::lawn_green = console::Color{124, 252, 0};
const console::Color console::color::lemon_chiffon = console::Color{255, 250, 205};
const console::Color console::color::light_blue = console::Color{173, 216, 230};
const console::Color console::color::light_coral = console::Color{240, 128, 128};
const console::Color console::color::light_cyan = console::Color{224, 255, 255};
const console::Color console::color::light_golden_rod_yellow = console::Color{250, 250, 210};
const console::Color console::color::light_gray = console::Color{211, 211, 211};
const console::Color console::color::light_green = console::Color{144, 238, 144};
const console::Color console::color::light_pink = console::Color{255, 182, 193};
const console::Color console::color::light_salmon = console::Color{255, 160, 122};
const console::Color console::color::light_sea_green = console::Color{32, 178, 170};
const console::Color console::color::light_sky_blue = console::Color{135, 206, 250};
const console::Color console::color::light_slate_gray = console::Color{119, 136, 153};
const console::Color console::color::light_steel_blue = console::Color{176, 196, 222};
const console::Color console::color::light_yellow = console::Color{255, 255, 224};
const console::Color console::color::lime = console::Color{0, 255, 0};
const console::Color console::color::lime_green = console::Color{50, 205, 50};
const console::Color console::color::linen = console::Color{250, 240, 230};
const console::Color console::color::magenta = console::Color{255, 0, 255};
const console::Color console::color::maroon = console::Color{128, 0, 0};
const console::Color console::color::medium_aquamarine = console::Color{102, 205, 170};
const console::Color console::color::medium_blue = console::Color{0, 0, 205};
const console::Color console::color::medium_orchid = console::Color{186, 85, 211};
const console::Color console::color::medium_purple = console::Color{147, 112, 219};
const console::Color console::color::medium_sea_green = console::Color{60, 179, 113};
const console::Color console::color::medium_slate_blue = console::Color{123, 104, 238};
const console::Color console::color::medium_spring_green = console::Color{0, 250, 154};
const console::Color console::color::medium_turquoise = console::Color{72, 209, 204};
const console::Color console::color::medium_violet_red = console::Color{199, 21, 133};
const console::Color console::color::midnight_blue = console::Color{25, 25, 112};
const console::Color console::color::mint_cream = console::Color{245, 255, 250};
const console::Color console::color::misty_rose = console::Color{255, 228, 225};
const console::Color console::color::moccasin = console::Color{255, 228, 181};
const console::Color console::color::navajo_white = console::Color{255, 222, 173};
const console::Color console::color::navy = console::Color{0, 0, 128};
const console::Color console::color::old_lace = console::Color{253, 245, 230};
const console::Color console::color::olive = console::Color{128, 128, 0};
const console::Color console::color::olive_drab = console::Color{107, 142, 35};
const console::Color console::color::orange = console::Color{255, 165, 0};
const console::Color console::color::orange_red = console::Color{255, 69, 0};
const console::Color console::color::orchid = console::Color{218, 112, 214};
const console::Color console::color::pale_golden_rod = console::Color{238, 232, 170};
const console::Color console::color::pale_green = console::Color{152, 251, 152};
const console::Color console::color::pale_turquoise = console::Color{175, 238, 238};
const console::Color console::color::pale_violet_red = console::Color{219, 112, 147};
const console::Color console::color::papaya_whip = console::Color{255, 239, 213};
const console::Color console::color::peach_puff = console::Color{255, 218, 185};
const console::Color console::color::peru = console::Color{205, 133, 63};
const console::Color console::color::pink = console::Color{255, 192, 203};
const console::Color console::color::plum = console::Color{221, 160, 221};
const console::Color console::color::powder_blue = console::Color{176, 224, 230};
const console::Color console::color::purple = console::Color{128, 0, 128};
const console::Color console::color::rebecca_purple = console::Color{102, 51, 153};
const console::Color console::color::red = console::Color{255, 0, 0};
const console::Color console::color::rosy_brown = console::Color{188, 143, 143};
const console::Color console::color::royal_blue = console::Color{65, 105, 225};
const console::Color console::color::saddle_brown = console::Color{139, 69, 19};
const console::Color console::color::salmon = console::Color{250, 128, 114};
const console::Color console::color::sandy_brown = console::Color{244, 164, 96};
const console::Color console::color::sea_green = console::Color{46, 139, 87};
const console::Color console::color::sea_shell = console::Color{255, 245, 238};
const console::Color console::color::sienna = console::Color{160, 82, 45};
const console::Color console::color::silver = console::Color{192, 192, 192};
const console::Color console::color::sky_blue = console::Color{135, 206, 235};
const console::Color console::color::slate_blue = console::Color{106, 90, 205};
const console::Color console::color::slate_gray = console::Color{112, 128, 144};
const console::Color console::color::snow = console::Color{255, 250, 250};
const console::Color console::color::spring_green = console::Color{0, 255, 127};
const console::Color console::color::steel_blue = console::Color{70, 130, 180};
const console::Color console::color::tan = console::Color{210, 180, 140};
const console::Color console::color::teal = console::Color{0, 128, 128};
const console::Color console::color::thistle = console::Color{216, 191, 216};
const console::Color console::color::tomato = console::Color{255, 99, 71};
const console::Color console::color::turquoise = console::Color{64, 224, 208};
const console::Color console::color::violet = console::Color{238, 130, 238};
const console::Color console::color::wheat = console::Color{245, 222, 179};
const console::Color console::color::white = console::Color{255, 255, 255};
const console::Color console::color::white_smoke = console::Color{245, 245, 245};
const console::Color console::color::yellow = console::Color{255, 255, 0};
const console::Color console::color::yellow_green = console::Color{154, 205, 50};

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

std::string console::fg(const Color& color)
{
	return std::format("\x1b[38;2;{:d};{:d};{:d}m", color.r, color.g, color.b);
}

std::string console::bg(uint8_t r, uint8_t g, uint8_t b)
{
	return std::format("\x1b[48;2;{:d};{:d};{:d}m", r, g, b);
}

std::string console::bg(const Color& color)
{
	return std::format("\x1b[48;2;{:d};{:d};{:d}m", color.r, color.g, color.b);
}

void console::clear()
{
	#ifdef _WIN32
		std::system("cls");
	#elif __linux__
		std::system("clear");
	#endif
}
