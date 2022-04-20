//
//  task2.cpp
//  practice_9_sem2
//
//  Created by Leonid Zemtsov on 20.04.2022.
//

#include "iostream"

using namespace std; //Ленивый

int main()
{
    
    int l, c, a[10][10], b[10][10], sum[10][10], i, j;
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
    
    
    
    
    cout << endl << "Элемент второй матрицы: " << endl;
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Элемент b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j]; }
            for(i = 0; i < l; ++i)
                for(j = 0; j < c; ++j) sum[i][j] = a[i][j] + b[i][j];
            cout << endl << "Сумма: " << endl;
            for(i = 0; i < l; ++i)
                for(j = 0; j < c; ++j)
                {
                    cout << sum[i][j] << " ";
                    if(j == c - 1) cout << endl;
                }
            return 0;
}

