#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void encryptFile(const char *inputFile, const char *outputFile, int key);
void decryptFile(const char *inputFile, const char *outputFile, int key);

int main() {
    int choice, key;
    char inputFile[100], outputFile[100];

    printf("File Encryption and Decryption\n");
    printf("1. Encrypt a file\n");
    printf("2. Decrypt a file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the input file name: ");
    scanf("%s", inputFile);
    printf("Enter the output file name: ");
    scanf("%s", outputFile);
    printf("Enter the key (integer): ");
    scanf("%d", &key);

    if (choice == 1) {
        encryptFile(inputFile, outputFile, key);
    } else if (choice == 2) {
        decryptFile(inputFile, outputFile, key);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

// Encrypt file function
void encryptFile(const char *inputFile, const char *outputFile, int key) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (!inFile || !outFile) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(ch + key, outFile); // Simple Caesar Cipher
    }

    printf("File encrypted successfully.\n");

    fclose(inFile);
    fclose(outFile);
}

// Decrypt file function
void decryptFile(const char *inputFile, const char *outputFile, int key) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "w");

    if (!inFile || !outFile) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(ch - key, outFile); // Reverse Caesar Cipher
    }

    printf("File decrypted successfully.\n");

    fclose(inFile);
    fclose(outFile);
}
