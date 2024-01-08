#include <stdio.h>

int main() {
    char text[] = "Tekst do wyswietlenia";
    int width = 120; // Szerokość pola wyświetlenia

    printf("%*s\n", width, text);

    return 0;
}