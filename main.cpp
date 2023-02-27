//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(){
//    ofstream send("/home/sunil/CLionProjects/only_c++/file.txt");
//    send << "I'm bot." << endl;
//    send << "I'm noob." << endl;
//    send << "I'm pro." << endl;
//    send.close();
//
//    ifstream read("/home/sunil/CLionProjects/only_c++/readme.txt");
//    string store;
//    getline(read, store);
//    cout << store;
//    read.close();
//}
//
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream send("/home/sunil/CLionProjects/only_c++/file.txt");
    send << "Hi this is last set for today.";
    send.close();

    ifstream recevice("/home/sunil/CLionProjects/only_c++/readme.txt");
    string st2;
    getline(recevice, st2);
    cout << st2;
}