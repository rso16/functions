#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdint.h>
#define ARRAY_SIZE 4


uint8_t mergeNibbles(uint8_t nibble0, uint8_t nibble1);
uint8_t ASCIIToHEX(uint8_t ASCIIVal);
uint8_t HEXToASCII(uint8_t hexVal);
uint32_t arrayToByte32(uint8_t byteArray[]);
void  byte32toArray(uint32_t byte32, uint8_t byteArray[]);
int getLengthOfCharArray(char *str);
#endif
