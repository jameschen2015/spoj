#include <iostream>
#include <vector>

#define MAGIC 42

using namespace std;

vector<char> vec;

int main()
{
    short num;
    while(true)
    {
        cin >> num;
        if(num == MAGIC)
        {
            for(vector<char>::iterator it = vec.begin(); it!=vec.end(); ++it)
            {
               cout << (short)*it<<endl;
            }
            break;
        }
        else
        {
            vec.push_back((char)num);
        }

    }

    //cout << "Hello world!" << endl;
    return 0;
}
