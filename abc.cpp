#include <iostream>
#include <vector>
using namespace std;

class Portfolio {
private:
    string name;
    string role;
    string about;
    vector<string> skills;
    vector<string> projects;
    string email;
    string github;

public:
    void setBasicInfo() {
        cout << "Enter Your Name: ";
        getline(cin, name);

        cout << "Enter Your Role: ";
        getline(cin, role);

        cout << "About You: ";
        getline(cin, about);

        cout << "Email: ";
        getline(cin, email);

        cout << "GitHub Link: ";
        getline(cin, github);
    }

    void addSkills() {
        int n;
        cout << "\nHow many skills do you want to add? ";
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; i++) {
            string skill;
            cout << "Enter Skill " << i + 1 << ": ";
            getline(cin, skill);
            skills.push_back(skill);
        }
    }

    void addProjects() {
        int n;
        cout << "\nHow many projects do you want to add? ";
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; i++) {
            string project;
            cout << "Enter Project " << i + 1 << ": ";
            getline(cin, project);
            projects.push_back(project);
        }
    }

    void displayPortfolio() {
        cout << "\n===================================";
        cout << "\n         MY PORTFOLIO";
        cout << "\n===================================\n";

        cout << "Name     : " << name << endl;
        cout << "Role     : " << role << endl;
        cout << "About    : " << about << endl;

        cout << "\nSkills:\n";
        for (string skill : skills) {
            cout << " - " << skill << endl;
        }

        cout << "\nProjects:\n";
        for (string project : projects) {
            cout << " - " << project << endl;
        }

        cout << "\nContact Information:\n";
        cout << "Email    : " << email << endl;
        cout << "GitHub   : " << github << endl;

        cout << "\n===================================\n";
    }
};

int main() {
    Portfolio p;

    p.setBasicInfo();
    p.addSkills();
    p.addProjects();

    p.displayPortfolio();

    return 0;
}
