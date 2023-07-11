package linkedlist;

public class DoubleNode<T> {
	T data;
	DoubleNode next;
	DoubleNode prev;
	DoubleNode(T data) {
		this.data = data;
		next = null;
		prev = null;
	}
}
// I don't know what I can do with all this