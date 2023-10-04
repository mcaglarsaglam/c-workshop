
#include <stdio.h>
#include <stdlib.h>
#define TAX_BOOK 4.0
#define TAX_FOOD 5.6
#define TAX_LUXURY 19.6
#define BOOK 0
#define BASICFOOD 1
#define LUXURY 2

int main()
{

  // Üç adet ürünümüz var:Kitap,Temel Gıda ve lüks
  // Devlet her üç gruba farklı oranlarda vergi uyguluyor. Kitap
  // için%4.0,temelgıda için %5.6,lüks ürün gammı için %19.6
  // Her ürünün bir kodu var:Kitabın kodu 0,temel gıdanın kodu 1,lüks ürünün
  // kodu 2 Kullanıcıdan istediğiniz ürünün kodunu ve fiyatını isteyen daha
  // sonra Switch case yapısını kullanarak son fiyatı ekrana bastıran bir C
  // programı yazınız.Aynı programı if else yapısı kullanarak yazınız.

  int code;
  float price;

  printf("Please enter the price and code of the product\n");
  scanf("%d", &code);
  scanf("%f", &price);

  printf("selling price of the product:");

  switch (code)
  {
  case BOOK:
    printf("price %f", price + price * TAX_BOOK / 100);
    break;
  case BASICFOOD:
    printf("price %f", price + price * TAX_FOOD / 100);
    break;
  case LUXURY:
    printf("price %f", price + price * TAX_LUXURY / 100);
    break;
  default:
    printf("Please enter the correct code");
  }

  return 0;
}