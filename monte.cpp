#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    int cardValue;
    int playerChoice;

    std::string message = "You slide up to Schemy Beebs's card table and plop down your cash.\nHe glances at you out of the corner of his eye and starts shuffling.\nHe lays down three cards.";
    std::string win_message = "\nYou nailed it! Schemy Beebs reluctantly hands over your winnings, scowling.";
    std::string lose_message = "\nHa! Schemy Beebs wins again! The ace was card number ";
    std::string error_message = "\nInvalid choice man we have only 3 cards so you can only pick 1, 2 or 3!";
    std::cout << message << std::endl;

    std::string ace = "\n##\t##\t##\n##\t##\t##\n1\t2\t3";
    std::cout << ace << std::endl;

    std::cout << "\nWhich one is the ace ? " ;
    std::cin >> playerChoice;

    srand(time(0));

    cardValue = rand() % 3;

    if (cardValue == 0)
    {
        if (playerChoice == cardValue + 1)
        {
            std::cout << win_message << std::endl;
            std::string ace = "\nAA\t##\t##\nAA\t##\t##\n1\t2\t3";
            std::cout << ace << std::endl;
        }
        else
        {
            std::cout << lose_message << cardValue + 1;
            std::string ace = "\nAA\t##\t##\nAA\t##\t##\n1\t2\t3";
            std::cout << ace << std::endl;
        }
    }
    else if (cardValue == 1)
    {
        if (playerChoice == cardValue + 1)
        {
            std::cout << win_message << std::endl;
            std::string ace = "\n##\tAA\t##\n##\tAA\t##\n1\t2\t3";
            std::cout << ace << std::endl;
        }
        else
        {
            std::cout << lose_message << cardValue + 1;
            std::string ace = "\n##\tAA\t##\n##\tAA\t##\n1\t2\t3";
            std::cout << ace << std::endl;
        }
    }
    else if (cardValue == 2)
    {
        if (playerChoice == cardValue + 1)
        {
            std::cout << win_message << std::endl;
            std::string ace = "\n##\t##\tAA\n##\t##\tAA\n1\t2\t3";
            std::cout << ace << std::endl;
        }
        else
        {
            std::cout << lose_message << cardValue + 1;
            std::string ace = "\n##\t##\tAA\n##\t##\tAA\n1\t2\t3";
            std::cout << ace << std::endl;
        }
    }
    else
    {
        std::cout << error_message << std::endl;
    }
    system("PAUSE");
}