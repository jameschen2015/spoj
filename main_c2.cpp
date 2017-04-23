#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{

    if(n == 1)
        return false;
    if(n== 2)
        return true;
    if(n%2==0 && n > 2)
        return false;
    int max_sqrt=sqrt(n);
    for(int i = 2; i <= max_sqrt; i++)
    {

        if(n%i==0)
            return false;
    }
    return true;
}

int n;
int begin,end;

#define MAX_CASES 10
int arrBegin[MAX_CASES];
int arrEnd[MAX_CASES];

int main()
{
    //cout << "Hello world!" << endl;
    cin >> n;
    for(int i =0; i < n; i++)
    {

        cin >> arrBegin[i];
        cin >> arrEnd[i];
    }
    for(int i=0; i < n; i++)
    {

        for(int j=arrBegin[i]; j <= arrEnd[i]; j++)
        {
            if(isPrime(j))
                cout<<j<<endl;
        }
        if(i!=(n-1))
        cout << endl;
    }
    return 0;
}
