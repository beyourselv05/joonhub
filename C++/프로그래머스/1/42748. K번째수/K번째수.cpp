#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> vc;
    
    for(int i=0; i<commands.size(); i++) {
        int f = commands[i][0];
        int l = commands[i][1];
        int k = commands[i][2];
        
        for(int j=f-1; j<l; j++)  {
            vc.push_back(array[j]);
        }
        
        sort(vc.begin(), vc.end());
        
        answer.push_back(vc[k-1]);
        vc.clear();
    } 
    
    return answer;
}