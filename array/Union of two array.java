 //Your code here
        HashSet<Integer> union=new HashSet<>();
        for(int i:a){
            union.add(i);
        }
        for(int i:b){
            union.add(i);
        }
        return union.size();
