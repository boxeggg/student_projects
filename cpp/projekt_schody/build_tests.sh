#!/bin/bash

# Kompilacja plików C++
g++ main.cpp KlatkaSchodowa.cpp FabrykaKlatek.cpp -o program

# Sprawdzenie czy kompilacja zakończyła się sukcesem
if [ $? -eq 0 ]; then
  echo "Kompilacja zakończona sukcesem!"
  # Uruchomienie programu
  ./program
else
  echo "Kompilacja nie powiodła się!"
fi
