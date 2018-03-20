#include "functions.h"

uint8_t mergeNibles(uint8_t nible0, uint8_t nible1)
{
  uint8_t merged = (nible0 << 4) | nible1;
  return merged;
}


uint8_t ASCIIToHEX(uint8_t ASCIIVal)
{
  uint8_t hexval = 0;
  if( ASCIIVal >= '0' && ASCIIVal <= '9')
  {
    hexval = ASCIIVal - '0';
  }
  else if( ASCIIVal >= 'A' && ASCIIVal <= 'F')
  {
      hexval = ASCIIVal - 23;
  }
  return hexval;
}
