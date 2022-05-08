#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int shri(int n)

{

  srand(time(NULL));

  return rand() % n;
}

void name()

{
  printf("whats your name\n\n");

  char T[20];

  scanf("%s", T);

  printf("welcome %s\n\n", T);
}

int main()

{
  int s;
  int a;
  int c;

  printf(" Hi ,Welcome to play rock,paper and sccissor\n");

  name();

  printf("choose 1 >>for rock\n");

  printf("choose 2 >>for paper\n");

  printf("choose 3 >>for sccisor\n");

  printf("*****enter 0 to stop*****\n");

  printf("lets start😃\n \n");

again:

Fuck:

  printf("enter no.\n");

  scanf("%d", &c);

  if (c == 0)

  {
    goto end;
  }

  if (c == 1)

  {
    printf("you:rock\n ");
  }

  else if (c == 2)

  {
    printf("you:paper\n ");
  }

  else if (c == 3)

  {
    printf("you:sccisor\n");
  }

  else

  {
    printf("plz,type only from 1,2 and 3\n");

    goto again;
  }

  printf("me : ");

  s = shri(3);

  printf("", s);

  if (s == 0)

  {
    printf("rock\n");
  }

  else if (s == 1)

  {
    printf("paper\n");
  }

  else if (s == 2)

  {
    printf("sccisor\n");
  }

  else
  {
    printf("sorry there is some error");
  }

  if (c == 1 && s == 0)

    printf("<<tie😬>>\n\n\n");

  else if (c == 1 && s == 1)

    printf("<<you lose😁>>\n\n\n");

  else if (c == 1 && s == 2)

    printf("<<you win😕>>\n\n\n");

  else if (c == 2 && s == 0)

    printf("<<you win😕>>\n\n\n");

  else if (c == 2 && s == 1)

    printf("<<tie😬>>\n\n\n");

  else if (c == 2 && s == 2)

    printf("<<you lose😁>>\n\n\n");

  else if (c == 3 && s == 0)

    printf("<<you lose😁>>\n\n\n");

  else if (c == 3 && s == 1)

    printf("<<you win😕>>\n\n\n");

  else if (c == 3 && s == 2)

    printf("<<tie😬>>\n\n\n");

  goto Fuck;

end:

  return 0;
}