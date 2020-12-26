#include <iostream>
using namespace std;

void print(const int *const array, size_t size){
    for(size_t i{0}; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int *create_array(size_t size){
    int *new_array{nullptr};
    new_array = new int[size];
    for(size_t i{0}; i<size; i++){
        int num{0};
        cout<<"Please enter the number: ";
        cin>>num;
        *(new_array+i)=num;
    }
    return new_array;
}

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2){
    int *updated_array{nullptr};
    updated_array = new int[size1+size2];
    for(size_t i{0}; i<size1; ++i){
        for(size_t j{0}; j<size2; ++j){
            int num{0};
            num=*(array1+i)**(array2+j);
            // num=array1[i] * array2[j]
            *(updated_array+(i*size2+j))=num;
        }
    }
    return updated_array;
}

int main(){
    int size1{0};
    int *array1{nullptr};
    cout<<"please enter the size of array1: ";
    cin>>size1;
    array1 = create_array(size1);
    print(array1, size1);
    
    cout<<"---------------------------------"<<endl;
    
    int size2{0};
    int *array2{nullptr};
    cout<<"please enter the size of array2: ";
    cin>>size2;
    array2 = create_array(size2);
    print(array2, size2);
    
    cout<<"-----------------------------------"<<endl;
    int *updated{nullptr};
    int size{size1*size2};
    updated = apply_all(array1, size1, array2, size2);
    print(updated, size);
    
    delete [] array1;
    delete [] array2;
    delete [] updated;
	return 0;
}
