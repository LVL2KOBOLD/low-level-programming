#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char* message) {
    int i;
    int length = strlen(message);
    char saurianMapping[52] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    for (i = 0; i < length; i++) {
        if (isalpha(message[i])) {
            int index;
            if (isupper(message[i])) {
                index = message[i] - 'A' + 26;
            } else {
                index = message[i] - 'a';
            }
            if (index >= 0 && index < 52 && saurianMapping[index] != '\0') {
                message[i] = saurianMapping[index];
            }
        }
    }
}

void decrypt(char* message) {
    int i;
    int length = strlen(message);
    char saurianMapping[52] = {
        'u', 'r', 's', 't', 'o', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    for (i = 0; i < length; i++) {
        if (isalpha(message[i])) {
            int index;
            if (isupper(message[i])) {
                index = message[i] - 'A' + 26;
            } else {
                index = message[i] - 'a';
            }
            if (index >= 0 && index < 52 && saurianMapping[index] != '\0') {
                message[i] = saurianMapping[index];
            }
        }
    }
}

int main() {
    char message[100];
    printf("Enter the message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove trailing newline character
    encrypt(message);
    printf("Encrypted message: %s\n", message);
    decrypt(message);
    printf("Decrypted message: %s\n", message);
    return 0;
}
