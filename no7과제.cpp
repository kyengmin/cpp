#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size){

    for(int i=0;i<size;++i){
        int temp = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp;
    }
}
void printArray(int *p, int size){
    for (int i =0; i <size; ++i){
        std::cout << *(p+i) << " ";
    }

    std::cout << std::endl;
}


int main(){
    int a[] = { 1,2,3,4,5 };
    int b[] = { 9,8,7,6,5 };
    int size = sizeof(a)/sizeof(a[0]);

    cout << "배열 a = ";
    printArray(a,size);
    cout << "배열 b = ";
    printArray(b,size);
    cout << endl;

    cout << "swapArray() 실행.." << endl;
    swapArray(a,b,size);
    
    cout << "배열 a = ";
    printArray(a,size);
    cout << "배열 b = ";
    printArray(b,size);
}
