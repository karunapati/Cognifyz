#include <iostream>
#include <cstdlib>
#include <ctime>
std::string determineWinner(const std::string& userChoice, const std::string& computerChoice) {
    if (userChoice == computerChoice)
        return "It's a tie!";
    else if ((userChoice == "rock" && computerChoice == "scissors") ||
             (userChoice == "paper" && computerChoice == "rock") ||
             (userChoice == "scissors" && computerChoice == "paper"))
        return "You win!";
    else
        return "Computer wins!";
}

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::string choices[] = {"rock", "paper", "scissors"};

    
    std::cout << "Choose rock, paper, or scissors: ";
    std::string userChoice;
    std::cin >> userChoice;

   
    for (char &c : userChoice) {
        c = std::tolower(c);
    }

    if (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        std::cout << "Invalid choice. Please choose rock, paper, or scissors." << std::endl;
        return 1;
    }

    std::string computerChoice = choices[std::rand() % 3];
    std::cout << "Computer chose: " << computerChoice << std::endl;


    std::string result = determineWinner(userChoice, computerChoice);
    std::cout << result << std::endl;

    return 0;
}
