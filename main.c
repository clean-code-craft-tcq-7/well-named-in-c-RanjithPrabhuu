#include <stdio.h>
#include "colour_pair_code_config.h"
#include "colour_pair_code_test.h"
#include "colour_pair_code_display.h"

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    twentyFivePairColourCodeDisplay();

    return 0;
}
