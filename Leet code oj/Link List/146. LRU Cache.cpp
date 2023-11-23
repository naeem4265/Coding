class LRUCache {
    struct node{
        int val;
        node *parent;
        node *child;
    };
    node *head = NULL, *tail = NULL;
    node *ref[10005] ;
    int cnt;
    
public:
    LRUCache(int capacity) {
        cnt = capacity;   
        for(int i=0; i<10004; i++){
            ref[i] = new node;
            ref[i]->val = -1;
            ref[i]->parent = NULL;
            ref[i]->child = NULL;
        }
    }
    
    int get(int key) {  
        // Check key apair or not. if tail point the key then nothing change
        if( tail == ref[key] || ref[key]->val == -1)   return ref[key]->val;
        // If head pointed key, then head will move next one. and key will add as a tail. 
        if( head == ref[key]){
            head = head->child;
            ref[key]->parent = tail;  
            tail->child = ref[key];
            ref[key]->child = NULL;
            tail = ref[key];
        } else {          // Else. key is in middle of link list. connect it's parent and child. and add key as a tail. 
            ref[key]->parent->child = ref[key]->child;
            ref[key]->child->parent = ref[key]->parent;
            tail->child = ref[key];
            ref[key]->parent = tail;
            ref[key]->child = NULL;
            tail = ref[key];
        }             
        return ref[key]->val;
    }
    
    void put(int key, int value) {  
        // If it's first element, then make it head, and tail.
        if( head==NULL ){
            head = ref[key];
            tail = head;
            ref[key]->val = value;
            ref[key]->parent = NULL;
            ref[key]->child = NULL;
            cnt--;
        } else if(ref[key]->val != -1 ){  // if it exits. then change value. and repeat get function. 
            ref[key]->val = value;
            if( tail == ref[key] )   return ;
            if( head == ref[key]){
                head = head->child;
                ref[key]->parent = tail;
                tail->child = ref[key];
                ref[key]->child = NULL;
                tail = ref[key];
            } else {
                ref[key]->parent->child = ref[key]->child;
                ref[key]->child->parent = ref[key]->parent;
                tail->child = ref[key];
                ref[key]->parent = tail;
                ref[key]->child = NULL;
                tail = ref[key];
            }
        } else {    // Else will add to end of link list. and if capacity exceed then change head to next. 
            ref[key]->val = value;
            ref[key]->parent = tail;
            ref[key]->child = NULL;
            tail->child = ref[key];
            tail = ref[key];  
            if( cnt==0 ){  
                head->val = -1;
                node *temp = head;  
                head = head->child;   
                temp->child = NULL;
                head->parent = NULL;
            } else cnt--;
        }    
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */