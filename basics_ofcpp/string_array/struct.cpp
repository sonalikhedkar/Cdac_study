#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student{
    int age;
    //The number of characters in first_name and last_name will not exceed 50.
    char first_name[51];//1 for '\0'
    char last_name[51];//string last_name work as well
    int standard; 
};

int main() {
     struct Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " "<< st.standard;
    
    return 0;
}
