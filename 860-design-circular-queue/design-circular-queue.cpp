class MyCircularQueue {
public:
    vector<int> v;
    int st = 0, end = 0, n;

    MyCircularQueue(int k) {
        v = vector<int> (k+1);
        n = k + 1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v[end] = value;
        end = (end + 1) % n;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        st = (st + 1) % n;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return v[st];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        if(end == 0) return v[n-1];
        else return v[end - 1];
    }
    
    bool isEmpty() {
        return st == end;
    }
    
    bool isFull() {
        return st == (end + 1) % n;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */