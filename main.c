#include <stdio.h>
#include <assert.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_get.h"
#include "twentyFivePair_colour_code_util.h"
#include "twentyFivePair_colour_code_test.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
