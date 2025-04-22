#include <bits/stdc++.h>
using namespace std;

void pattern1(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern2(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern3(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern4(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern5(int rows, int cols)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern6(int rows, int cols)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern7(int rows, int cols)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((i - rows) * -2) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern8(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // cout << " " << (((i - rows) * 2) + 1) * -1 ;
        for (int j = 0; j < (((i - rows) * 2) + 1) * -1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern9(int rows, int cols)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((i - rows) * -2) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < (rows - 1); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (((i - (rows - 1)) * 2) + 1) * -1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern10(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < (rows - 1); i++)
    {
        for (int j = 0; j < ((rows - 1) - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern11(int rows, int cols)
{
    int start = 1;
    for (int i = 0; i < rows; i++)
    {
        // for(int j = 1 ; j <= i ; j++){
        //     if(i % 2 != 0){
        //         j % 2 == 0 ? cout << "0" : cout << "1" ;
        //     } else {
        //         j % 2 == 0 ? cout << "1" : cout << "0" ;
        //     }
        // }
        i % 2 == 0 ? start = 1 : start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern12(int rows, int cols)
{
    int start = 2 * (rows - 1);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < start; j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
        start -= 2;
    }
}

// 0 => 6 => 0
// 2 => 4 => 1
// 3 => 2 => 3
// 4 => 0 => 4

// rows 5 => spaces 8
// rows 4 => spaces 6
// rows 3 => spaces 4
// rows 2 => spaces 2
// rows 1 => spaces 0

// 1  1
// 1221

// 11

void pattern13(int rows, int cols)
{
    int cnt = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern14(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
    cout << endl;
}

void pattern15(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (rows - i); j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
    cout << endl;
}

void pattern16(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
    cout << endl;
}

void pattern17(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 1; j < rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }
    cout << endl;
}

void pattern18(int rows, int cols){
    for(int i = 0 ; i < rows ; i++){
        for(int j = rows - i; j <= rows ; j++){
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    cout << endl;
}

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

void pattern19(int rows, int cols)
{
    int start = 0;
    for (int i = rows - 1; i > 0 ; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < start ; j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
        start += 2;
    }
    start = 2 * (rows - 1);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < start; j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
        start -= 2;
    }
    cout << endl;
}

void pattern20(int rows, int cols)
{

    int spaces = 2 * (rows - 1);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for(int j = 0 ; j < spaces ; j++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
    spaces = 2;
    for (int i = 0; i < (rows - 1); i++)
    {
        for (int j = 0; j < ((rows - 1) - i); j++)
        {
            cout << "*";
        }
        for(int j = 0 ; j < spaces ; j++){
            cout << " ";
        }
        for (int j = 0; j < ((rows - 1) - i); j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }
    cout << endl;
}

void pattern21(int rows, int cols){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
} 

void pattern22(int n){
    for(int i = 0 ; i < 2*n - 1 ; i++){
        for(int j = 0 ; j < 2*n - 1 ; j++){
            int top = i;
            int left = j;
            int right = (2*n - 1) - 1 - j;
            int bottom = (2* n  -1 ) - 1 - i;
            cout << (n - min(min(top, left), min(right, bottom)));
            // cout << "7";
        }
        cout << endl;
    }
}

int main()
{
    pattern1(3, 3);
    pattern2(3, 3);
    pattern3(4, 4);
    pattern4(4, 4);
    pattern5(4, 4);
    pattern6(4, 4);
    pattern7(4, 4);
    pattern8(4, 4);
    pattern9(4, 4);
    pattern10(4, 4);
    pattern11(5, 5);
    pattern12(4, 4);
    pattern13(4, 4);
    pattern14(4, 4);
    pattern15(4, 4);
    pattern16(4, 4);
    pattern17(4, 4);
    pattern18(4, 4);
    pattern19(4, 4);
    pattern20(4, 4);
    pattern21(5, 4);
    pattern22(5);
}