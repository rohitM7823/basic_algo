#include <iostream>
#include <vector>
using namespace std;

template<typename t>
void swap(t* a, t* b){
    t tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int partitioing(vector<int>& A, int low, int high){

    int pivot = A[low];
    int i = low, j = high;

    do{
        do{i++;} while(A[i] <= pivot);
        do{j--;} while(A[j] > pivot);

        if(i < j) swap(A[i], A[j]);
    }while(i < j);

    swap(A[low], A[j]);

    return j;
}


void quick_sort(vector<int>& unsorted, int begin, int end){

    int sortedPos;  

    if(begin < end){
        sortedPos = partitioing(unsorted, begin, end);
        quick_sort(unsorted, begin, sortedPos);
        quick_sort(unsorted, sortedPos+1, end);
    }
    
}
 
main(){
    vector<int> numbs;
    int n, input;
    cin >> n;
    while(n--){
        cin >> input;
        numbs.push_back(input);
    }

    numbs.push_back(INT32_MAX);

    quick_sort(numbs, 0, numbs.size()-1);


    for(int& e: numbs){
        if(e != INT32_MAX)
        cout << e << " ";
    }

    

    cout <<endl;

    system("pause");
}