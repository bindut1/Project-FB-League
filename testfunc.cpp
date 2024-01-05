#include "FootballTeam/Player.h"
#include "FootballTeam/Coach.h"
#include "FootballTeam/Team.h"
#include "FootballTeam/Human.h"
#include "Match/Match.h"
#include "Match/HistoryMatch.h"
#include "Algorithm.h"
#include <Windows.h>
#include <iomanip>
#include "PrintCenter.h"
using namespace std;

int main()
{
   for(int i=1;i<=15;i++) {
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
      cout << i << endl;
   }
   

}