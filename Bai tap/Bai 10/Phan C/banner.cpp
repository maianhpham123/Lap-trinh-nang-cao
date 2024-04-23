
//the solution is created by AI
//I know how to do the problem but too lazy to code :))

#include <iostream>
#include <string>
#include <vector>

void printBigLetter(char letter)
{
    std::vector<std::string> bigLetters;

    // Add the "big letter" representation for each character
    bigLetters.push_back("  #####  \n #     # \n #     # \n #     # \n ####### \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" ######  \n #     # \n #     # \n ######  \n #     # \n #     # \n ######  \n");
    bigLetters.push_back("  #####  \n #     # \n #       \n #       \n #       \n #     # \n  #####  \n");
    bigLetters.push_back(" ######  \n #     # \n #     # \n #     # \n #     # \n #     # \n ######  \n");
    bigLetters.push_back(" ####### \n #       \n #       \n ######  \n #       \n #       \n ####### \n");
    bigLetters.push_back(" ####### \n #       \n #       \n ######  \n #       \n #       \n #       \n");
    bigLetters.push_back("  #####  \n #     # \n #       \n #   ### \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" #     # \n #     # \n #     # \n ####### \n #     # \n #     # \n #     # \n");
    bigLetters.push_back("  #####  \n    #    \n    #    \n    #    \n    #    \n    #    \n  #####  \n");
    bigLetters.push_back("       # \n       # \n       # \n       # \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" #     # \n #    #  \n #   #   \n #####   \n #   #   \n #    #  \n #     # \n");
    bigLetters.push_back(" #       \n #       \n #       \n #       \n #       \n #       \n ####### \n");
    bigLetters.push_back(" #     # \n ##   ## \n # # # # \n #  #  # \n #     # \n #     # \n #     # \n");
    bigLetters.push_back(" #     # \n ##    # \n # #   # \n #  #  # \n #   # # \n #    ## \n #     # \n");
    bigLetters.push_back("  #####  \n #     # \n #     # \n #     # \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" ####### \n #     # \n #     # \n ####### \n #       \n #       \n #       \n");
    bigLetters.push_back("  #####  \n #     # \n #     # \n #     # \n #   # # \n #    #  \n  #### # \n");
    bigLetters.push_back(" ####### \n #     # \n #     # \n ####### \n #   #   \n #    #  \n #     # \n");
    bigLetters.push_back("  #####  \n #     # \n #       \n  #####  \n       # \n #     # \n  #####  \n");
    bigLetters.push_back(" ####### \n    #    \n    #    \n    #    \n    #    \n    #    \n    #    \n");
    bigLetters.push_back(" #     # \n #     # \n #     # \n #     # \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" #     # \n #     # \n  #   #  \n   # #   \n    #    \n    #    \n    #    \n");
    bigLetters.push_back(" #     # \n #     # \n #     # \n  #   #  \n   # #   \n    #    \n    #    \n");
    bigLetters.push_back(" ######  \n #     # \n #     # \n #     # \n #     # \n #     # \n  #####  \n");
    bigLetters.push_back(" #     # \n ##   ## \n # # # # \n #  #  # \n #     # \n #     # \n #     # \n");
    bigLetters.push_back(" #     # \n ##    # \n # #   # \n #  #  # \n #   # # \n #    ## \n #     # \n");
    bigLetters.push_back(" #     # \n #     # \n  #   #  \n   # #   \n    #    \n       # \n       # \n");
    bigLetters.push_back(" ####### \n      #  \n     #   \n    #    \n   #     \n  #      \n ####### \n");

    if (letter >= 'a' && letter <= 'z') {
        std::cout << bigLetters[letter - 'a'];
    } else {
        std::cout << "Letter not supported." << std::endl;
    }
}

int main()
{
    std::string word;
    std::cout << "Enter a word (max 12 characters): ";
    std::cin >> word;

    if (word.length() > 12) {
        std::cout << "Word is too long." << std::endl;
        return 1;
    }

    for (char letter : word) {
        printBigLetter(std::tolower(letter));
    }

    return 0;
}