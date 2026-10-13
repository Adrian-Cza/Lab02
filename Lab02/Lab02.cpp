#include <iostream>

using namespace std;

int main()
{
    // Zadanie 1
    
    //  Zmiana 1 (11 elementow wyswietlanych)
    /*
        for (int i = 0; i <= 10; i++) {
            cout << i << endl;
        }
    */
    //  Zmiana 2
    /*
        for (int i = 5; i <= 7; i++) {
            cout << i << endl;
        }

        for (int i = 5; i < 7; i++) {
            cout << i << endl;
        }

    */
    //  Zmiana 3
    /*
        for (int i = 0; i <= 10; i+=2) {
            cout << i << endl;
        }
    */
    //  Zmiana 4
    /*
        for (int i = 10; i >= 0; i--) {
            cout << i << endl;
        }
    */

    // Zadania 2, 3, 5

    /*
        int fahr, celsius;
        int start, krok, limit;

        start = 0;
        limit = 200;
        krok = 20;

        fahr = start;

        while (fahr <= limit) {
            celsius = 5 * (fahr - 32) / 9;
            cout << fahr << "\t" << celsius << endl;
            fahr += krok;
        }

        for (fahr = 0.0; fahr <= limit; fahr += krok) {
            float celsius = (5.0 / 9.0) * (fahr - 32.0);
            cout << fahr << "\t" << celsius << endl;
        }
    
        for (fahr = 0.0; fahr <= limit; fahr += krok) {
            float celsius = (5 / 9) * (fahr - 32.0);
            printf("%3.0f %6.1f \n", fahr, celsius);
        }
    */
    
    //  Zadanie 6
    /*
            int fahr, celsius;
        int start, krok, limit;

        start = 0;
        cout << "Podaj limit: ", cin >> limit, cout << "\nPodaj krok: ", cin >> krok;

        fahr = start;

        for (fahr = 0.0; fahr <= limit; fahr += krok) {
            float celsius = (5.0 / 9.0) * (fahr - 32.0);
            cout << fahr << "\t" << celsius << endl;
        }
    */

}