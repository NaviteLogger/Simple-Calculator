/*
 *Marek Kacprzak, WCY22IY3S1
 *Zajecia: 22.11.2022, rozliczenie: 29.11.2022 23:59
 *Temat: Zadanie 1 - Kalkulator dwoch zmiennych
 */

#include <stdio.h>

int main()
{
    int a = 1; // deklaracja pierwszej zmiennej do przyjecia od uzytkownika
    int b = 1; // deklaracja drugiej zmiennej do przyjecia od uzytkownika
    float wynikDzialania = 0;
    char odpowiedzUzytkownika = 0; // deklaracja zmiennej oznaczajacej wybor uzytkownika
    int temp = 1;                  // zmienna do zapetlenia aplikacji kalkulator

    while (temp = 1)
    {
        printf("Kalkulator liczb calkowitych:\n\t a [dzialanie] b = [wynik]\n\nWybierz dzialanie: [1] +   [2] -   [3] *   [4] /\t[0] zakoncz program\n\n> ");
        scanf(" %c", &odpowiedzUzytkownika); // pobranie od uzytkownika zmiennej odpowiadajacej jego wyborowi

        switch (odpowiedzUzytkownika) // struktura switch-case dla czterech dzialan, wyjscia z programu oraz nieobslugiwanego wejscia
        {
        case '1':
        {
            printf("a = ");
            scanf("%i", &a);
            printf("b = ");
            scanf("%i", &b);
            wynikDzialania = a + b;
            printf("Obliczenie to: \n");
            printf("%i + %i = %.0f\n\n", a, b, wynikDzialania);
        }
        break;
        case '2':
        {
            printf("a = ");
            scanf("%i", &a);
            printf("b = ");
            scanf("%i", &b);
            wynikDzialania = a - b;
            printf("Obliczenie to: \n");
            printf("%i - %i = %.0f\n\n", a, b, wynikDzialania);
        }
        break;
        case '3':
        {
            printf("a = ");
            scanf("%i", &a);
            printf("b = ");
            scanf("%i", &b);
            wynikDzialania = a * b;
            printf("Obliczenie to: \n");
            printf("%i * %i = %.0f\n\n", a, b, wynikDzialania);
        }
        break;
        case '4':
        {
            printf("a = ");
            scanf("%i", &a);
            while (1) // sprawdzenie, czy uzytkownik nie probuje dzielic przez zero. W takim wypadku zapytac ponownie
            {
                printf("b = ");
                scanf("%i", &b);

                if (b != 0)
                {
                    break; // po wprowadzeniu przez uzytkownika liczby roznej od zera petla konczy sie
                }
                else
                {
                    printf("Nie mozna dzielic przez zero!\n");
                }
            }
            wynikDzialania = (float)a / (float)b; // (float)nazwaZmiennej potrzebne to dzielenia zmiennych typu integer
            printf("Obliczenie to: \n");
            printf("%i / %i = %g\n\n", a, b, wynikDzialania); // %g - usuniecie zbednych zer na koncu liczby
        }
        break;
        case '0': // przypadek '0' - wyjscie z programu
        {
            printf("Ok, koncze program");
            return 0; // zakonczenie programu
        }
        break;
        default: // przypadek nieobslugiwany - uzytkownik zostanie poproszony o ponowny wybor operacji matematycznej
        {
            printf("\nNie rozpoznano numeru dzialania, sprobuj ponownie:\n");
        }
        break;
        }
    }
    return 0;
}