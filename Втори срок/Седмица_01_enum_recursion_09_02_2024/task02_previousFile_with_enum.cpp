#include <iostream>
#include <cstring>
using namespace std;

enum Position
{
    ASSISTANT,
    CHIEF_ASSISTANT,
    ASSOCIATE_PROFESSOR,
    PROFESSOR
};

class Scientist
{
private:
    char *name;
    Position position;
    int salary;
    int daily_earnings;

public:
    Scientist(){}
    Scientist(const char *name, Position position, int salary, int daily_earnings)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->position = position;
        this->salary = salary;
        this->daily_earnings = daily_earnings;
    }
    Scientist(const Scientist &other)
    {
        if(this != &other)  /// не е задължително
        {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
            position = other.position;
            salary = other.salary;
            daily_earnings = other.daily_earnings;
        }
    }

    const char *getName()
    {
        return name;
    }

    /// Get-ър, връщащ число от 0 до 3 - индекса на професията в enum-а Position
    Position getPosition() const
    {
        return position;
    }
    
    /*
    /// Get-ър, връщащ текст, представляващ самата професия
    const char* getPosition()
    {
        switch(position)
        {
            case 0: return "Assistant"; break;
            case 1: return "Chief Assistant"; break;
            case 2: return "Associate Professor"; break;
            case 3: return "Professor"; break;
            default: return "Nqma rabota"; break;
        }
    }
    */

    int getSalary() const
    {
        return salary;
    }

    int getDailyEarnings() const
    {
        return daily_earnings;
    }

    void setPosition(Position new_position)
    {
        position = new_position;
        salary = (new_position - position) * 100 + salary;
    }

    void setSalary(int new_salary)
    {
        salary = new_salary;
    }

    ~Scientist()
    {
        delete[] name;
    }
};

class University
{
private:
    Scientist **scientists;
    int num_scientists;
    int max_scientists;

public:
    University()
    {
        scientists = new Scientist*[10];
        this->num_scientists = 0;
        this->max_scientists = 10;
    }

    void appointScientist(Scientist *scientist)
    {
        if (num_scientists >= max_scientists)
        {
            cout << "No more positions available." << endl;
            return;
        }

        scientists[num_scientists++] = scientist;
    }

    void fireScientist(int index)
    {
        if (index < 0 || index >= num_scientists)
        {
            cout << "Invalid index." << endl;
            return;
        }

        delete scientists[index];

        for (int i = index; i < num_scientists - 1; i++)
        {
            scientists[i] = scientists[i + 1];
        }

        num_scientists--;
    }

    void promoteScientist(int index, Position new_position)
    {
        if (index < 0 || index >= num_scientists)
        {
            cout << "Invalid index." << endl;
            return;
        }

        Scientist *scientist = scientists[index];
        scientist->setPosition(new_position);
    }

    void reduceSalaries(Position position, int amount)
    {
        for (int i = 0; i < num_scientists; i++)
        {
            Scientist *scientist = scientists[i];

            if (scientist->getPosition() == position)
            {
                int new_salary = scientist->getSalary() - amount;

                if (new_salary < 0)
                {
                    new_salary = 0;
                }

                scientist->setSalary(new_salary);
            }
        }
    }

    void layOffScientists(Position position)
    {
        for (int i = 0; i < num_scientists; i++)
        {
            Scientist *scientist = scientists[i];

            if (scientist->getPosition() == position)
            {
                delete scientist;

                for (int j = i; j < num_scientists - 1; j++)
                {
                    scientists[j] = scientists[j + 1];
                }

                num_scientists--;
                i--;
            }
        }
    }

    int calculateProfit(int days)
    {
        int total_income = 0;
        int total_expenses = 0;

        for (int i = 0; i < num_scientists; i++)
        {
            Scientist *scientist = scientists[i];

            int daily_income = scientist->getDailyEarnings() * days;
            int salary_expense = scientist->getSalary() * days;

            total_income += daily_income;
            total_expenses += salary_expense;
        }

        return total_income - total_expenses;
    }

    void displayEmployeesAndProfit()
    {
        cout << "Employees:" << endl;

        for (int i = 0; i < num_scientists; i++)
        {
            Scientist *scientist = scientists[i];

            cout << scientist->getName() << " - " << scientist->getPosition()
                      << " - " << scientist->getSalary() << endl;
        }

        cout << "Profit: " << calculateProfit(30) << endl;
    }

    ~University()
    {
        for (int i = 0; i < num_scientists; i++)
        {
            delete scientists[i];
        }

        delete[] scientists;
    }
};
int main()
{
    Scientist s1("Alice", ASSISTANT, 1000, 100);
    Scientist s2("Bob", CHIEF_ASSISTANT, 2000, 200);
    Scientist s3("Charlie", ASSOCIATE_PROFESSOR, 3000, 300);
    Scientist s4("David", PROFESSOR, 4000, 400);

    University university;

    // Appoint some scientists
    university.appointScientist(&s1);
    university.appointScientist(&s2);
    university.appointScientist(&s3);
    university.appointScientist(&s4);

    // Promote a scientist
    university.promoteScientist(1, ASSOCIATE_PROFESSOR);

    // Reduce salaries of chief assistants
    university.reduceSalaries(CHIEF_ASSISTANT, 100);

    // Lay off all assistant professors
    university.layOffScientists(ASSISTANT);

    // Display employees and profit
    university.displayEmployeesAndProfit();

    return 0;
}
