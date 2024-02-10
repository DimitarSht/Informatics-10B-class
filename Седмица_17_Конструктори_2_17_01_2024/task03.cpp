#include<iostream>
using namespace std;
/*
Задача 3:
Реализирайте клас Table, който съдържа следната информация за дадена таблица:
•	rows – брой редове – цяло число
•	cols – брой колони – цяло число
•	elements – елементи на таблицата – двумерен масив
За дадения клас създайте 3-те вида конструктори и следните методи:
•	int getRows() – връща броя редове в таблицата
•	int getCols() – връща броя колони в таблицата
•	void setElementsOnPosition(int i, int j) –
поставя елемент на дадена позиция (i, j)
•	void addTables(Table &t1, Table &t2) –
събира две таблици и връща новата таблица – резултат от събирането
*/
class Table
{
   private:
    int rows;
    int cols;
    int**elements;
   public:
    Table ()
    {
        elements = nullptr;
    }
    Table (int rows, int cols, int**elements)
    {
        this->rows = rows;
        this->cols = cols;
        for (int i=0; i<this->rows; i++)
        {
            for (int k=0; k<this->cols; k++)
            {
                this->element[i][k] = element[i][k];
            }
        }
    }
    Table (Table &other)
    {
        if (this != &other)
        {
            this->rows = other.rows;
            this->cols = other.cols;
            for (int i=0; i<this->rows; i++)
        {
            for (int k=0; k<this->cols; k++)
            {
                this->element[i][k] = other.element[i][k];
            }
        }

        }
    }
    ~Table()
    {
        for(int i = 0; i < cols; i++)
        {
            delete[i] elements;
        }
    }


    int getRows()
    {
        return rows;
    }
    int getCols()
    {
        return cols;
    }
    void setElements (int newI, int newJ, int number)
    {
        for (int i=0; i<rows; i++)
        {
            for (int j=0; j<cols; j++)
            {
                if (i == newI && j== newJ)
                {
                    elemnts[i][j] = number;
                }
            }
        }
    }
    Table* addTables(const Table &t1, const Table &t2)
    {
        int **newTable = new *Table;
        for(int i = 0 ; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                newTable.element[i][j] = t1
            }
        }

    }

};

int main()
{


    return 0;
}
