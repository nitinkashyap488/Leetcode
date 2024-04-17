class MovingAverage {

    private int size;
    private Queue<Integer> q;
    private int sum;
    
    public MovingAverage(int size) {
        this.q = new LinkedList();
        this.size = size;
        this.sum = 0;
    }
    
    public double next(int val) {
        if(q.size() == size){
            sum -= q.remove();
        }
        q.add(val);
        sum += val;
        return (double)sum/q.size();
    }
}

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */