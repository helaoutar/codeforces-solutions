#include <iostream>
#include <string>

using namespace std;


int main()
{
    char a;
    string ans;
    cin >> a >>ans;
    char keybord[30] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';','z', 'x', 'c', 'v', 'b', 'n', 'm',',', '.', '/' };
    for (int i = 0; i < ans.size(); i++)
        for (int j = 0; j < 30; j++)
        {
          if (ans[i] == keybord[j])
          {
              if (a == 'R')
                  ans[i] = keybord[j - 1];
              else
                  ans[i] = keybord[j + 1];
              break;
          }
        }

    cout << ans;

    return 0;
}