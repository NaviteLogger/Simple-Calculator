#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int odpowiedzUzytkownika = 0;                                                  // deklaracja zmiennej do wykorzystania przy zczytywaniu danych od urzytkownika
//     printf("Jak bardzo chcesz programowac?\nOcen swoje checi w skali <1-10>\n >"); // zapytanie użytkownika
//     scanf("%i", &odpowiedzUzytkownika);                                            // zczytanie wartości zmiennej od użytkownika
//     printf("\n%i/10 - tak bardzo chce programowac!", odpowiedzUzytkownika);        // wyświetlenie odpowiedzi uzyskanej od użytkownika
//     return 0;
// }

// int main()
// {
//     int haslo = 5745;
//     int odpowiedzUżytkownika = 0000;
//     printf("Podaj haslo: >");
//     scanf("%int", &odpowiedzUżytkownika);

//     while (odpowiedzUżytkownika != haslo)
//     {
//         printf("Zle, sprobuj jeszcze raz >");
//         scanf("%int", &odpowiedzUżytkownika);
//     }
//     printf("Podales poprawne haslo!\n");
//     return 0;
// }

// int main()
// {
//     int haslo = 5745;
//     int odpowiedzUżytkownika = 0000;
//     do
//     {
//         printf("Podaj haslo: > ");
//         scanf("%int", &odpowiedzUżytkownika);
//     } while (odpowiedzUżytkownika != haslo);

//     printf("Podales poprawne haslo!\n");
//     return 0;
// }

// int main()
// {
//     int wejscieUzytkownika = 1;
//     int drugieWejscieUzytkownika = 1;
//     double wynikDzielenia = 0;

//     printf("Podaj liczbe, ktora bedziemy dzielic: > ");
//     scanf("%i", &wejscieUzytkownika);
//     printf("Podaj druga liczbe, przez ktora bedziemy dzielic: > ");
//     scanf("%i", &drugieWejscieUzytkownika);

//     while (drugieWejscieUzytkownika == 0)
//     {
//         printf("Nie mozna dzielic przez 0!\n");
//         printf("Podaj druga liczbe, przez ktora bedziemy dzielic: > ");
//         scanf("%i", &drugieWejscieUzytkownika);
//     }

//     wynikDzielenia = (double)wejscieUzytkownika / (double)drugieWejscieUzytkownika;
//     printf("Wynik dzielenia %i przez %i to: %f", wejscieUzytkownika, drugieWejscieUzytkownika, wynikDzielenia);

//     return 0;
// }

// int main()
// {
//     int a = 1;
//     int b = 1;
//     float wynikDzialania = 0;
//     char odpowiedzUzytkownika = 0;
//     int temp = 1;

//     while (temp = 1)
//     {
//         printf("Kalkulator liczb całkowitych:\n\t a [dzialanie] b = [wynik]\n\nWybierz dzialanie: [1] +   [2] -   [3] *   [4] /\t[0] zakoncz program\n\n> ");
//         scanf(" %c", &odpowiedzUzytkownika);

//         switch (odpowiedzUzytkownika)
//         {
//         case '1':
//         {
//             printf("a = ");
//             scanf("%i", &a);
//             printf("b = ");
//             scanf("%i", &b);
//             wynikDzialania = a + b;
//             printf("Obliczenie to: \n");
//             printf("%i + %i = %.0f\n\n", a, b, wynikDzialania);
//         }
//         break;
//         case '2':
//         {
//             printf("a = ");
//             scanf("%i", &a);
//             printf("b = ");
//             scanf("%i", &b);
//             wynikDzialania = a - b;
//             printf("Obliczenie to: \n");
//             printf("%i - %i = %.0f\n\n", a, b, wynikDzialania);
//         }
//         break;
//         case '3':
//         {
//             printf("a = ");
//             scanf("%i", &a);
//             printf("b = ");
//             scanf("%i", &b);
//             wynikDzialania = a * b;
//             printf("Obliczenie to: \n");
//             printf("%i * %i = %.0f\n\n", a, b, wynikDzialania);
//         }
//         break;
//         case '4':
//         {
//             printf("a = ");
//             scanf("%i", &a);
//             while (1)
//             {
//                 printf("b = ");
//                 scanf("%i", &b);

//                 if (b != 0)
//                 {
//                     break;
//                 }
//                 else
//                 {
//                     printf("Nie mozna dzielic przez zero!\n");
//                 }
//             }
//             wynikDzialania = (float)a / (float)b;
//             printf("Obliczenie to: \n");
//             printf("%i / %i = %g\n\n", a, b, wynikDzialania);
//         }
//         break;
//         case '0':
//         {
//             printf("Ok, kończę program");
//             return 0;
//         }
//         break;
//         default:
//         {
//             printf("\nNie rozpoznano numeru dzialania, sprobuj ponownie:\n");
//         }
//         break;
//         }
//     }
//     return 0;
// }