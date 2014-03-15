#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
  int i = 0;
  for(i = 0; i < argc; i++){
    print_letters(argv[i]);
  }
}

void print_letters(char arg[])
{
  int i = 0;

  for(i=0; arg[i] != '\0'; i++){
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d", ch, ch); // character followed by signed decimal integer representation
    }
  }

  printf("\n");
}

int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch); // true or false, it needs to be a character or a blank to proceed
}

int main(int argc, char *argv[])
{
  printf("this is the number or argc, or words given as input %d\n", argc);
  print_arguments(argc, argv);
  return 0;
}

/*Links explaining argc and argv
 * http://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
 * http://stackoverflow.com/questions/779910/should-i-use-char-argv-or-char-argv-in-c
 *
 */

