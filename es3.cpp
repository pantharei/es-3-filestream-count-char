/*
3) Creare un programma che chiede all’utente un carattere
 e conta quante volte quel carattere compare nel file “testo.txt”.
*/

#include <fstream>
#include <iostream>

int main(){

    int char_count{};
    char input_char{},buf_char{};
    std::ifstream inFile;
    std::string path{"testo.txt"};

    //input
    std::cout << "Insert char : ";
    std::cin >> input_char;

    //reading from file via ifstream
    inFile.open(path);
    if(inFile.is_open()){
        while (inFile.get(buf_char))
        {
            if(buf_char == input_char)
                ++char_count;
        }
    }
    inFile.close();

    std::cout << "The char [" << input_char << ']';
    std::cout << " appears " << char_count << " times\n";

    return 0;
}