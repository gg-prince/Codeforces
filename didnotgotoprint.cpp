#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector <int> memory;
        set <int> results;

        for(int i = 0; i < n; ++i){

            if(s[i] == '1'){
                memory.push_back(i + 1);
            }else if(s[i] == '2'){
                if(memory.size() > 0){
                    results.insert(memory[memory.size() - 1]);
                    memory.pop_back();
                }else{
                    results.insert(i + 1);
                }
            }else{
                results.insert(i + 1);
            }

        }

        cout << n - results.size() << "\n";

        for(int i = 0; i < n; ++i){

            if(!results.count(i + 1)){
                cout << i + 1 << " ";
            }

        }

        cout << "\n";

    }

    return 0;
}