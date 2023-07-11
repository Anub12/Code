package linkedlist;

public class FindNode {
	
	public static int findNode(Node<Integer> head, int val){
		if(head == null) {
			return -1;
		}
		int i = 0;
		Node<Integer> temp = head;
		while(temp != null) {
			if(temp.data.equals(val)) {
				return i;
			}
			i++;
			temp = temp.next;
		}
		return -1;
	}

	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		int result = findNode(head, 3);
		System.out.println("The Node is at index: " + result);
	}
}
