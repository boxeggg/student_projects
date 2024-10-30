# Dokumentacja projektu

## Nazwa projektu
Schodki

## Opis
Projekt ma na celu obliczenie maksymalnej długości pojedynczego schodka na podstawie całkowitej długości klatki schodowej oraz jej wysokości. Użytkownik podaje długość klatki schodowej oraz wysokość klatki schodowej, a program oblicza i zwraca maksymalną możliwą długość pojedynczego schodka, zakładając optymalne nachylenie schodów.

## Użycie
1. Użytkownik wprowadza całkowitą długość oraz wysokość klatki schodowej.
2. Program oblicza maksymalną długość pojedynczego schodka przy optymalnym nachyleniu i wyświetla wynik.

## Wymagania
- Kompilator C++ (np. g++, Clang)
- Obsługa standardu C++11 lub nowszego

## Wartości przyjęte w projekcie

1. **Maksymalna głębokość schodka**: 
   - Maksymalna szerokość stopnia, czyli głębokość, wynosi **35 cm**. Jest to wartość przyjęta jako górny limit, której projekt nie przekracza. 
   - Dla większości typów schodów (np. w budynkach mieszkalnych i komercyjnych) zapewnia ona wygodę przy wchodzeniu i schodzeniu.

2. **Minimalna wysokość stopnia**:
   - Minimalna wysokość stopnia przyjęta w projekcie to **12 cm**, co zapewnia optymalne nachylenie i ułatwia poruszanie się po schodach.

3. **Wzór proporcji schodów**:
   - Zgodnie z popularną zasadą, wysokość i głębokość stopnia są tak dobrane, aby **2 × wysokość stopnia + głębokość ≈ 63 cm**. Reguła ta została przyjęta, by zapewnić naturalny rytm kroków na schodach.

## Struktura projektu
- **main.cpp**: Plik główny główną funkcję programu.
- **klatka.h**: Klasa reprezentująca klatke schodową
- **kreator_klatek.h**: Klasa tworząca i zarządzająca instancjami klatek schodowych

# Dokumentacja klas projektu

## Klasa `Klatka`

### Opis
Klasa `Klatka` reprezentuje klatkę schodową i przechowuje informacje na temat długości oraz wysokości klatki. Umożliwia także obliczenie maksymalnej długości schodka na podstawie podanych wymiarów.

### Pola
- `double dlugosc`: Przechowuje całkowitą długość klatki schodowej.
- `double wysokosc`: Przechowuje całkowitą wysokość klatki schodowej.

### Metody
- **Konstruktor** `Klatka(double dlugosc, double wysokosc)`: Inicjalizuje obiekt `Klatka` z podaną długością i wysokością klatki schodowej.
- `double obliczMaxDlugoscSchodka() const`: Oblicza i zwraca maksymalną długość schodka na podstawie długości i wysokości klatki, wykorzystując twierdzenie Pitagorasa.
- `void wyswietlInformacje() const`: Wyświetla informacje o klatce schodowej, w tym długość, wysokość i maksymalną długość schodka.

---

## Klasa `KreatorKlatek`

### Opis
Klasa `KreatorKlatek` zarządza instancjami klatek schodowych (`Klatka`), umożliwiając ich tworzenie oraz przechowywanie w kolekcji. Klasa pełni rolę fabryki klatek schodowych i zapewnia wygodne operacje na grupach klatek.

### Pola
- `std::vector<Klatka> klatki`: Wektor przechowujący obiekty `Klatka`, reprezentujące różne klatki schodowe.

### Metody
- **Konstruktor domyślny** `KreatorKlatek()`: Inicjalizuje pustą kolekcję klatek schodowych.
- `void dodajKlatke(double dlugosc, double wysokosc)`: Tworzy nowy obiekt `Klatka` z podanymi wymiarami i dodaje go do kolekcji `klatki`.
- `void wyswietlWszystkieKlatki() const`: Wyświetla informacje o wszystkich klatkach schodowych w kolekcji, używając metody `wyswietlInformacje` każdej instancji `Klatka`.
- `size_t liczbaKlatek() const`: Zwraca liczbę klatek schodowych przechowywanych w kolekcji `klatki`.


---
