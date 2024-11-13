# Dokumentacja projektu

## Nazwa projektu
Schodki

## Opis
Projekt ma na celu obliczenie maksymalnej długości pojedynczego schodka na podstawie całkowitej długości klatki schodowej oraz jej wysokości. Użytkownik podaje długość klatki schodowej oraz wysokość klatki schodowej, a program oblicza i zwraca maksymalną możliwą długość pojedynczego schodka, zakładając optymalne nachylenie schodów.

## Użycie
1. Użytkownik wprowadza całkowitą długość, szerokość oraz wysokość klatki schodowej.
2. Program oblicza głebokość, wysokość oraz ilość stopni, 

## Platforma
- Kompilator C++ (np. g++, Clang)
- Obsługa standardu C++11 lub nowszego

## Wartości przyjęte w projekcie
- Maksymalna wysokość stopnia przyjęta w projekcie to **18 cm**, co zapewnia optymalne nachylenie i ułatwia poruszanie się po schodach.
- Program przyjmuje wartości w cm.


## Struktura projektu
- **main.cpp**: Plik główny główną funkcję programu.
- **klatka.h**: Klasa reprezentująca klatke schodową
- **kreator_klatek.h**: Klasa tworząca i zarządzająca instancjami klatek schodowych


## Założenia 
- Możliwosć tworzenia i zarządzania obiektami klatek schodowych z policzonymi wartosciami głębokości, szerokości, oraz ilości schodków


# Testy
- Napisane z użyciem biblioteki gtest, sprawdzają czy obiekty klatek są poprawnie tworzone i usuwane, a także czy obliczenia matematyczne wychodzą zgodnie z oczekiwanym rezultatem.

# Przykładowe wyniki 

| Wysokość klatki schodowej (cm) | Długość klatki schodowej (cm) | Liczba stopni | Wysokość stopnia (cm) | Długość stopnia (cm) |
|--------------------------------|-------------------------------|---------------|------------------------|-----------------------|
| 250                            | 300                           | 14            | 17,86                 | 21,43                |
| 250                            | 400                           | 14            | 17,86                 | 28,57                |
| 300                            | 400                           | 16            | 17,86                 | 25,00                |
| 300                            | 500                           | 16            | 17,86                 | 31,25                |
| 350                            | 500                           | 18            | 17,86                 | 27,78                |
| 350                            | 600                           | 18            | 17,86                 | 33,33                |
| 400                            | 600                           | 20            | 17,86                 | 30,00                |
| 400                            | 700                           | 20            | 17,86                 | 35,00                |


# Dokumentacja klas projektu

## Klasa `Klatka`

### Opis
Klasa `Klatka` reprezentuje klatkę schodową i przechowuje informacje na temat długości oraz wysokości klatki. Umożliwia także obliczenie maksymalnej długości schodka na podstawie podanych wymiarów.

### Pola
- `double dlugosc`: Przechowuje całkowitą długość klatki schodowej.
- `double wysokosc`: Przechowuje całkowitą wysokość klatki schodowej.
- `double szerokosc`: Przechowuje szerokosc klatki schodowej.

### Metody
- **Konstruktor** `Klatka(double dlugosc, double wysokosc double szerokosc)`: Inicjalizuje obiekt `Klatka` z podaną długością i wysokością klatki schodowej.
- `double getGlebokoscSchodka() const`: Zwraca max głębokość schodka.
- `double getWysokoscStopnia`: Zwraca wysokosc stopnia.
- `int liczbaStopni()`: Zwraca liczbe stopni.
- `void obliczSchody() const`: Oblicza wartości schodów.

---

## Klasa `KreatorKlatek`

### Opis
Klasa `KreatorKlatek` zarządza instancjami klatek schodowych (`Klatka`), umożliwiając ich tworzenie oraz przechowywanie w kolekcji. Klasa pełni rolę fabryki klatek schodowych i zapewnia wygodne operacje na grupach klatek.

### Pola
- `std::vector<Klatka> klatki`: Wektor przechowujący obiekty `Klatka`, reprezentujące różne klatki schodowe.

### Metody
- **Konstruktor domyślny** `KreatorKlatek()`: Inicjalizuje pustą kolekcję klatek schodowych.
- `void dodajKlatke(double dlugosc, double wysokosc)`: Tworzy nowy obiekt `Klatka` z podanymi wymiarami i dodaje go do kolekcji `klatki`.

---
