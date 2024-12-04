# **File Encryption and Decryption in C**

## **Overview**
This project is a simple **File Encryption and Decryption** program written in C. It allows users to:
1. Encrypt the contents of a file using a basic encryption algorithm (Caesar Cipher).
2. Decrypt the encrypted file back to its original form.

---

## **Features**
- Encrypt any text file with a user-defined key.
- Decrypt the file using the same key.
- Easy-to-understand code structure.
- Includes file handling and error checks.

---

## **How It Works**
1. **Encryption**:  
   Each character in the input file is shifted by a user-defined key value. For example, if the key is 3, the letter `A` becomes `D`.

2. **Decryption**:  
   Each character in the encrypted file is shifted back using the same key, restoring the original text.

---

## **How to Use**

### **1. Compile the Code**
Use a C compiler (like `gcc`) to compile the code:
```bash
gcc file_encryption.c -o file_encryption
```

### **2. Run the Program**
Execute the compiled program:
```bash
./file_encryption
```

### **3. Follow the Prompts**
- Choose whether to encrypt or decrypt a file.
- Provide:
  - Input file name.
  - Output file name.
  - Encryption/Decryption key.

### **4. View Results**
- After encryption, the output file will contain the scrambled text.
- After decryption, the output file will contain the original text.

---

## **Example**
### **Input File (`input.txt`):**
```
Hello World!
```

### **Encryption**
- Key: `3`
- Output File (`encrypted.txt`): 
```
Khoor Zruog!
```

### **Decryption**
- Key: `3`
- Output File (`decrypted.txt`): 
```
Hello World!
```

---

## **Code Overview**
### **Key Functions**
1. **`encryptFile()`**
   - Reads the input file.
   - Applies Caesar Cipher (shifts each character by the key).
   - Writes the encrypted text to the output file.

2. **`decryptFile()`**
   - Reads the encrypted file.
   - Reverses the shift applied during encryption.
   - Writes the decrypted text to the output file.

3. **`main()`**
   - Displays a menu to the user.
   - Handles user input and calls the appropriate function.

---

## **Limitations**
- Works only with text files.
- The encryption is not highly secure (simple Caesar Cipher).
- Does not handle binary files (e.g., images, videos).

---

## **Possible Improvements**
1. Implement a more secure algorithm like XOR or AES.
2. Add support for binary file encryption.
3. Allow key to be a string instead of a number.
4. Include file existence checks and better error handling.

---