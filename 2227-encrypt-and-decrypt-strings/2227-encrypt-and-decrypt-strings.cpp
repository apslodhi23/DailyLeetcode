class Encrypter {
public:
    vector<char>k;
    vector<string>vall;
    map<char,int>m;
    map<string,int>ans;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& arr) {
        k=keys;
        vall=values;
        for(int i=0;i<keys.size();i++){
            m[keys[i]]=i;
        }
        for(auto x:arr){
            ++ans[encrypt(x)];
        }
        
    }
    
    string encrypt(string word1) {
        string s="";
        for(auto x:word1){
            int i=m[x];
            s+=vall[i];
        }
        return s;
    }
    
    int decrypt(string word2) {
        return ans[word2];
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */