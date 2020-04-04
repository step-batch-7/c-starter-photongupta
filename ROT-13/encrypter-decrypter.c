#include <stdio.h>

void decryptText(char *cipherText, int length, char *plainText)
{
  for (int i = 0; i < length; i++)
  {
    plainText[i] = cipherText[i];
    int decipherText = cipherText[i] + 13;

    if (cipherText[i] > 64 && cipherText[i] < 91)
      plainText[i] = decipherText <= 90 ? decipherText : (65 + decipherText % 91);

    else if (cipherText[i] > 96 && cipherText[i] < 123)
      plainText[i] = decipherText <= 122 ? decipherText : (97 + decipherText % 123);
  }
}

void printDecryptedText(int length, char *decryptedText)
{
  for (int i = 0; i < length; i++)
  {
    printf("%c", decryptedText[i]);
  }
}

int main(void)
{
  char cipherText[] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
  int textLength = sizeof(cipherText) / sizeof(char);
  char plainText[textLength];

  decryptText(cipherText, textLength, plainText);
  printDecryptedText(textLength, plainText);

  return 0;
}