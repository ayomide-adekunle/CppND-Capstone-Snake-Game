#include <iostream>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>
#include "HighScore.h"




void HighScore::WriteGameScore(int score){
  
 
  std::ofstream dataFile;
  int current_high_score;
  current_high_score = HighScore::GameScore();

  dataFile.open("../src/high_score.txt");
                
  if (!dataFile.is_open())
  {
    std::cout << " not possible to open file" << std::endl;
  }
  else
  {
    
    std::cout<< "Current High Score: " <<current_high_score<< " Your Score: "<<score << std::endl;
    //Close the high_score.txt file to update the high score
    if (score > current_high_score){
       dataFile << score;
    }

    dataFile.close();
  }
  
  
}
                
 int HighScore::GameScore(){
   
  std::string score;
  std::ifstream dataFile;

  dataFile.open("../src/high_score.txt");
                
  if (!dataFile.is_open())
  {
    std::cout << " not possible to open file" << std::endl;
  }
  else
  {

    dataFile >> score;

    dataFile.close();
  }
   
  return std::stoi(score);
  
  
}