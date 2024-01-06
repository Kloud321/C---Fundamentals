#include <iostream>
#include <string>

using namespace std;

int main() {
   string sentence;
    
    // Use getline to input a sentence with spaces
    getline(cin, sentence);

    cout << "Въведено изречение: " << sentence << endl;

    cout << "Гласна: ";
    
    // Iterate through each character and check if it's a vowel
    for (char ch : sentence) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {

            
           cout << ch << " ";
        }
    }

   cout << endl;

    return 0;
}
