#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    string s, t,move1,move2,move3;
    cin >> s >> t;
    int Max = max((int)(abs(s[0] - t[0])), (int)(abs(s[1] - t[1])));
    int Min = min((int)(abs(s[0] - t[0])), (int)(abs(s[1] - t[1])));
    cout << Max << endl;
    move1 = s[0] < t[0] ? "R" : "L";
    move2 = s[1] < t[1] ? "U" : "D";
    move3 = move1 + move2;
    for (int i = 0; i < Min; i++)
        cout << move3 << endl;
    for (int i = 0; i < Max - Min; i++)
    {
        if (abs(s[0] - t[0]) > abs(s[1] - t[1]))
            cout << move1 << endl;
        else
            cout << move2 << endl;
    }
    return 0;
}