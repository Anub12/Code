package linkedlist;

public class InsertNode {
	
	public static Node<Integer> insertNode(Node<Integer> head, int pos, int data) {
		int currPos = 0;
		
		Node<Integer> newNode = new Node<Integer>(data);
		if(pos == 0) {
			newNode.next = head;
			head = newNode;
			return head;
		}
		Node<Integer> temp = head;
		while(temp != null && currPos < (pos - 1)) {
			temp = temp.next;
			currPos++;
		}
		if(temp == null) {
			return head;
		}
		newNode.next = temp.next;
		temp.next = newNode;
		
		return head;
	}
	
	public static Node<Integer> insertR(Node<Integer> head,int elem, int pos) {
		
		if(head == null && pos > 0) {
			return head;
		}
		
		if(pos == 0) {
			Node<Integer> newNode = new Node<>(elem);
			newNode.next = head;
			return newNode;
		} else {
//			Node<Integer> smallerHead = insertR(head.next, elem, pos);
//			head.next = smallerHead;
			head.next = insertR(head.next, elem, pos-1);
			return head;
		}
	}

	public static void main(String[] args) {
//		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
//		Node<Integer> head2 = insertNode(head, 6, 78);
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		head = insertR(head, 20, 1);
		linkedlist.LinkedListUse.print(head);
	}

}
