#include <iostream>

using namespace std;

int main()
{
    int low, high, flag;

    cout << "Enter the lower and the higher number:";
    cin >> low >> high;


    while(low <= high){
        flag = 1;
        for(int i = 2; i < low/2; i++){
            if(low % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
               cout << low << " is a prime number. ";
        }
        low++;
    }
    return 0;
}
