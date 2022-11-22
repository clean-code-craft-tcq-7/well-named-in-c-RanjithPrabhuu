#include <stdio.h>
#include <string.h>
#include "twentyFivePair_colour_code_config.h"
#include "twentyFivePair_colour_code_get.h"
#include "twentyFivePair_colour_code_display.h"

void twentyFivePairColourCodeDisplay(void)
{
  char twentyFivePair_colour_string_buffer[MAX_COLORPAIR_NAME_CHARS];
  int twentyFivePair_colour_code;
  ColorPair twentyFivePairColourPairVal;
  
  printf("--twentyFivePairColourCodeDisplay--\n");
  printf("|pair Number\t|\tColor pair\t|\n");

  for(twentyFivePair_colour_code = 1; twentyFivePair_colour_code <= COLOR_PAIR_SUPPORTED; twentyFivePair_colour_code++)
  {
      memset(twentyFivePair_colour_string_buffer, 0, COLOR_PAIR_SUPPORTED);
      twentyFivePairColourPairVal = GetColorFromPairNumber(twentyFivePair_colour_code);
      ColorPairToString(&twentyFivePairColourPairVal, twentyFivePair_colour_string_buffer);
      printf("|\t%d\t|\t%s\t|\n", twentyFivePair_colour_code, twentyFivePair_colour_string_buffer);
  }
  printf("<<----------------------------------------->>\n");
}
