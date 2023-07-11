package linkedlist;

public class DeleteNode {
	
	public static Node<Integer> deleteNode(Node<Integer> head, int pos) {
		int currPos = 0;
		if(head == null) {
			return head;
		}
		if(pos == 0) {
			return head.next;
		}
		Node<Integer> temp = head;
		while(temp != null && currPos < (pos - 1)) {
			temp = temp.next;
			currPos++;
		}
		if(temp == null || temp.next == null) {
			return head;
		}
		temp.next = temp.next.next;
		return head;
	}
	
	public static Node<Integer> deleteNodeR(Node<Integer> head, int pos) {
		if(head == null) {
			return head;
		}
		
		if(pos == 0) {
			return head.next;
		}
		
		Node<Integer> smallHead = deleteNodeR(head.next, pos-1);
		head.next = smallHead;
		
		return head;
	}
	
	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		Node<Integer> head2 = deleteNode(head, 2);
		linkedlist.LinkedListUse.print(head2);
	}
	// Dry run this problem
}
