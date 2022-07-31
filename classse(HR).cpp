/*Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.
OUTPUT
The code provided by HackerRank will use your class members to set and then get the elements of the Student class.*/


#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    void set_age(int a)
    {
        age=a;
    }
    void set_standard(int b)
    {
        standard=b;
    }
    void set_first_name(string c)
    {
        first_name=c;
    }
    void set_last_name(string d)
    {
        last_name=d;
    }
    int get_age(){return age;}
    int get_standard(){return standard;}
    string get_first_name(){return first_name;}
    string get_last_name(){return last_name;}
    string too_string(){
        string m,n,f;
        m=to_string(age);
        n=to_string(standard);
        f=m+","+first_name+","+last_name+","+n;
        
        return f;
        
    }
    
    
};
int main() {
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
    cout << st.too_string();
    
    return 0;
}
