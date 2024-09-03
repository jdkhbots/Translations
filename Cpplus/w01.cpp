#include <iostream>
#include <string>

using namespace std;

int main(){
    string adjective, animal, verb, exclamation, verb1, verb2, animal2, article;
    cout << "Please enter the following: \n\n";
    cout << "adjective: ";
    cin >> adjective;
    cout << "animal: ";
    cin >> animal;
    cout << "verb: ";
    cin >> verb;
    cout << "exclamation: ";
    exclamation[0] = toupper(exclamation[0]);
    cin >> exclamation;
    cout << "Another verb: ";
    cin >> verb1;
    cout << "Another verb: ";
    cin >> verb2;
    cout << "Another animal: ";
    cin >> animal2;

    if (animal2[0] == 'a' || animal2[0] == 'e' || animal2[0] == 'i' || animal2[0] == 'o' || animal2[0] == 'u'){
        article = "an";
    } else {
        article = "a";
    }

    cout << "\nYour story is: \n \n The other day, I was really in trouble. It all started when I saw a very "<< adjective << " " << animal << " " << verb << " down the hallway. \"" << exclamation << "!\" I yelled. But all I could think to do was to " << verb << " over and over. Miraculously, that caused it to stop, but not before it tried to " << verb2 << " right in front of my family. Oh we also saw " << article << " " << animal2 << "." ;

    return 0;

}