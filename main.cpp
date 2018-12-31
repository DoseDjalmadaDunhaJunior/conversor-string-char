#include "StringChar.hpp"
int main() {
    string aux = "um nome aleatorio";
    StringChar oi{};
    char *var =oi.converte(aux);

    for (int i = 0; var[i] != '\n'; i++) {
        cout<<var[i];
    }
    puts("");
    char temp[] = "outro nome aleatorio";
    cout<<oi.converte(temp);
    return 0;
}