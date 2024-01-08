#include <stdio.h>
#include <windows.h>

// Funkcja do odczytywania szerokości konsoli
int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int width;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    return width;
}

int main() {
    char text[] = "Tekst do wyswietlenia";
    int consoleWidth = getConsoleWidth(); // Pobierz aktualną szerokość konsoli

    // Wyśrodkuj tekst w konsoli
    printf("%*s\n", (consoleWidth + strlen(text)) / 2, text);

    return 0;
}
