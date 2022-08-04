// Ejercicio 5
// contar la cantidad de chars en un stdin
// REPLIT codigo online
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int char_count = 0;
  int line_count = 0;
  int word_count = 0;
  int in_word = 0;
  while((c = getchar()) != EOF)
    if (c != '\n' && c != '\t' && c != '') {
      in_word = 1;
    } else {
      if (in_word != 0) word_count ++;
      in_word = 0;
    }
    char_count++;
    if (c == '\n') {
      line_count++;
    }
    fclose(fp);
    // while (scanf("%s", &descart) != EOF) {
      // word_count++;
  printf("Cantidad de chars: %d\n", char_count);
  printf("Cantidad de lines: %d\n", line_count);
  printf("Cantidad de words: %d\n", word_count);
  return 0;
}
