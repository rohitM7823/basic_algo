#include <iostream>
#include <vector>
using namespace std;

template <typename d>
void count_sort(vector<d>& unsorted, vector<d>& sorted){
    d* hashtable = new d[100] {0};

    for(d& i:unsorted){
        hashtable[i]++;
    }

    for(d i=0, j=0; i<100; i++){
        if(hashtable[i] > 0){
            while(hashtable[i]--){
                sorted[j++] = i;
            }
        }
    }

    delete hashtable;
}

main(){
    vector<int> numbers = {3, 1, 5, 10, 3, 1, 4, 12, 5, 4, 10, 0, 12};
    vector<int> result(numbers.size());


    count_sort(numbers, result);

    for(auto& i:result) cout << i <<" ";

    cout << endl;
    system("pause");
}