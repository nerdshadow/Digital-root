
#include <iostream>

using namespace std;

int digital_root(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int buff = 0;
    while (n > 10)
    {
        buff = buff + n % 10;
        n=n / 10;
    }
    buff = buff + n;
    if (buff>=10)
    {
        digital_root(buff);
    }
    else
    {
        return buff;
    }
    
}

int main()
{
    cout << digital_root(456879);
}
