#include <bits/stdc++.h>
using namespace std;

int draw_snake(int row, int col){
    bool row_presence = true;
    bool left_col_presence = true;
    for (int i = 0; i < row; i++){
        if (row_presence){
            for (int j = 0; j < col; j++){
                cout << "#";
            }
            cout << endl;
            left_col_presence = !left_col_presence;
        } else if (left_col_presence) {
            cout << "#";
            for (int j = 1; j < col; j++){
                cout << ".";
            }
            cout << endl;
        } else {
            for (int j = 0; j < col-1; j++){
                cout << ".";
            }
            cout << "#" << endl;
        }
        row_presence = !row_presence;
    }
    return 0;
}

int main(){
    int r, c;

    cin >> r >> c;

    draw_snake(r,c);

    return 0;
}
