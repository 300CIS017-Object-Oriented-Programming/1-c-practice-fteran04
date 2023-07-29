#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*################ input and output ################*/
int main1() {

    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a + b + c;
    cout << ans << endl;
    return 0;
}

/*################ conditional statements ################*/
int main2() {
    int n;
    cin >> n;
    if(n < 10 && n > 0){
        string arr[9] = {"one", "two", "three", "four", "five",    
        "six", "seven", "eight", "nine"};
        cout << arr[n - 1] << endl;
    }
    else{
        cout << "Greater than 9" << endl;
    }
    
    return 0;
}

/*################ for loop ################*/

int main3() {
    int a, b, i;
    cin >> a >> b;
    string arr[9] = {"one", "two", "three", "four", "five",    
    "six", "seven", "eight", "nine"};
    for(i = a; i <= b; i++){
        if(i < 10)
        cout << arr[i-1] << endl;
        else{
            if(i % 2 == 0)
            cout << "even" << endl;
            else
            cout << "odd" << endl;
        }
    }
    return 0;
}

/*################ functions ################*/
int solve(int arr[4]){
    int max = arr[0], i;
    for(i = 1; i < 4; i++){
        if (arr[i] > max)
        max = arr[i];
    }
    return max;
}

int main4() {
    int arr[4], i;
    for(i = 0; i < 4; i++){
        cin >> arr[i];
    }
    int ans = solve(arr);
    cout << ans << endl;
    return 0;
}

/*/*################ arrays introduction /*################*/
int main5() {
    int n, i;
    cin >> n;
    int arr[n];  
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}

/* strings */
int main6() {
	string a, b, c;
    int i;
    cin >> a >> b;
    c = a+b;
    cout << a.size() << " " << b.size() << endl;
    cout << c << endl;
    cout << b[0];
    for(i = 1; i < a.size(); i++)
    cout << a[i];
    
    cout << " " << a[0];
    for(i = 1; i < b.size(); i++)
    cout << b[i];
    
    cout << endl;
  
    return 0;
}

/* clases */
class Student{
    private:
    int age, standard;
    string first_name, last_name;
    
    public:
    void set_age(int a){
        this->age = a;
    }
    void set_standard(int s){
        this->standard = s;
    }
    void set_first_name(string f){
        this->first_name = f;
    }
    void set_last_name(string l){
        this->last_name = l;
    }
    
    int get_age(){
        return this->age;
    }
    int get_standard(){
        return this->standard;
    }
    string get_first_name(){
        return this->first_name;
    }
    string get_last_name(){
        return this->last_name;
    }
    
    string to_string(){
        string ans, str_age = "", str_standard, num;
        int i, age2 = this-> age, standard2 = this->standard;
        while(age2 != 0){
            num = (age2 % 10) + 48;
            str_age = num + str_age;
            age2 /= 10;
            
        }
        while(standard2 != 0){
            num = (standard2 % 10) + 48;
            str_standard = num + str_standard;
            standard2 /= 10;
            
        }
        
        ans = str_age + "," + this->first_name + "," + this->last_name
        + "," + str_standard;
        return ans;
    }
};

int main7() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}