#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *file;
  char *buffer;
  unsigned long fileLen;

  // Open file
  file = fopen("example.txt", "rb");
  if (!file) {
    fprintf(stderr, "Unable to open file %s", argv[1]);
    return 1;
  }

  // Get file length
  fseek(file, 0, SEEK_END);
  fileLen=ftell(file);
  fseek(file, 0, SEEK_SET);

  // Allocate memory
  buffer=(char *)malloc(fileLen+1);
  if (!buffer) {
    fprintf(stderr, "Memory error!");
    fclose(file);
    return 1;
  }

  // Read file contents into buffer
  fread(buffer, fileLen, 1, file);
  fclose(file);

  // Do something with the contents of the file here

  // Free the memory that was allocated
  free(buffer);

  return 0;
}