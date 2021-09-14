#include <iostream>
#include <cstring>
using namespace std;
bool myStringCmp(char name[],char name1[]){
    if(strlen(name) != strlen(name1)){
        return false;
    }
    for(int i = 0; i < strlen(name); i++){
        if(name[i] != name1[i]){
            return false;
        }
        return true;
    }
}
int main(){
     char name[100];
     char name1[100];

    //1.
    //strlen(string) outputs the length of a string
    
    //  cout<<"Enter name : ";
    //  cin>>name;
    // cout<<"Length is : ";
    //  cout<<strlen(name)<<endl;

    
    //2.
    //strcmp(string1,string2) outputs 0 if both string are equal and non-zero if strings are not equal 
    
    // cin>>name>>name1;
    // if(strcmp(name,name1) == 0){
    //     cout<<"Equal ";
    // }else{
    //     cout<<"Not equal ";
    // }


    //selfmade of strcmp
    // cout<<"Enter two strings : ";
    // cin>>name>>name1;
    // if(myStringCmp(name,name1)){
    //     cout<<"Equal ";
    // }else{
    //     cout<<"not equal";
    // }


    //3.
    //strcpy(str1,str2) this function copy the content of str2 along with null character into str1 and if length of str1 is shorter than str2 then it will automatically put null character after all the content is copied of str2;
    
    
    // char str[100] = "abcd";
    // char str1[100] = "defg"; 
    // cout<<"Before copy : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;
    // strcpy(str,str1);
    // cout<<"After copy : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;
    
    //selfmade
    // cout<<"Enter string 1 : ";
    // cin>>name;
    // cout<<"Enter string 2 : ";
    // cin>>name1;
    // cout<<"Before copy : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;
    // for(int i = 0;i <= strlen(name1); i++){
    //     name[i] = name1[i];
    // }
    // cout<<"After copy : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;


    //4.
    //strncpy(dest_string,src_string,n) where n is the no. of characters to copy , this function is used to copy first n characters of src_string to dest_string.
    //NOTE : strncpy() does not copy null ('\0') character ,It copies null character only when third parameter i.e. n is more than the number of characters in src_string.
    // char str[100] = "abcd";
    // char str1[100] = "defg"; 
    // cout<<"Before copy : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;
    // strncpy(str,str1,3);
    // cout<<"After copy : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;



    //selfmade
    // int n;
    // cout<<"Enter string 1 : ";
    // cin>>name;
    // cout<<"Enter string 2 : ";
    // cin>>name1;
    // cout<<"Enter no. of characters to be copied : ";
    // cin>>n;
    // cout<<"Before copy : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;
    // for(int i = 0;i < n; i++){
    //     name[i] = name1[i];
    // }
    // cout<<"After copy : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;


    //5.
    //strcat(str1,str2) this function is used to concat str2 after str1.
    // char str[100] = "abcd";
    // char str1[100] = "defg"; 
    // cout<<"Before concat : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;
    // strcat(str,str1);
    // cout<<"After concat : "<<endl;
    // cout<<"name : "<<str<<endl;
    // cout<<"name1 : "<<str1<<endl;


    //selfmade
    // cout<<"Enter string 1 : ";
    // cin>>name;
    // cout<<"Enter string 2 : ";
    // cin>>name1;
    // cout<<"Before concat : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;
    // int last_index_of_str1 = strlen(name) -1;
    // for(int i = 0;i < strlen(name1); i++){
    //     int insert_pos = last_index_of_str1 + i +1;
    //     name[insert_pos] = name1[i];
    // }
    // cout<<"After copy : "<<endl;
    // cout<<"name : "<<name<<endl;
    // cout<<"name1 : "<<name1<<endl;






}
