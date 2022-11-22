#include <stdio.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_test.h"
#include "twentyFivePair_colour_code_display.h"

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    twentyFivePairColourCodeDisplay();

    return 0;
}
