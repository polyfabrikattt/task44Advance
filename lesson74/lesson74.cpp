
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int k;
    cout << "Input n m and k";
    cin >> n >> m >> k;

    if (k < n * m && ((k % n == 0) || (k % m == 0))) {
       return true;
 
    }
    else {
        return false;
    }

}

 