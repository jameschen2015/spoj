#include <iostream>
#include <cmath>

using namespace std;

int n;

#define MAX_CASES 24
string arrBegin[MAX_CASES];
string arrEnd[MAX_CASES];

int bit2int(string str)
{
   int len= str.length();
   int n = 0;
   for(int i = 0; i < len; i++)
   {
       n += (str[i] - '0')*pow(2,len-1-i);
   }
   return n;
}

#define SUB_LEN 5
int main()
{
    //cout << "Hello world!" << endl;
    //cin >> n;
    n = 24;
    for(int i =0; i < n; i++)
    {

        cin >> arrBegin[i];
        cin >> arrEnd[i];
    }
    for(int i=0; i < n; i++)
    {
        int iSub = bit2int(arrEnd[i]);
        string temp = arrBegin[i].substr(0,SUB_LEN);

        int iMain = bit2int(temp);
        bool flag = false;
        if(iMain == iSub)
        {
             cout << 1<<endl;
             continue;
        }
        for(int j = 0; j <5; j++)
        {

            iMain = (iMain - (arrBegin[i][j] - '0')*16)*2 + (arrBegin[i][j+SUB_LEN] - '0');

            if(iMain == iSub)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << 1<<endl;
        }
        else
        {
            cout << 0 <<endl;
        }

    }
    return 0;
}
