#include<iostream>
#include<set>
using namespace std;


int count(int data[], int size) {
    set<int> uniqueElements;

    for(int i = 0; i < size; i++) {
        uniqueElements.insert(data[i]);
    }

    return uniqueElements.size(); 
}


