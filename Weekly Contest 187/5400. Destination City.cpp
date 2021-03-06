You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.
Example 1:

Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
Output: "Sao Paulo" 
Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".

##########################################################SOLUTION####################################################################

#include <bits/stdc++.h>
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> destinations;
        for(int i=0; i<paths.size(); i++){
            destinations[paths[i][0]] = paths[i][1];
        }
        
        for(auto it=destinations.begin(); it!=destinations.end(); it++){
            if(destinations.count(it->second)==0){
                return it->second;
            }
        }
        return paths[paths.size()-1][1];
    }
};
