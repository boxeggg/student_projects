// main.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "KlatkaSchodowa.h"
#include "FabrykaKlatek.h"
#include <gtest/gtest.h>

// Test czy FabrykaKlatek tworzy się poprawnie
TEST(FabrykaKlatekTest, TworzenieFabryki) {
    FabrykaKlatek fabryka;
    EXPECT_NO_THROW(FabrykaKlatek());
}

// Test dodawania klatek do wektora
TEST(FabrykaKlatekTest, DodawanieKlatek) {
    FabrykaKlatek fabryka;
    fabryka.dodajKlatke(300.0, 180.0, 100.0);
    fabryka.dodajKlatke(250.0, 150.0, 90.0);

    EXPECT_EQ(fabryka.getKlatke(0)->iloscSchodkow(), 10);
    EXPECT_EQ(fabryka.getKlatke(1)->iloscSchodkow(), 9);
}

// Test usuwania klatki
TEST(FabrykaKlatekTest, UsuwanieKlatek) {
    FabrykaKlatek fabryka;
    fabryka.dodajKlatke(300.0, 180.0, 100.0);

    KlatkaSchodowa* klatka = fabryka.getKlatke(0);
    EXPECT_TRUE(fabryka.usunKlatke(klatka));
}

// Test poprawności matematyki przy obliczaniu ilości stopni i głębokości
TEST(MatematykaTest, PoprawnaMatematyka) {
    KlatkaSchodowa klatka(300.0, 180.0, 100.0);

    EXPECT_NEAR(klatka.getWysokoscStopnia(), 18.0, 0.1);  // Wysokość stopnia
    EXPECT_NEAR(klatka.getGlebokoscStopnia(), 30.0, 0.1); // Głębokość stopnia
    EXPECT_EQ(klatka.iloscSchodkow(), 10);               // Ilość stopni
}

TEST(MatematykaTest, NiepoprawnaMatematyka) {
    KlatkaSchodowa klatka(300.0, 180.0, 100.0);

    EXPECT_NEAR(klatka.getWysokoscStopnia(), 19.0, 0.1);  // Wysokość stopnia
    EXPECT_NEAR(klatka.getGlebokoscStopnia(), 20.0, 0.1); // Głębokość stopnia
    EXPECT_EQ(klatka.iloscSchodkow(), 10);               // Ilość stopni
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
