#include <string>
#include <stack>
#include <iostream>

using namespace std;

string decodeString(string s) {
        stack<int> num;
        stack<string> alpha;
        int currNum = 0;
        string currAlpha = "";
        int n = s.size();
        string ans = "";

        for (int i=0; i<n; i++) {
            if(isdigit(s[i])) {
                currNum = (currNum * 10) + (s[i] - '0');
            } else if (isalpha(s[i])) {
                currAlpha += s[i];
            } else if (s[i] == '[') {
                num.push(currNum);
                alpha.push(currAlpha);
                currNum = 0;
                currAlpha = "";
            } else if (s[i] == ']') {
                int nu = num.top(); num.pop();
                string str = alpha.top(); alpha.pop();
                string temp = "";
                while(nu) {
                    temp += currAlpha;
                    nu--;
                }

                cout << "str: " << str << " temp: " << temp << endl;

                ans += str + temp;
            }
        }
        return ans;
    }

int main() {
    string ans = decodeString("3[a]2[bc]");

    cout << ans << endl;
    return 1;
}