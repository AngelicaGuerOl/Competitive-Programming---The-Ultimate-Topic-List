#include <iostream>
#include <vector>
#include <string>

using namespace std;

// tipos de tokens, definimos  tipos de tokens de una expresión
//enum es un tipo de dato para definir un conjunto de constantes con su nombre
enum TipoToken {
    COEFICIENTE,
    VARIABLE,
    EXPONENTE,
    OPERADOR,
    DERIVADA,
    INTEGRAL,
    FUNCION,
    DIFERENCIAL,
    DESCONOCIDO
};

// Definición de una estructura 'Token' que almacenará información sobre un token
struct Token {
    string valor;    // Valor del token (el texto o símbolo real, por ejemplo, "3", "x", "+", etc.)
    TipoToken tipo;  // El tipo de este token, definido por el enum TipoToken
};

// Función que verifica si un carácter es un operador
bool operador(char c) {
    // Devuelve verdadero si el carácter es uno de los operadores definidos
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == 'd' || c == 'i' || c == '(' || c == ')';
}

// Función que verifica si un carácter es una variable (excluyendo 'd' e 'i')
bool variable(char c) {
    return isalpha(c) && c != 'd' && c != 'i';
}

// Función que verifica si un carácter es un dígito (0-9)
bool digito(char c) {
    // Devuelve verdadero si el carácter es un dígito numérico
    return c >= '0' && c <= '9';
}

// Función que realiza el análisis léxico de la expresión (convierte la expresión en una lista de tokens)
vector<Token> analizar_lexico(const string& expresion) {
    vector<Token> tokens;  // Vector donde almacenaremos los tokens encontrados
    string buffer = "";    // Cadena temporal para almacenar caracteres de un token
    bool esperando_exponente = false;  // indicador que se utiliza para determinar si el número que se ha acumulado en buffer debe ser clasificado como un exponente.

    // Recorremos cada carácter de la expresión
    for (size_t i = 0; i < expresion.size(); i++) {
        char c = expresion[i];  // Tomamos el carácter actual

        // Detectar f(x) como FUNCION
        if (c == 'f' && i + 2 < expresion.size() && expresion[i + 1] == '(' && expresion[i + 2] == 'x' && expresion[i + 3] == ')') {
            tokens.push_back({"f(x)", FUNCION});
            i += 3;  // Saltar los siguientes tres caracteres "(x)"
        }
        // Si el carácter es un dígito o un punto decimal, lo añadimos al buffer
        else if (digito(c) || c == '.') {
            buffer += c;  // Añadimos el carácter al buffer
            while (i + 1 < expresion.size() && (digito(expresion[i + 1]) || expresion[i + 1] == '.')) {
                // Mientras el siguiente carácter sea un dígito o punto decimal, lo agregamos al buffer
                buffer += expresion[++i];  // Avanzamos al siguiente carácter
            }
            // Si estamos esperando un exponente, lo agregamos como token de tipo EXPONENTE
            if (esperando_exponente) {
                tokens.push_back({buffer, EXPONENTE});
                esperando_exponente = false;  // Terminamos de esperar el exponente
            } else {
                // Si no es exponente, lo agregamos como un coeficiente
                tokens.push_back({buffer, COEFICIENTE});
            }
            buffer = "";  // Limpiamos el buffer para el siguiente token
        }
        // Si encontramos un '-' al principio o después de un operador, lo añadimos al buffer
        else if (c == '-' && (i == 0 || operador(expresion[i - 1]))) {
            buffer += c;  // Añadimos el carácter al buffer
        }
        // Si encontramos un '^', marcamos que esperamos un exponente
        else if (c == '^') {
            esperando_exponente = true;  // Establecemos que esperamos un exponente
        }
        else if (c == 'd' && i + 1 < expresion.size() && expresion[i + 1] == 'x') {
            tokens.push_back({"dx", DIFERENCIAL});
            i++;
        }
        // Si es 'd' o 'i', se clasifican como DERIVADA o INTEGRAL
        else if (c == 'd') {
            tokens.push_back({"d", DERIVADA});
        } else if (c == 'i') {
            tokens.push_back({"i", INTEGRAL});
        }

        // Si el carácter es un operador lo añadimos como token OPERADOR
        else if (operador(c)) {
            tokens.push_back({string(1, c), OPERADOR});  // Añadimos el operador al vector de tokens
        }
        // Si el carácter es una variable , lo añadimos como token VARIABLE
        else if (variable(c)) {
            tokens.push_back({string(1, c), VARIABLE});  // Añadimos la variable al vector de tokens
        }
        // Si encontramos un espacio,  lo ignoramos
        else if (c == ' ') {
            continue;  // Ignoramos el espacio y continuamos con el siguiente carácter
        }
        // Si el carácter no se ajusta a ningún tipo conocido, lo añadimos como token DESCONOCIDO
        else {
            tokens.push_back({string(1, c), DESCONOCIDO});  // Añadimos el carácter desconocido como token
        }
    }

    return tokens;  // Devolvemos el vector de tokens encontrados
}

// Función para imprimir los tokens encontrados
void imprimir_tokens(const vector<Token>& tokens) {
    // Recorremos el vector de tokens
    for (const auto& token : tokens) {
        // Comprobamos el tipo del token y lo imprimimos de acuerdo al tipo
        switch (token.tipo) {
            case COEFICIENTE: cout << "<coeficiente> "; break;
            case VARIABLE: cout << "<variable> "; break;
            case EXPONENTE: cout << "<exponente> "; break;
            case OPERADOR: cout << "<operador> "; break;
            case DERIVADA: cout << "<derivada> "; break;
            case INTEGRAL: cout << "<integral> "; break;
            case FUNCION: cout << "<funcion> "; break;
            case DIFERENCIAL: cout << "<diferencial> "; break;
            default: cout << "<desconocido> "; break;
        }
    }
    cout << endl;  // Al final, imprimimos un salto de línea para separar la salida
}

// Función principal (donde se ejecuta el programa)
int main() {
    string expresion;  // Variable para almacenar la expresión que ingresa el usuario
    cout << "Ingrese una expresion matematica: ";
    getline(cin, expresion);  // Leemos la expresión completa del usuario

    // Llamamos a la función 'analizar_lexico' para convertir la expresión en tokens
    vector<Token> tokens = analizar_lexico(expresion);

    cout << "\nTokens encontrados:" << endl;
    imprimir_tokens(tokens);

    return 0;
}
