#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>
using namespace std;

string rotar(string palabra, int inicio) {
    if (inicio < 0) {
        return "";
    }

    return palabra[inicio] + rotar(palabra, inicio - 1);
}

int main() {
    string palabra = "hola";
    int inicio = palabra.length() - 1;
    cout << rotar(palabra, inicio) << endl;

    return 0;
}



