#include<fstream>
#include<string>
using namespace std;

int main(){
    
    ofstream cheerbook("C:\\Users\\lab314-13\\Desktop\\lab9\\lab9-2562-2-kasidej02\\cheerbook_copy.txt");
    ifstream temp("cheerbook.txt");
    string text;
    cheerbook << "-------------------- SOTUS ---------------------\n" ;
    while (getline(temp,text)){
        cheerbook << text << "\n";
    }
    cheerbook << "-------------------- SOTUS ---------------------\n" ;
}

//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
