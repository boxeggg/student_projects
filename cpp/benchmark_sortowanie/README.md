# Benchmark Sortowanie

## Opis ogólny
Poniższy zestaw testów ma na celu porównanie wydajności dwóch różnych algorytmów sortowania: **Quick Sort** oraz **Bubble Sort**.
## Struktura testów

Testy składają się z dwóch głównych bloków:
1. **Quick Sort Benchmark** - Test sortowania przy pomocy algorytmu Quick Sort.
2. **Bubble Sort Benchmark** - Test sortowania przy pomocy algorytmu Bubble Sort.
## Test: `BenchmarkTest, QuickSortBenchmark`

### Cel:
Celem tego testu jest zmierzenie czasu wykonania algorytmu Quick Sort na wektorze o wielkości 10,000 elementów.

### Platforma testowa
- C++ w Wersji 11.4.0
- System ubuntu 11.4.0
- Oracle VirtualBox
- Intel i3 10100
### Kroki:
1. Inicjalizacja wektora `vec` o rozmiarze 10,000.
2. Wypełnienie wektora losowymi wartościami przy użyciu funkcji `std::generate` oraz generatora `std::rand()`.
3. Rozpoczęcie pomiaru czasu przy pomocy `std::chrono::high_resolution_clock::now()`.
4. Wywołanie funkcji `quickSort` na wektorze.
5. Zakończenie pomiaru czasu oraz obliczenie upływu czasu.
6. Wyświetlenie wyniku w sekundach.

### Przykładowe wyniki
| Algorytm    | Czas wykonania   |
|-------------|------------------|
| Quicksort   | 0.00201641 s     |
| Bubblesort  | 0.669605 s       |

## Kod źródłowy

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>
#include "../cwiczenie1/main.cpp" //bubble sort
#include "../cwiczenie2/main.cpp" //quick sort

// Test wydajności sortowania QuickSort
TEST(BenchmarkTest, QuickSortBenchmark) {
    std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
    std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
    std::generate(vec.begin(), vec.end(), std::rand);

    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();

	//bubbleSort(vec);
	quickSort(vec, 0, vec.size() - 1);

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania: " << elapsed_seconds.count() << "s\n";
}

TEST(BenchmarkTest, BubbleSortBenchmark) {
    std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
    std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
    std::generate(vec.begin(), vec.end(), std::rand);

    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();

	bubbleSort(vec);
	//quickSort(vec, 0, vec.size() - 1);

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania: " << elapsed_seconds.count() << "s\n";
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```

