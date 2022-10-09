// LeetCode - 225
class MyStack {
    
    Queue<Integer> q1,q2;
    
    public MyStack() {
        q1 = new ArrayDeque<>();
        q2 = new ArrayDeque<>();
    }
    
    public void push(int x) {
        // move elements from the 1st to 2nd queue
        
        while(!q1.isEmpty())
        {
            q2.add(q1.peek());
            q1.poll();
        }
        
        // add x in q1
        q1.add(x);
        
        // move all elements from 1st to 2nd queue
        while(!q2.isEmpty())
        {
            q1.add(q2.peek());
            q2.poll();
        }
    }
    
    public int pop() {
        if(q1.isEmpty())
            return -1;
        int front = q1.peek();
        q1.poll();
        
        return front;
    }
    
    public int top() {
        return q1.peek();
    }
    
    public boolean empty() {
        return q1.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
