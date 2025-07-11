#include <iostream>
#include <vector>
#include <string>

using namespace std;

// tipos de tokens
enum TipoToken { COEFICIENTE, VARIABLE, EXPONENTE, OPERADOR, DESCONOCIDO };

// Estructura token
struct Token {
    string valor;   // El valor del token (ej. "3", "x", "^", "+")
    TipoToken tipo; // El tipo del token
};

// Funciones auxiliares
bool operador(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == 'd'|| c == 'i' || c == '^'|| c == '('|| c == ')';  
}

bool variable(char c) {
    return isalpha(c) && (c != 'd' || c == 'i'); // Evita confundir con 'd e i' 
}

bool digito(char c) {
    return c >= '0' && c <= '9';
}


//  dividir expresión en tokens
vector<Token> analizar_lexico(const string& expresion) {
    vector<Token> tokens;
    string buffer = "";
    bool esperando_exponente = false;

    for (size_t i = 0; i < expresion.size(); i++) {
        char c = expresion[i];

        if (digito(c) || c == '.') { 
            buffer += c;
            while (i + 1 < expresion.size() && (digito(expresion[i + 1]) || expresion[i + 1] == '.')) {
                buffer += expresion[++i];
            }
            if (esperando_exponente) {
                tokens.push_back({buffer, EXPONENTE});
                esperando_exponente = false;
            } else {
                tokens.push_back({buffer, COEFICIENTE});
            }
            buffer = "";
        } 
        else if (c == '-' && i == 0 || operador(expresion[i - 1]) ) { 
            buffer += c;
        } 
        else if (operador(c)) { 
            tokens.push_back({string(1, c), OPERADOR});
        } 
        
        else if (variable(c)) {
            tokens.push_back({string(1, c), VARIABLE});
        }
        else if (c == ' ') {
            continue;
        } 
        else { 
            tokens.push_back({string(1, c), DESCONOCIDO});
        }
    }

    return tokens;
}

// Función mejorada para imprimir los tokens en formato requerido
void imprimir_tokens(const vector<Token>& tokens) {
    for (const auto& token : tokens) {
        switch (token.tipo) {
            case COEFICIENTE: cout << "<coeficiente> "; break;
            case VARIABLE: cout << "<variable> "; break;
            case EXPONENTE: cout << "<exponente> "; break;
            case OPERADOR: cout << "<operador> "; break;
            default: cout << "<desconocido> "; break;
        }
    }
    cout << endl;
}

// Función principal
int main() {
    string expresion;
    cout << "Ingrese una expresion matematica: ";
    getline(cin, expresion);

    vector<Token> tokens = analizar_lexico(expresion);

    cout << "\nTokens encontrados:" << endl;
    imprimir_tokens(tokens);

    return 0;
}