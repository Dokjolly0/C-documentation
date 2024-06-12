#include <iostream>
#include <string>
#include <sstream>
#include <random>
#include <vector>
#include "cmd.h"
#include "function.h"

int main() {
    using namespace std;
    using cmd::print;
    using cmd::input;

    cout << "Hello world\n";
    auto eta = 20;
    string nome = "Alex";
    const int TENTATIVI = 10;
    const auto PI = 3.14159;
    print("Sto usando un nuovo Namespace! Il suo creatore è " + nome);

    //Data type
    int Eta = 20;
    char A = 'A';
    bool vero = true;
    string stringa = "Io sono una stringa!";
    float virgola1 = 1.1f;
    double virgola2 = 2.22222;

    // Data structure
    int numeri_usciti[5] = {1, 2, 3, 4, 5};
    struct Persona {
        string nome;
        string cognome;
    };
    class Studente {
        string nome;
        string cognome;
    };

    int a = {0};
    print(a);

    // Metodi stringhe
    string frase = "ciao, io sono Alex";
    frase[0] = 'C';
    string numero1 = "10";
    int numero2 = std::stoi(numero1);
    print(frase.length());
    frase.append(" Violatto");
    frase.clear();
    frase.append("ciao, io sono Alex");
    print(frase.empty());
    frase.replace(0, 4, "CIAO");
    print(frase.find("a"));

    print();
    print(frase, "Ciao");

    int x = {0};
    int y;
    int z;
    print(x);

    //Random
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    print(dis(gen));

    //Loop
    print("Ciclo while");
    int count = {0};
    while(count < 5){
        print(count);
        count++;
    }
    count = 0;

    print("Ciclo do while");
    do{
        print(count);
    } while(count > 0);

    std::uniform_int_distribution<> dis1(1, 10);

    print("Ciclo for");
    for(int i = {0}; i < 5; i++){
        print(i);
    }

    print("Ciclo foreach");
    for(char c : nome){
        print(c);
    }

    vector<string> nomi = {"Alex", "Marco", "Matteo", "Luca", "Anna", "Edoardo", "Matilde"};
    print("Foreach su array o vector");
    for(string nomePersona : nomi){
        print(nomePersona);
    }

    const int MAX_COLONNE = 10;
    const int MAX_RIGHE = 5;
    for(int i = 1; i <= MAX_RIGHE; i++){
        for(int j = 1; j <= MAX_COLONNE; j++){
            cout << i * j << "\t";
        }
        cout << "\n";
    }

    totaleSecondi("anni", 20);

    return 0;
}
