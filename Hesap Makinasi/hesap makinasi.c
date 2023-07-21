#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>

int main() 
{

    setlocale(LC_ALL, "Turkish");

    float a,b;
    char op;
    printf("Lütfen işlem yapmak istediğiniz operotoru giriniz\n");
    scanf("%c", &op);

    printf("Lütfen işlem yapmak istediğiniz rakamları giriniz\n");
    scanf("%f %f",&a, &b);

   switch (op)
    {
    case '+':printf("%2.f + %2.f = %2.f", a, b, a + b);
        break;
    case '-':printf("%2.f - %2.f = %2.f", a, b, a - b);
        break;
    case '*':printf("%2.f * %2.f = %2.f", a, b, a * b);
        break;
    case '/':printf("%2.f / %2.f = %2.f", a, b, a / b);
        break;
    }



}