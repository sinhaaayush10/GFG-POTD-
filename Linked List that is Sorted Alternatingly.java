class Solution {
    
    public Node sort(Node head){
        //your code here, return the head of the sorted list
    
        ArrayList<Integer> values = new ArrayList<>();
        Node temp = head;
        while (temp != null) {
            values.add(temp.data);
            temp = temp.next;
        }
        Collections.sort(values);
        temp = head;
        int i = 0;
        while (temp != null) {
            temp.data = values.get(i++);
            temp = temp.next;
        }

        return head;
    }


}
