#include "Human.h"
#include <fstream>
#ifndef COACH_H
#define COACH_H

class Coach : public Human
{
private:
    String nameFootballTeam;

public:
    Coach(String = "", String = "", String = "", String = "", String = "");
    ~Coach();
    void show();
    void setNameFootballTeam(String);
    String getNameFootballTeam();
    void enterInforCoach();
    void saveInforIntoFile(ofstream &);
    Coach getCoachByNameFootballTeam(String);
    Coach getCoachById(String);
    void updateCoach();
    void deleteCoachById();
    void dkcDeleteCoach(String, String);
    void addCoachFromFile();
    void showCoach();
    void showIDCoach();
    void showNameCoach();
    String changeCoach();
    String returnnameCoach(String);
    String nameCoachbynameFB(String);
};

#endif