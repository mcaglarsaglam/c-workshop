
#include <stdio.h>
#include <stdlib.h>

float fourtransactions(float A1, float A2, char S1)
{

  if (S1 == '+')
  {

    return A1 + A2;
  }
  else if (S1 == '-')
  {

    return A1 - A2;
  }
  else if (S1 == '*')
  {

    return A1 * A2;
  }
  else if (S1 == '/')
  {

    return A1 / A2;
  }
  else
  {

    printf("you entered the wrong operator");
  }
}

main()
{

  // Klavyeden iki tamsayının toplamını,çarpımını,bölümünüve farkını
  // gerçekleştiren C programını foksiyon kullanmadan ve kullanarak yazınız

  float A1, A2;
  char S1;

  printf("Which Islam do you want to do? (+,-,*,/) \n");
  scanf("%c", &S1);

  printf(" Please enter 2 numbers \n");
  scanf("%f%f", &A1, &A2);

  printf("result of the transaction %.2f", fourtransactions(A1, A2, S1));

  return 0;
}