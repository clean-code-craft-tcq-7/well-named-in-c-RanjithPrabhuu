#include <stdio.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_get.h"
#include "twentyFivePair_colour_code_util.h"

//create an instance of the structure
ColorPair colorPair;

//util fucntion to print colour pairs identified in strings.
void ColorPairToString(const colorPair colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair.majorColor],
        MinorColorNames[colorPair.minorColor]);
}
