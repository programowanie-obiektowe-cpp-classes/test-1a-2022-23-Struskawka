[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=6855946&assignment_repo_type=AssignmentRepo)
# Kolokwium I - Grupa A
_Czas pracy: 60 minut_

## Zadanie 0 (bez punktów)
Doprowadź do skompilowania zalążka pobranego testu.
## Zadanie 1
W pliku `chlebek.hpp` napisz klasę `Bagietka`, która posiada:
- prywatne pole `double L`, reprezentujące długość bagietki
- prywatne pole `double W`, reprezentujące szerokość bagietki
- prywatne pole `double R`, reprezentujące proporcję jajek do mąki (bagietka z jajkami!!)
- publiczny konstruktor parametryczny `Bagietka(double, double, double)`, nadający polom odpowiednie wartości przy pomocy listy inicjalizacyjnej
- publiczny konstruktor domyślny nadający wszystkim trzem polom wartość `0.5`.
- publiczną metodę `double ileMaki(unsigned P) const` zwracającą masę mąki potrzebną do przygotowania liczby porcji równej argumentowi metody, zgodnie ze wzrorem `P * L * W * (1. - R) * C`
- publiczną metodę `Typ` typu `std::string` zwracającą `"Bagietka "`
- w pliku `main.cpp` utwórz obiekt klasy `Bagietka`.

## Zadanie 2
Dopisz klasę `Chlebek`, która posiada publiczną, czysto wirtualną (abstrakcyjną) metodę `double ileMaki(unsigned) const` oraz metodę Typ. Zmodyfikuj `Bagietka` tak, aby klasa ta dziedziczyła publicznie po `Chlebek` i nadpisywała odpowiednią metodę. Następnie napisz klasę `Razowy`, która także dziedziczy publicznie po `Chlebek`, nie posiada atrybutów oraz nadpisuje `ileMaki` tak, aby metoda ta zwracała po prostu argument metody `P` (skonwertowaną na typ `double`) oraz metodę  i `Typ` zwracającą odpowiedną nazwę. Dodaj do klasy `Chlebek` publiczną statyczną metodę `Piecz`, która:
- przyjmuje przez stałą referencję jeden argument typu `std::string`
- zwraca wskaźnik do obiektu typu `Chlebek`
- jeżeli argument `std::string` jest równy `Bagietka`, metoda dynamicznie alokuje i zwracanym adres obiektu typu `Bagietka` z polami o wartościach `L == 3.14`, `W == 0.42`, `R == 0.1`
- jeżeli argument `std::string` jest równy `Razowy`, dynamicznie alokuje i zwraca obiekt typu `Razowy` (użyj wygenerowanego przez kompilator konstruktora domyślnego).
- jeżeli argument nie jest ani `Bagietka` ani `Razowy` wydrukuj ostrzeżenie, w jednym z kolejnych zadań rzucisz tu wyjątkiem.

Na koniec dokonaj modyfikacji klasy `Chlbek` potrzebnej do poprawnego usuwania obiektów klas `Bagietka` i `Razowy` przez wskaźnik na obiekt `Chlebek`.

**Podpowiedź:** Klasa `std::string` posiada metodę `compare()`, służące do porównania z innym `std::string`. **Sprawdź w dokumentacji co zwraca compare()!**

## Zadanie 3
Napisz szablon funkcji `smaruj`, która:
- sparametryzowana jest jednym typem `T`
- przyjmuje jako pierwszy argument stałą referencję do obiektu typu `Chlebek`
- przyjmuje jako drugi argument stałą referencję do obiektu typu `T`, którym jest sparametryzowany (obiekt ten reprezentuje omastę - masło, smalec, pastę_z_fasoli, ...)
- zwraca obiekt typu `std::string`, będzie wynikiem wywołania metody `smaruj` drugiego argumentu na pierwszym argumencie (załóż, że typ będący parametrem szablonu posiada taką metodę)

## Zadanie 4
Uzupełnij kod w `main.cpp` o sekcję `try{}catch(){}`, przygotuj się na łapanie domyślnych wartości, oraz stałej referencji do `std::string` - w `catch` wydrukuj tą wartość. W metodzie `Piecz` klasy `Chlebek` rzuć `std::string` o wartośći `"Nieprawidlowy typ chleba!"`.

## Zadanie 5
Utwórz `std::vector` obiektów typu `Chlebek`, zapisz do listy 10 różnych `Bagietek` i `Razowych`. Następnie przesortuj kolekcję używając `std:sort` zgodnie z wartośćią zwracaną przez `ileMaki` dla `P=5`. Dla ostatniego elementu wywołaj funkcję `smaruj` dla argumentu szablonu `Smalec`.
