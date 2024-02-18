/*
 * functions.h
 *
 *  Created on: Feb 15, 2024
 *      Author: Benas
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include "flash_alphabet.h"

extern uint8_t errState;

char getAlphabetChar(char firstChar, char secondChar) {
    // Convert characters to corresponding numbers

    int firstNum = firstChar - '0'; // Convert from character to integer
    int secondNum = secondChar - '0';

    // Calculate the character order
    int charOrder = (firstNum * 10) + secondNum;

    // Check if the character order is within the valid range (1 to 26)
    if (charOrder < 1 || charOrder > 26) {
    	fprintf(stderr, "Character out of range.\n");
    	errState = 1;
        return '\0'; // Return null character for invalid input
    }

    // Calculate the ASCII code for the character
    char alphabetChar = 'A' + charOrder - 1;

    return alphabetChar;
}

char getNumChar(char firstChar, char secondChar) {

    // Check if the character order is within the valid range (ASCII 48 to 57)
    if (secondChar < 48 || secondChar > 57) {
    	fprintf(stderr, "Number out of range.\n");
    	errState = 2;
        return '\0'; // Return null character for invalid input
    }
    // Return the second char for the character
    return secondChar;
}
char* addCharToString(const char *str, char c) {
    // Get the length of the original string
    size_t len = strlen(str);
    // Allocate memory for the new string which includes the additional character and the null terminator
    char *newStr = (char *)malloc((len + 2) * sizeof(char));
    if (newStr == NULL) {
    	fprintf(stderr, "Memory allocation failed.\n");
    	errState = 5;
    }
    // Copy the original string to the new string
    strcpy(newStr, str);
    // Add the new character to the end of the new string
    newStr[len] = c;
    // Add the null terminator to the end
    newStr[len + 1] = '\0';
    return newStr;
}

void clearString(char *str) {
    // Iterate through the string and set each character to null terminator
    for (int i = 0; i < strlen(str); i++) {
        str[i] = '\0';
    }
}

void clearLastCharacter(char *str) {
    // Get the length of the string
    int len = strlen(str);
    // If the string is empty, there's nothing to clear
    if (len == 0) {
        return;
    }
    // Set the last character of the string to null terminator
    str[len - 1] = '\0';
}

char* createFlashStr(const char *data) {
    char *result = (char *)malloc(sizeof(char)); // Allocate memory for the result string
    result[0] = '\0'; // Initialize the result string to empty
    int i = 0;
    while (data[i] != '\0') {
        if (data[i] == '#' && data[i + 1] >= '0' && data[i + 1] <= '9') {
            // If the current character is a hashtag followed by a number, add the number char to the result
            char numChar = getNumChar(data[i], data[i + 1]);
            result = addCharToString(result, numChar);
            i += 2; // Skip the hashtag and the number
        } else if (data[i] >= '0' && data[i] <= '9' && data[i + 1] >= '0' && data[i + 1] <= '9') {
            // If two consecutive characters are both numbers, treat them as representing a letter char
            char letter = (data[i] - '0') * 10 + (data[i + 1] - '0') + 'A' - 1;
            result = addCharToString(result, letter);
            i += 2; // Skip the two numbers
        } else if (data[i] == '*') {
            // If the current character is '*', add it to the result string
            result = addCharToString(result, '*');
            i++;
        } else {
            // Ignore other characters
            i++;
        }
    }

    return result;
}

void flash(char *str, GPIOx_ODR *pGpiodOutReg){
	for (int i = 0; str[i] != '\0'; i++) {
	       switch(str[i]){
	       case 'A':
	    	   flash_A(pGpiodOutReg);
	    	   break;
	       case 'B':
	    	   flash_B(pGpiodOutReg);
	    	   break;
	       case 'C':
	    	   flash_C(pGpiodOutReg);
	    	   break;
	       case 'D':
	    	   flash_D(pGpiodOutReg);
	    	   break;
	       case 'E':
	    	   flash_E(pGpiodOutReg);
	    	   break;
	       case 'F':
	    	   flash_F(pGpiodOutReg);
	    	   break;
	       case 'G':
	    	   flash_G(pGpiodOutReg);
	    	   break;
	       case 'H':
	    	   flash_H(pGpiodOutReg);
	    	   break;
	       case 'I':
	    	   flash_I(pGpiodOutReg);
	    	   break;
	       case 'J':
	    	   flash_J(pGpiodOutReg);
	    	   break;
	       case 'K':
	    	   flash_K(pGpiodOutReg);
	    	   break;
	       case 'L':
	    	   flash_L(pGpiodOutReg);
	    	   break;
	       case 'M':
	    	   flash_M(pGpiodOutReg);
	    	   break;
	       case 'N':
	    	   flash_N(pGpiodOutReg);
	    	   break;
	       case 'O':
	    	   flash_O(pGpiodOutReg);
	    	   break;
	       case 'P':
	    	   flash_P(pGpiodOutReg);
	    	   break;
	       case 'Q':
	    	   flash_Q(pGpiodOutReg);
	    	   break;
	       case 'R':
	    	   flash_R(pGpiodOutReg);
	    	   break;
	       case 'S':
	    	   flash_S(pGpiodOutReg);
	    	   break;
	       case 'T':
	    	   flash_T(pGpiodOutReg);
	    	   break;
	       case 'U':
	    	   flash_U(pGpiodOutReg);
	    	   break;
	       case 'V':
	    	   flash_V(pGpiodOutReg);
	    	   break;
	       case 'W':
	    	   flash_W(pGpiodOutReg);
	    	   break;
	       case 'X':
	    	   flash_X(pGpiodOutReg);
	    	   break;
	       case 'Y':
	    	   flash_Y(pGpiodOutReg);
	    	   break;
	       case 'Z':
	    	   flash_Z(pGpiodOutReg);
	    	   break;
	       case '1':
	    	   flash_1(pGpiodOutReg);
	    	   break;
	       case '2':
	    	   flash_2(pGpiodOutReg);
	    	   break;
	       case '3':
	    	   flash_3(pGpiodOutReg);
	    	   break;
	       case '4':
	    	   flash_4(pGpiodOutReg);
	    	   break;
	       case '5':
	    	   flash_5(pGpiodOutReg);
	    	   break;
	       case '6':
	    	   flash_6(pGpiodOutReg);
	    	   break;
	       case '7':
	    	   flash_7(pGpiodOutReg);
	    	   break;
	       case '8':
	    	   flash_8(pGpiodOutReg);
	    	   break;
	       case '9':
	    	   flash_9(pGpiodOutReg);
	    	   break;
	       case '0':
	    	   flash_0(pGpiodOutReg);
	    	   break;
	       case '*':
	       	   word_delay();
	       	   break;
	       default:
	    	   fprintf(stderr, "Unknown character case in switch.\n");
	    	   errState = 4;
	       }
	    }
}
#endif /* FUNCTIONS_H_ */
