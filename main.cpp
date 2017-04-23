#include <iostream>
#include <stack>

using namespace std;

int n;
stack<char> st;
#define MAX_CASES 100
string str[MAX_CASES];


bool isOp(char c)
{
    if(c == '+' || c== '-' || c== '*' || c=='/'||c=='^')
        return true;
    else
        return false;
}

int main()
{
    //cout << "Hello world!" << endl;
    cin >> n;

    for(int i =0; i < n; i++)
    {

        cin >> str[i];
    }
    for(int i=0; i < n; i++)
    {

        for(int j = 0; j < str[i].length(); j++)
        {
            if(str[i][j] == '(')
                continue;
            if(isOp(str[i][j])) // push
            {
                st.push(str[i][j]);
            }
            else if(str[i][j] == ')') // pop
            {
                if(!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
            }
            else
            {
                cout << str[i][j];
            }
        }
        cout <<endl;
    }
    return 0;
}
