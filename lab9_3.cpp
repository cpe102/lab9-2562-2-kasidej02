#include<fstream>
#include<string>
#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int count = 0;
    float sum=0,ee;
    string text;
    ifstream yu("C:\\Users\\lab314-13\\Desktop\\lab9\\lab9-2562-2-kasidej02\\score.txt");
    while(getline(yu,text)){
        sum += atof(text.c_str());
        count++;
        ee += pow(atof(text.c_str()),2);
    }
    
    cout <<"Number of data = " << count <<"\n";
    cout <<"Mean = " << sum/count <<"\n";
    cout << "Standard deviation = "<< sqrt(ee/count - (sum/count)*(sum/count));

}



//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
