//
//  task1.cpp
//  practice_9_sem2
//
//  Created by Leonid Zemtsov on 20.04.2022.
//

#include <iostream>

using namespace std; //Ленивый(

class matrix
{
private:
    int mat[3][3];
    int c,l;

public:
    
    //Получение
    void getDate()
    {

        for (int i=0; i<5; i++)
            for (int j=0; j<5; j++)
                mat[i][j] = rand() % 10;
    };

    
    //Добавление
    void addDate()
    {
        cout << "Линия:\n";
        cin >> l;
        cout << "Колонка:\n";
        cin >> c;
        for (int i=0; i<l; i++)
        {
            for (int j=0; j<c; j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;}
    };

};




int main()
{
    matrix mat;
    mat.getDate();
    mat.addDate();

    return 0;
}
