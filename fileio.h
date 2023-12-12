#ifndef FILEIO_H_INCLUDED
#define FILEIO_H_INCLUDED

// Function to read text from a file
int readFromFile(const char *fileName);

// Function to write text to a file
int writeToFile(const char *fileName, const char *text);

// Function to check if a file exists
int fileExists(const char *fileName);

#endif


#endif // FILEIO_H_INCLUDED
