#include <iostream>
#include <vector>
#include <cstring> // c string
#include <string>

using namespace std;


int main(){
//    char first_name[20]{};
//    char last_name[20]{};
//    char full_name[50]{};
//    char temp[50]{};
//    cout<<"Please enter your first name:";
//    cin>>first_name;
//    cout<<"Please enter your last name:";
//    cin>>last_name;
//    cout<<"-----------------------------"<<endl;
//    cout<<"Hello, "<<first_name<<", your first name length is "<<strlen(first_name)<<endl;
//	strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    
//    cout<<"Enter your full name: ";
//    cin.getline(full_name, 50); // get full line, max is 50 characters.
//    cout<<"Your full name is: "<<full_name;
//    strcpy(temp, full_name);
//    for(size_t i{0}; i<strlen(full_name);++i){
//        if(isalpha(full_name[i])){
//            full_name[i]=toupper(full_name[i]);
//        }
//    }
//    cout<<"full name is: "<< full_name<<endl;
//    if(strcmp(temp, full_name)==0){
//        cout<<temp<<" and "<<full_name<<" are the same!"<<endl;
//    }else{
//        cout<<"Something went wrong!";
//    }

    // string encrypt ande decrept
//    string message;
//    string alphabet{"'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
//    string key{"STUVu'vHIJKwWXYZabciGLRjklghrsMNOPQtxyzABmndef#CDEopqF"};
//    cout<<"Please enter your message: ";
//    getline(cin, message);
//    string encrypted_message{};
//    cout<<"\nEncrypted message...";
//    for(char c:message){
//        size_t pos = alphabet.find(c);
//        if(pos!=string::npos){
//            char new_char=key.at(pos);
//            encrypted_message += new_char;
//        }else{
//            encrypted_message += c;
//        }
//    }
//    cout<<encrypted_message<<endl;
//    
    
    //challenge#1 word Pyramid
    string message{};
    cout<<"Please enter your message: ";
    getline(cin, message);
    const int size=message.size();
    for(int row{0}; row<size; ++row){
        string str{};
        int space_num = size-row-1; // quantity of space
        for(int pos=0; pos<space_num; ++pos){
            str+=" ";
        }
        for(int pos=0; pos<=row; ++pos){
            str+=message.at(pos);
        }
        for(int pos=row-1; pos>=0; --pos){
            str+=message.at(pos);
        }
        for(int pos=0; pos<space_num; ++pos){
            str+=" ";
        }
        cout<<str<<endl;
    }
    
    return 0;
    
}
