#include <windows.h>
#include <stdio.h>
#include <string.h>

int main() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns;
    const char* text = "Ten tekst ma dokladnie piecdziesiat znakow!";
    int text_length = strlen(text);

    // Pobierz uchwyt do standardowego wyjścia konsoli
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    // Pobierz informacje o buforze ekranu konsoli
    if (!GetConsoleScreenBufferInfo(hStdout, &csbi)) {
        printf("GetConsoleScreenBufferInfo failed\n");
        return 1;
    }

    // Oblicz liczbę kolumn (szerokość w znakach)
    columns = csbi.dwSize.X;

    // Wyświetl informacje o szerokości konsoli
    printf("Szerokosc konsoli: %d znakow\n\n", columns);

    // Wyrównaj tekst do prawej strony
    if (columns > text_length) {
        printf("%*s\n", columns, text);
    } else {
        printf("%s\n", text); // W przypadku, gdy tekst jest dłuższy niż szerokość konsoli
    }

    return 0;
}
