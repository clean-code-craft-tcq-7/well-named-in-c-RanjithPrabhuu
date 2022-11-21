#include <stdio.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_get.h"

//function used to get the colour by giving the input of the pair number
ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

//function used to get the pair number by giving the input of the colour
int GetPairNumberFromColor(const ColorPair colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
