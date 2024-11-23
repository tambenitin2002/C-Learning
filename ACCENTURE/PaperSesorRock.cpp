/*
Rock, Paper and Scissors'
Two players A and B are playing the game of Rock, Paper and scissors. Player A
chooses a move represented by String M and the move can be one of the following:
Rock, paper or scissors where
Rock beats scissors
Scissor beats paper
Paper beats rock
Your task is to find and return a string value representing the winning move for B.
Input 1:
rock
Output 1:
paper
Input 2:
scissor
Output 2:
Rock
*/

#include <iostream>
using namespace std;
int main(){
    string M;
    cin>>M;
    if(M=="rock"){
        cout<<"paper";
    }else if(M=="scissors")
    {
        cout<<"rock";
    }else{
        cout<<"scissors";
    }
}