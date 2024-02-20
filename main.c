#include <stdio.h>
#include <string.h>

#include "3DES.h"

int main(int argc, char**argv) {

//83, 97, 98, 71, 97, 110, 100, 97 
	char* keyString1 = "SabGanda";
	char key[8];

	//72, 97, 105, 33, 80, 97, 114, 68
	char* keyString2 = "Hai!ParD";
	char key2[8];

	//97, 110, 100, 104, 97, 72, 97, 105
	char* keyString3 = "andhaHai";
	char key3[8];

    unsigned char *keyString = "SabGandaHai!ParDandhaHai";
    int keyLength = strlen(keyString);

	//50, 51, 52, 53, 54, 55, 56, 57
	unsigned char* ivString = "2345679";
	unsigned char iv[8] = "2345679";

    unsigned char *clearText = "This is a password";
    int textLength = strlen(clearText);

	int result;

    unsigned char cipherText[255] = {0};
    int cipherLength = strlen(cipherText);

    result = des3_cbc_encrypt(cipherText, clearText, textLength, keyString, keyLength, iv);
    result = des3_cbc_decrypt(clearText, cipherText, cipherLength, keyString, keyLength, iv);

    return 0;
}