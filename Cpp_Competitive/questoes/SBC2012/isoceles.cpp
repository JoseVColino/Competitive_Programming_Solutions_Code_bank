#include <bits/stdc++.h>
using namespace std;


bool isTriangleValid(int start, int finish, vector<int> colunas){
    //validar start e finish
    if (start < 0 || finish > colunas.size()-1) return false;
    //primeiro em ordem crescente:
    int center = start + (finish- start)/2;
    int currentMinHeight = 1;
    for (int i = start;i <= center; i++){
        if (colunas[i] < currentMinHeight){
            return false;
        }
        currentMinHeight++;
    }

    currentMinHeight--;
    //agora a descida
    for (int i =center+1;i<=finish;i++){
        if (colunas[i] < currentMinHeight){
            return false;
        }
        currentMinHeight--;
    }
    
    return true;
}

int triangleHeight(int start, int finish){
    return (finish - start)/2 + 1;
}

int main(){
    int cols;
    cin >> cols;
    vector<int> colunas(cols);
    int maior = 0;
    for (int i = 0; i < cols; i++){
        cin >> colunas[i];
        maior = max(maior, colunas[i]);
    }
    int start = 0, finish = 0;
    int best = triangleHeight(start, finish);
    for (int i =0; i < cols; i++) {
        if (isTriangleValid(start, finish, colunas)){
            finish++;
        } else {
            while (!isTriangleValid(start, finish, colunas)){
                start++;
            }
        }
        best= max(best, triangleHeight(start, finish));
    }
    


    cout << best-1 << endl;
    return 0;
}