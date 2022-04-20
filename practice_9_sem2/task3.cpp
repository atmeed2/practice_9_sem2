//
//  task3.cpp
//  practice_9_sem2
//
//  Created by Leonid Zemtsov on 20.04.2022.
//

#include "iostream"

using namespace std; //Все также


int main()
{
    
    
    
    int l, c, a[10][10], b[10][10], i, j;
    cout << "Линия:\n";
    cin >> l;
    cout << "Колонна:\n";
    cin >> c;
    cout << endl << "Элемент первой матрицы: " << endl;
    
    
    
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Элемент a " << i + 1 << j + 1 << ": ";
            cin >> a[i][j];

        }
    
    
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            cout << a[i][j] << " ";
    }

    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            b[i][j] = a[j][i];
        }
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            cout << b[i][j] << " ";
    }
    
            return 0;
}

