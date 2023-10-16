//
// Created by Caio on 25/08/2023.
//

#ifndef GAME02_CONSOLECOLORS_H
#define GAME02_CONSOLECOLORS_H

#include <iostream>
#include <windows.h>

enum class Color {
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LIGHTGRAY = 7,
    GRAY = 8,
    LIGHT_BLUE = 9,
    LIGHT_GREEN = 10,
    LIGHT_CYAN = 11,
    LIGHT_RED = 12,
    LIGHT_MAGENTA = 13,
    YELLOW = 14,
    WHITE = 15
};

enum class BackgroundColor {
    BLACK = 0,
    NAVY_BLUE = 16,
    GREEN = 32,
    TEAL = 48,
    MAROON = 64,
    PURPLE = 80,
    OLIVE = 96,
    SILVER = 112,
    GRAY = 128,
    BLUE = 144,
    LIME = 160,
    CYAN = 176,
    RED = 192,
    MAGENTA = 208,
    YELLOW = 224,
    WHITE = 240
};

namespace ConsoleColor {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    void set(Color color, BackgroundColor bgColor = BackgroundColor::BLACK) {
        SetConsoleTextAttribute(console, int(color) + int(bgColor));
    }

    void reset() {
        SetConsoleTextAttribute(console, 7);
    }
}

#endif //GAME02_CONSOLECOLORS_H
