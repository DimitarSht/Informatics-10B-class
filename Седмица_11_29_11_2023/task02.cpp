#include<iostream>
#include<string>
using namespace std;

/*
Създайте структура Task, представляваща задача с описание (string),
срок за изпълнение (int) и статус (bool)
(например, "изпълнена" - 1 или "незавършена" - 0).
Добавете функция, която променя статуса.
След това добавете още една функция,
която да променя срока за изпълнение на задачата.
Принтирайте на екрана задачата преди и
след изпълнението на функциите.
*/
struct Task
{
    string description;
    int deadline;
    bool status;
};

void changeStatus(Task &task1)
{
    if(task1.status)
    {
        task1.status = 0;
    }
    else
    {
        task1.status = 1;
    }
    cout<<"Task status changed!"<<endl;
}

void changeDeadline(Task &task1, int newDeadline)
{
    if(task1.deadline > newDeadline)
    {
        cout<<"New deadline not possible!"<<endl;
        return;
    }
    else
    {
        task1.deadline = newDeadline;
        cout<<"Deadline changed!"<<endl;
    }
}

void print(const Task &task)
{
    cout<<task.description<<endl;
    cout<<task.deadline<<" "<<task.status<<endl;
}

int main()
{
    struct Task task1;
    getline(cin, task1.description);
    cin>>task1.deadline>>task1.status;

    /// Print before changes
    cout<<"Before changes:"<<endl;
    print(task1);
    cout<<endl;

    /// Change Status
    changeStatus(task1);

    /// Change Deadline
    int newDeadline = 20;
    changeDeadline(task1, newDeadline);

    /// Print after changes
    cout<<"After changes:"<<endl;
    print(task1);

    return 0;
}
