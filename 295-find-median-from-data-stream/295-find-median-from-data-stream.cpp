class MedianFinder {
public:
    priority_queue<int>pqmin;
    priority_queue<int,vector<int>,greater<int>>pqmax;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pqmin.empty()or pqmin.top()>num){
            pqmin.push(num);
        }else{
            pqmax.push(num);
        }
        if(pqmin.size()>(pqmax.size()+1)){
             pqmax.push(pqmin.top());
            pqmin.pop();
          
        }else if(pqmax.size()>(pqmin.size()+1)){
             pqmin.push(pqmax.top());
            pqmax.pop();
        }
    }
    
    double findMedian() {
        if(pqmin.size() == pqmax.size()) return pqmin.empty()?0:(                                          (pqmin.top()+pqmax.top())/2.0);         
        else return (pqmin.size() > pqmax.size())? pqmin.top():pqmax.top(); 
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */