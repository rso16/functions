#include "functions.h"

uint8_t mergeNibbles(uint8_t nibble0, uint8_t nibble1)
{
  uint8_t merged = (nibble0 << 4) | nibble1;
  return merged;
}


uint8_t ASCIIToHEX(uint8_t ASCIIVal)
{
  uint8_t hexval = 0;
  if( ASCIIVal >= '0' && ASCIIVal <= '9')
  {
    hexval = ASCIIVal - ('0');
  }
  else if( ASCIIVal >= 'A' && ASCIIVal <= 'F')
  {
      hexval = ASCIIVal - 0x37;
  }
  return hexval;
}
