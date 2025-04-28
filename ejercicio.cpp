#include <iostream>
using namespace std;
int main (){
    //declaramos variable tipo texto
    string you = "";
    //almacenamos el valor en la variable
    cout << "Kraven quiere saber quien eres, te pregunta ¿Eres una persona, un malo o un animal?" << endl;
    cin >> you ;
    //determinamos lo que nos ingresa el usuario y verificamos si es persona y ponemos el mensaje
    if (you == "persona"){
        cout << "Kraven te saluda" << endl;
    } 
    //verificamos si es malo y ponemos el mensaje
    else if (you == "malo"){
        cout << "Kraven decide cazarte" << endl;
    } //verificamos si es animal y ponemos el mensaje
    else if (you == "animal") {
        cout << "Kraven dedice protegerte" << endl;
    } //si no es animal ni persona ni malo, entonces dirá lo siguiente 
    else {
        cout << "Kraven pasa de largo" << endl;
    }
    return 0;
}