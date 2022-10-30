#include "EVector.h"
#include "Exception.h"

EVector::EVector():capacity(0), n(0), A(NULL){};

EVector::~EVector(){}

int EVector::size() const{
    return n;
}

bool EVector::empty() const{
    return n < 1;
}

Elem& EVector::at(int i){
    if(i < 0 || i >= n) throw Exception("out of range");
    return A[i];
}

Elem& EVector::operator[](int i){
    return A[i];
}

void EVector::erase(int i){
    for(int j = i+1; j < n; j++){
        A[j-1] = A[j];
    }
    n--;
}

void EVector::insert(int i, const Elem& e){
    if(capacity <= n){
        reserve(max(1,2*capacity));
    }
    for(int j = n-1; j >= i; j--){
        A[j+1] = A[j];
    }
    A[i] = e;
    n++;
}

void EVector::reserve(int N){
    if(N > capacity){
        Elem *newVector = new Elem[N];
        for(int i = 0; i < n; i++){
            newVector[i] = A[i];
        }
        if(A != NULL) delete [] A;
        A = newVector;
        capacity = N;
    }
}

void EVector::showAll(){
    for(int i = 0; i < n; i++){
         cout << A[i] << " ";
    }
    cout << endl;
}



