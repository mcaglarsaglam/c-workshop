
#include <stdio.h>

main()
{

  // Switch Case Kullanarak 4 İşlem

  char op;

  printf("Please login to the operator.\n");
  scanf("%c", &op);

  float a, b;

  printf("Please enter 2 numbers.\n");
  scanf("%f%f", &a, &b);

  switch (op)
  {
  case '+':
    printf("%.2f+%.2f=%.2f", a, b, a + b);
    break;
  case '-':
    printf("%.2f-%.2f=%.2f", a, b, a - b);
    break;
  case '/':
    printf("%.2f/%.2f=%.2f", a, b, a / b);
    break;
  case '*':
    printf("%.2f*%.2f=%.2f", a, b, a * b);
    break;
  }
  return 0;
}