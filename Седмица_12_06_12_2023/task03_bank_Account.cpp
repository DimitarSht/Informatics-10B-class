#include<iostream>
using namespace std;

/*
Създайте структура BankAccount с полета за баланс и брой транзакции.
Напишете функции за депозиране и теглене на пари,
както и функция за извеждане на баланса.
Разширете банкова сметка, като добавите структура Transaction,
представляваща транзакция с дата, тип (депозит или теглене) и сума.
Включете транзакциите в банковата сметка и реализирайте функции
за извеждане на транзакции,
както и за изчисляване на общата сума на транзакциите.
*/

struct BankAccount
{
    double moneyIn;
    int transactions;
};

struct Bank
{
    BankAccount accounts[10];
    int currentAccounts;
    int overallTransactions;
};



void depositMoney(BankAccount &account, double money)
{
    if(money < 0)
    {
        cout<<"Incorrent amount!";
        return;
    }
    else
    {
        account.moneyIn += money;
    }
}

void withdrawMoney(BankAccount &account, double money)
{
    if(money < 0)
    {
        cout<<"Incorrent amount!";
        return;
    }
    else
    {
        account.moneyIn -= money;
    }
}

void input(BankAccount *bank, int countAccounts)
{
    for(int i = 0; i < countAccounts; i++)
    {
        cout<<"Bank Account number "<<i+1<<":"<<endl;
        cin>>bank[i].moneyIn>>bank[i].transactions;
    }
}

int numberTransactions(BankAccount *bank, int countAccounts)
{
    int counter = 0;
    for(int i = 0; i < countAccounts; i++)
    {
        counter += bank[i].transactions;
    }
    return counter;
}

bool isEmpty(BankAccount *bank, int countAccounts)
{
    bool empt = false;
    for(int i = 0; i < countAccounts; i++)
    {
        if(bank[i].moneyIn == 0)
        {
            empt = true;
        }
    }
    return empt;
}

void printAmmount(const BankAccount &account)
{
    cout<<account.moneyIn<<" "<<account.transactions<<endl;
}

int main()
{
    int countAccounts = 4, MAXAccountNumber = 0;
    struct BankAccount *bank = new BankAccount[countAccounts];
    double MAX_Ammount = 0.0;
    input(bank, countAccounts);

    for(int i = 0; i < countAccounts; i++)
    {
        if(bank[i].moneyIn > MAX_Ammount)
        {
            MAX_Ammount = bank[i].moneyIn;
            MAXAccountNumber = i+1;
        }
    }

    cout<<"Max ammount is "<<MAXAccountNumber
        <<" with "<<MAX_Ammount<<" leva!"<<endl;

    cout<<"Number of transactions in the bank: "<<numberTransactions(bank, countAccounts);


    return 0;
}


