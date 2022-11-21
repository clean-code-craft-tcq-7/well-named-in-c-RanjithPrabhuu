#include <stdio.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_util.h"

//util fucntion to print colour pairs identified in strings.
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}
