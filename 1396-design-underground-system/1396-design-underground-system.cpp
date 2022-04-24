class UndergroundSystem {
public:
    map<int,pair<string,int >>m;
    map<pair<string,string>,vector<int>>time;
    UndergroundSystem() {
        m.clear();
        time.clear();
    }
    
    void checkIn(int id, string s, int t) {
        m[id]={s,t};
    }
    
    void checkOut(int id, string s, int t) {
        time[{m[id].first,s}].push_back(t-m[id].second);
    }
    
    double getAverageTime(string s, string e) {
        double su=0,c=0;
        for(auto x:time[{s,e}]){
            su+=(double)x;
            c++;
        }
        return su/c;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */