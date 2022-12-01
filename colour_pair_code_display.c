#include <stdio.h>
#include <string.h>
#include "colour_pair_code_config.h"
#include "colour_pair_code_get.h"
#include "colour_pair_code_display.h"

void twentyFivePairColourCodeDisplay(void)
{
  char twentyFivePair_colour_string_buffer[MAX_COLORPAIR_NAME_CHARS];
  int twentyFivePair_colour_code;
  ColorPair twentyFivePairColourPairVal;
  
  printf("\n");
  printf("--twentyFivePairColourCodeDisplay--\n");
  printf("|       pair\t|\tColour\t        |\n");

  for(twentyFivePair_colour_code = 1; twentyFivePair_colour_code <= COLOUR_PAIR_SUPPORTED; twentyFivePair_colour_code++)
  {
      memset(twentyFivePair_colour_string_buffer, 0, COLOUR_PAIR_SUPPORTED);
      twentyFivePairColourPairVal = GetColorFromPairNumber(twentyFivePair_colour_code);
      ColorPairToString(&twentyFivePairColourPairVal, twentyFivePair_colour_string_buffer);
      printf("|\t%d\t|\t%s\t|\n", twentyFivePair_colour_code, twentyFivePair_colour_string_buffer);
  }
  
}
