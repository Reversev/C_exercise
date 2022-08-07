#include <unordered_map>
#include <unordered_set>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    unordered_map<string, int> hashmap;
    hashmap["0"] = 19;
    hashmap["0"]++;
    hashmap.insert({"1",3});
    hashmap.insert({"2",10});
    cout << hashmap["0"] << endl;
    cout << hashmap["1"] << endl;
    cout << hashmap["2"] << endl;
    return 0;
}
