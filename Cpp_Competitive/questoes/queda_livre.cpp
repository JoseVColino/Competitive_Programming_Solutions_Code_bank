//https://judge.beecrowd.com/pt/problems/view/1552
#include <bits/stdc++.h>
using namespace std;


float get_distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2) +pow(y1-y2,2));
}

typedef struct person
{
    int x;
    int y;
} person;


int main(){
    
    int tests, peopleCount;
    person auxPerson;
    vector<person> people;
    cin >> tests;

    for (int i =0; i< tests; i++){
        cin >> peopleCount;
        for (int j=0;i<peopleCount;j++){
            cin >> auxPerson.x >> auxPerson.y;
            people.push_back(auxPerson);
        }
    }
    

    for (person p: people){
        cout << p.x << " " << p.y << endl;
    }
    return 0;
}