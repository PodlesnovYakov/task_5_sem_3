#include <iostream>
#include <forward_list>
#include <iterator>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов в списке." << endl;
    cin >> n;
    forward_list<int> myFlist(n);
    
    for (auto i = myFlist.begin(); i != myFlist.end(); i++) {
        *i = rand() % 10;
    }
    cout << "Вывод элементов списка." << endl;
    for (forward_list <int>::iterator it = myFlist.begin(); it != myFlist.end(); it++) {
        
        cout << *it << " ";
    }
    cout << endl;
    
    
    auto max_value = max_element(myFlist.begin(), myFlist.end());

    cout << "Максимальный элемент в списке = " << *max_value<<" "  << distance(myFlist.begin(),max_value)<< endl;


    
    return 0;
}


