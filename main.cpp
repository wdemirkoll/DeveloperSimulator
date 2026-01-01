#include <iostream>
#include <string>

// Array that stores developer rank titles
std::string Ranks[3] = {"Beginner Developer", "Junior Developer", "Senior Developer"};

// Variable that holds the current rank as text
std::string MyRank;

// Total number of completed projects
int Projects = 0;

// User menu selection-vote
int Vote;

// Determines the rank based on project count
void GameLogic(){
    // Beginner rank for 0–5 projects
    if(Projects >= 0 && Projects <= 5)
        MyRank = Ranks[0];

    // Junior rank for 6–12 projects
    else if(Projects <= 12)
        MyRank = Ranks[1];

    // Senior rank for 13+ projects
    else
        MyRank = Ranks[2];
}

// Displays player statistics
void StatisticMenu(){
    std::cout << "Your Rank: " << MyRank << std::endl;   // Show current rank
    std::cout << "Projects: " << Projects << std::endl << std::endl; // Show project count
}

// Displays the main menu options
void MainMenu(){
    std::cout << "[1] - Make a project" << std::endl; // Create a new project
    std::cout << "[2] - Exit" << std::endl;          // Exit
    std::cout << "Vote: ";
    std::cin >> Vote;                              // Read user input
}

int main(){
    // Main game loop
    while(true){
        GameLogic();        // Update rank logic
        StatisticMenu();   // Show statistics
        MainMenu();       // Show menu and get input

         switch(Vote){
         case 1:
            Projects++;   // Increase project count

            std::cout << "Successful!" << std::endl << std::endl;
            break;

         case 2:
            return 0;   // Exit the program

         default:
            std::cout << "Invalid Selection!" << std::endl << std::endl;
            break;
         }
    }

  return 0;
}
