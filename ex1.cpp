#include <iostream>
using namespace std;

/**
 * Return whether the given number if inside the given range
 * @param number : the number
 * @param min : the range min
 * @param max : the range max
 * @return true if inside the range, false otherwise
 */
bool isInside(int number, int min, int max) {
    if(number> min && number< max){
        return true;
    }else{
        return false;
    }
}

int main() {
 
    // 1-  Input the number
   // TODO
    int num, min, max;
    cout<< "Input a number: ";
    cin>> num;

    // 2 - Input the range
    while(1){
        cout<< "Input min and max: ";
        cin>> min;
        cin>> max;
        if(min> max || min==max){
            cout<< "Invalid range!!! Please type in again";
        }else{
            break;
        }
    }

    // BONUS : If the user accidentally enters a minimum value that is larger
    // than the maximum value, ask them to enter the values again.
   
    // TODO

    // 3-  Check if the number is inside the range

    if(isInside(num, min, max)){
        cout<< num<< " is in range of "<< min<<" and "<< max;
    }else{
        cout<<num<< " is out of range inside" << min<<" and "<< max;
    }

   // TODO

    return 0;
}