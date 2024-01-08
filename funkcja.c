#include <stdio.h>
#include <string.h>

#define LINE_LENGTH 50
#define CONSOLE_WIDTH 80

void printLine(const char* text, int lineNum) {
    if (lineNum % 2 == 0) {
        // Drukowanie linii wyrównanej do prawej
        int space = CONSOLE_WIDTH - LINE_LENGTH;
        printf("%*s\n", space + LINE_LENGTH, text);
    } else {
        // Drukowanie linii wyrównanej do lewej
        printf("%s\n", text);
    }
}

int main() {
    // Przykładowe linie tekstu
    const char* lines[5] = {
        "Linia pierwsza z tekstem o dlugosci piecdziesieciu znakow.",
        "Druga linia, rowniez z dokladnie piecdziesiecioma znakami.",
        "To jest trzecia linia, takze majaca piecdziesiat znakow.",
        "Czwarta w kolejnosci linia z piecdziesiecioma znakami.",
        "Ostatnia, piata linia, z dokladnie piecdziesiecioma znakami."
    };

    for (int i = 0; i < 5; ++i) {
        printLine(lines[i], i + 1);
    }

    return 0;
}
