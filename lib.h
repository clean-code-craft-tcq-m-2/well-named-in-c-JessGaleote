#include<assert.h>
#include<stdio.h>

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
