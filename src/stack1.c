#include <stdio.h>

// http://community.coresecurity.com/~gera/InsecureProgramming/stack1.html
//
int main(int argc, const char *argv[])
{
  int cookie;
  char buf[80];
  printf("buf: %08x cookie: %08x\n", &buf, &cookie);
  gets(buf);

  if (cookie == 0x41424344) {
    printf("you win!\n");
  }
  
  return 0;
}
