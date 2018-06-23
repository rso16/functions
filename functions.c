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

uint8_t HEXToASCII(uint8_t hexVal)
{
  uint8_t ASCIIVal = 0;
  if( hexVal >= '0' && hexVal <= '9')
  {
    ASCIIVal = hexVal  + ('0');
  }
  else if( hexVal >= 'A' && hexVal <= 'F')
  {
      ASCIIVal = hexVal +  0x37;
  }
  return ASCIIVal;
}

uint32_t arrayToByte32(uint8_t byteArray[])
{
  uint32_t byte32 = 0x0;
  byte32 =  (((uint32_t)   byteArray[0] << 24));
  byte32 |= (((uint32_t) byteArray[1] << 16));
  byte32 |= (((uint32_t) byteArray[2] << 8));
  byte32 |= (((uint32_t) byteArray[3]));
  return byte32;
}

void  byte32toArray(uint32_t byte32, uint8_t byteArray[])
{
  byteArray[0] = (uint8_t) (byte32 >> 24);
  byteArray[1] = (uint8_t) ((byte32 << 8) >> 24);
  byteArray[2] = (uint8_t) ((byte32 << 16) >> 24);
  byteArray[3] = (uint8_t) ((byte32 << 24) >> 24);
}

int getLengthOfCharArray(char *str)
{
  int counter = 0;
  while (str[counter] != '\0')
  {
      counter++;
  }
  return counter;
}
