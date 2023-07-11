package linkedlist;

public class PrintIthNode {
	
	public static Node<Integer> createlinkedList() {
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(30);
		Node<Integer> n4 = new Node<>(40);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		return n1;
	}
	
	public static void printIthNode(Node<Integer> head, int i) {
		int position = 0;
		Node<Integer> temp = head;
		while(temp != null && position < i) {
			temp = temp.next;
			position++;
		}
		
		if(temp != null) {
			System.out.println(temp.data);
		}
	}

	public static void main(String[] args) {
		Node<Integer> head = createlinkedList();
		printIthNode(head, 3);
	}

}
