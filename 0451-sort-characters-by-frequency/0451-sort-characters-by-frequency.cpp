class Solution {
public:
    string frequencySort(string s) {
        int size = s.size();
        unordered_map<char,int>map;
        
        for(int i=0; i<size; i++){
            map[s[i]]++;
        }
        
        vector<pair<int,char>>vec;
        for(auto it:map){
            // pair<int,char> prr = make_pair(it.second, it.first);
            // vec.push_back(prr);
            vec.push_back(make_pair(it.second, it.first));
        }
        string str="";
        sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++){
            while(vec[i].first != 0){
                str.push_back(vec[i].second);
                vec[i].first--;
            }
            
        }
        reverse(str.begin(),str.end());
        return str;
    }
};