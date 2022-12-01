#include <stdio.h>
#include <assert.h>
#include "colour_pair_code_config.h"
#include "colour_pair_code_get.h"
#include "colour_pair_code_test.h"

//function to check whether getting the colour from pair number is working fine.
void testNumberToPair(int pairNumber,MajorColor expectedMajor,MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

//function to check whether getting the pair number from colour is working fine.
void testPairToNumber(MajorColor major,MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
