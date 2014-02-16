#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n and now a line why you say \? because I say\n", age);
  printf("I am %d inches tall.\n", height);
  printf("Here's a backslash \\ Behold and don't tremble\n");
  printf("\"how do you have double quotes, well lets try\"\n");
  printf("And whats a vertical tab \v Well lets find out.\n");
  printf("Lets try that again 2x \v Well lets\v find out.\n");
  printf("%c", 34);
  
  //printing parentheses using ASCII 
  //http://www.theasciicode.com.ar/ascii-printable-characters/round-brackets-parentheses-ascii-code-40.html

  printf("%c", 40); // printing a " in ASCII
  printf("Hello World");
  printf("%c\"\n", 41);
  printf("Lets make a backslash \\...\n");
  printf("And what does a backspace do\? Lets try text\b...whoa...it actually made text into tex\n");

  return 0;
  
  //Good stuff to know
  /* From http://web.mit.edu/10.001/Web/Course_Notes/c_Notes/tips_printf.html
   * alert (beep) \a
   * backslash  \\
   * backspace  \b
   * carriage return  \r
   * double quote \"
   * formfeed \f
   * horizontal tab \t
   * newline  \n
   * null character \0
   * single quote \'
   * vertical tab \v
   * question mark  \?
   */
}
