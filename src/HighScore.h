#ifndef HIGH_SCORE_H
#define HIGH_SCORE_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>

using std::string;
using std::vector;

class HighScore
{

public:
	//HighScore();
   HighScore(){};
   ~HighScore(){};
   
    void WriteGameScore(int score);
    int GameScore();
};

#endif