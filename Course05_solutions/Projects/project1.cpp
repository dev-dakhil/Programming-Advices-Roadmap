#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#define COLOR_RED "\033[31m"
#define COLOR_Green "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_REST "\033[0m"

using namespace std;

// Thats my first solution (:

enum enStonePaperSicssorChoice
{
    Stone = 1,
    Paper = 2,
    Sicssor = 3
};

enum enWhowin
{
    PlayerWin = 1,
    Computerwin = 2,
    Draw = 3
};

enum enColorSet
{
    Green = 1,
    Yellow = 2,
    Red = 3,
    defualt = 4
};

int ReadPostiveNumber()
{
    int num = 0;
    do
    {
        cin >> num;
    } while (num <= 0);

    return num;
}

enStonePaperSicssorChoice NumberToChoice(int NumberChoice)
{
    if (NumberChoice == 1)
    {
        return enStonePaperSicssorChoice::Stone;
    }
    else if (NumberChoice == 2)
    {
        return enStonePaperSicssorChoice::Paper;
    }
    else
    {
        return enStonePaperSicssorChoice::Sicssor;
    }
}

int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

// cout << "Enter your choice 1 for stone, 2 for paper 3 for sicssor: "; dount forget to put it in start game function
enStonePaperSicssorChoice UserChoice()
{
    enStonePaperSicssorChoice UserChoice = NumberToChoice(ReadPostiveNumber());

    return UserChoice;
}

void CountScore(enWhowin Winner ,int &UserWins , int &ComputerWins , int &DrawTimes){
    if (Winner == enWhowin::Draw){
        DrawTimes++;
    }
    else if(Winner == enWhowin::Computerwin ){
         ComputerWins++;
    }
    
    else if(Winner == enWhowin::PlayerWin ){
        UserWins++;
    }
}
string WhoWinnerTheGame(int UserWins, int ComputerWins){
    if (ComputerWins > UserWins){
        return "Computer";
    }
    else if (ComputerWins < UserWins){
        return "User";
    }
    else if (ComputerWins == UserWins){
        return "Draw";
    }
}

void FinalResult(int UserWins , int ComputerWins , int drawTimes){
    cout << "--------------------------------------------------------" << endl;
    cout << "------------------------- Game   Over --------------------" << endl;
    cout << "Number of User Wins: " << UserWins << endl;
    cout << "Number of computer Wins: " << ComputerWins << endl;
    cout << "Number of draw Wins: " << drawTimes << endl;
    cout << "                  The winner For this Game is " << WhoWinnerTheGame(UserWins,ComputerWins) << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------" << endl;
}


string WinnerToString(enWhowin WinnerRound)
{
    if (WinnerRound == enWhowin::PlayerWin)
    {
        return "Player";
    }
    else if (WinnerRound == enWhowin::Draw)
    {
        return "Draw";
    }
    else if (WinnerRound == enWhowin::Computerwin)
    {
        return "Computer";
    }

    else 
    return " ";
}

void SetColor(enColorSet Color)
{
    switch (Color)
    {
    case enColorSet::Red:
        cout << "\033[31m";
        cout << "\a";
        break;
    case enColorSet::Green:
        cout << "\033[32m";
        break;
    case enColorSet::Yellow:
        cout << "\033[33m";
        break;

    default:
        cout << "\033[0m";
    }
}

enColorSet WinnerSetterColorAndSound(enWhowin WinnerRound)
{
    switch (WinnerRound)
    {
    case enWhowin::PlayerWin:
        return enColorSet::Green;
    case enWhowin::Computerwin:
        return enColorSet::Red;
    case enWhowin::Draw:
        return enColorSet::Yellow;

    default:
        return enColorSet::defualt;
    }
}
enStonePaperSicssorChoice ComputerChoiceWithRandumNumber()
{
    enStonePaperSicssorChoice computerchoice = NumberToChoice(RandomNumber(1, 3));

    return computerchoice;
}
// cout << Enter How many rounds: "; dont forget to put it in the start game function before function call;
int HowManyRounds()
{

    int UserRounds = ReadPostiveNumber();

    return UserRounds;
}

enWhowin WhoWin(enStonePaperSicssorChoice UserChoice, enStonePaperSicssorChoice ComputerChoice)
{
    //
    if (UserChoice == ComputerChoice)
    {
        return enWhowin::Draw;
    }

    else if (UserChoice == enStonePaperSicssorChoice::Stone && ComputerChoice == enStonePaperSicssorChoice::Sicssor)
    {
        return enWhowin::PlayerWin;
    }

    else if (UserChoice == enStonePaperSicssorChoice::Sicssor && ComputerChoice == enStonePaperSicssorChoice::Paper)
    {
        return enWhowin::PlayerWin;
    }

    else if (UserChoice == enStonePaperSicssorChoice::Paper && ComputerChoice == enStonePaperSicssorChoice::Stone)
    {
        return enWhowin::PlayerWin;
    }
    else
    {
        return enWhowin::Computerwin;
    }
}


string ChoiceToStirng(enStonePaperSicssorChoice Choice)
{
    if (Choice == enStonePaperSicssorChoice::Stone)
    {
        return "Stone";
    }
    else if (Choice == enStonePaperSicssorChoice::Sicssor)
    {
        return "Sicssor";
    }

    else if (Choice == enStonePaperSicssorChoice::Paper)
    {
        return "Paper";
    }
    else
    return " ";
}
void RoundResult(enStonePaperSicssorChoice UserChoice, enStonePaperSicssorChoice ComputerChoice, enWhowin WinnerRound, int RoundsNumber)
{
    cout << "\n------------------------- Round " << to_string(RoundsNumber) << " Result -------------------------" << endl;
    cout << "User Choice: " << ChoiceToStirng(UserChoice) << endl;
    cout << "Computer Choice: " << ChoiceToStirng(ComputerChoice) << endl;
    SetColor(WinnerSetterColorAndSound(WinnerRound));
    cout << "Winner: " << WinnerToString(WinnerRound) << endl;
    cout << "------------------------------------------------------------------\n" << endl;

    SetColor(enColorSet::defualt);
}

void ClearTerminal(){
    cout << "\033[2J\033[1;1H";
}


    void StartGame(){
    cout << "Enter rounds from [1] to [9] \n" << endl;
    int Rounds = HowManyRounds();
    int UserWins = 0;
    int ComputerWins = 0;
    int DrawTimes = 0;
    
    for(int i = 1 ; i <= Rounds ; i++){
    cout << "Enter your choice [1] Stone , [2] Paper , [3] Sicssor: ";
    enStonePaperSicssorChoice userchoice = UserChoice();
    enStonePaperSicssorChoice computerchoice = ComputerChoiceWithRandumNumber();
    enWhowin Winner = WhoWin(userchoice,computerchoice);
    RoundResult(userchoice, computerchoice,Winner,i);   
    CountScore(Winner,UserWins,ComputerWins,DrawTimes);
    
    }
    FinalResult(UserWins,ComputerWins,DrawTimes);


}



bool PlayAgainInSelaction(){
    
      char userChar = 'n';
    cout << "do you want play again [y] or [n] " << endl;
    cin >> userChar;
       return (userChar == 'y');
}
void PlayGame(){
    
    do{
        ClearTerminal();
        StartGame();
    }while(PlayAgainInSelaction());
}

int main()
{
    srand((unsigned)time(NULL));
    PlayGame();

    return 0;
}