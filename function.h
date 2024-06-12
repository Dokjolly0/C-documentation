#ifndef FOUNDAMENTAL_FUNCTION_H
#define FOUNDAMENTAL_FUNCTION_H

#include <string>
#include "cmd.h"

// Definizione della funzione
long totaleSecondi(std::string tipo, int numero) {
    if (tipo == "minuti") {
        cmd::print(numero * 60);
        return numero * 60;
    }
    if (tipo == "ore") {
        cmd::print((60 * 60) * numero);
        return (60 * 60) * numero;
    }
    if (tipo == "giorni") {
        cmd::print((60 * 60 * 24) * numero);
        return (60 * 60 * 24) * numero;
    }
    if (tipo == "anni") {
        cmd::print((60 * 60 * 24 * 365) * numero);
        return (60 * 60 * 24 * 365) * numero;
    }
    return 0; // Aggiungi un valore di ritorno predefinito per evitare warning
}

#endif // FOUNDAMENTAL_FUNCTION_H
